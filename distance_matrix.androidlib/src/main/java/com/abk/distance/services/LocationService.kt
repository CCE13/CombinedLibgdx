package com.abk.distance.services

import android.annotation.SuppressLint
import android.app.*
import android.content.Context
import android.content.Intent
import android.graphics.Color
import android.location.*
import android.os.*
import android.util.Log
import android.widget.ImageView
import android.widget.RemoteViews
import androidx.localbroadcastmanager.content.LocalBroadcastManager;
import androidx.core.app.NotificationCompat
import androidx.core.content.ContextCompat
import com.abk.distance.WalkingServiceBridge
import com.abk.gps_forground.R
import java.io.FileWriter
import java.io.IOException
import java.text.SimpleDateFormat
import android.graphics.Bitmap
import android.opengl.GLES20
import com.mygdx.runai.RunAI
import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.nio.IntBuffer
import java.util.*
import kotlin.concurrent.fixedRateTimer

class LocationService : Service(), LocationListener {
    private var wakeLock: PowerManager.WakeLock? = null
    private val TAG: String = "LocationService"
    private val binder = LocationServiceBinder()

    private val NOTI_ID: Int = 2
    private var timer: Timer? = null
    private var startTime: Long = 0
    val manager: NotificationManager by lazy { getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager }


    var isLocationManagerUpdatingLocation = false
    var locationList: ArrayList<Location>? = null
    var oldLocationList: ArrayList<Location>? = null
    var noAccuracyLocationList: ArrayList<Location>? = null
    var inaccurateLocationList: ArrayList<Location>? = null
    var kalmanNGLocationList: ArrayList<Location>? = null
    var isLogging = true
    var currentSpeed = 0.0f // meters/second
    var kalmanFilter: KalmanLatLong? = null
    var runStartTimeInMillis: Long = 0
    var gpsCount = 0
    var goodGpsCount = 0
    val distanceIntent = Intent(SEND_DISTANCE_DATA)

    override fun onCreate() {
        isLocationManagerUpdatingLocation = false
        locationList = ArrayList()
        noAccuracyLocationList = ArrayList()
        oldLocationList = ArrayList()
        inaccurateLocationList = ArrayList()
        kalmanNGLocationList = ArrayList()
        kalmanFilter = KalmanLatLong(1f)
        isLogging = true
        val notification = createNotificationChanel("Fetching Data........")
        startForeground(NOTI_ID, notification)
    }

    override fun onStartCommand(i: Intent, flags: Int, startId: Int): Int {
        super.onStartCommand(i, flags, startId)
        startUpdatingLocation()
        return START_STICKY
    }

    private fun createNotificationChanel(text: String): Notification {
        val NOTIFICATION_CHANNEL_ID = "com.getDistance"
        if (Build.VERSION.SDK_INT > Build.VERSION_CODES.O) {
            val channelName = "Foreground Service"
            val chan = NotificationChannel(
                NOTIFICATION_CHANNEL_ID,
                channelName,
                NotificationManager.IMPORTANCE_DEFAULT,

            )

            chan.lightColor = Color.GREEN
            chan.lockscreenVisibility = Notification.VISIBILITY_PUBLIC
            chan.description = "Foreground Service showing your activity and duration"
            manager.createNotificationChannel(chan)
        }
        val builder: NotificationCompat.Builder = NotificationCompat.Builder(
            this,
            NOTIFICATION_CHANNEL_ID
        )
        val yourRequestCode = 66
        val resultIntent = Intent(this, getMainActivityClass(this))
        val pendingIntent: PendingIntent = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            PendingIntent.getActivity(
                this, yourRequestCode,
                resultIntent, PendingIntent.FLAG_IMMUTABLE or PendingIntent.FLAG_UPDATE_CURRENT
            )
        } else {
            PendingIntent.getActivity(
                this, yourRequestCode,
                resultIntent, PendingIntent.FLAG_UPDATE_CURRENT
            )
        }

        val collapsedView = RemoteViews(packageName, R.layout.notification_collapsed)
        val expandedView = RemoteViews(packageName, R.layout.notification_expanded)



        val parts = text.split(",")
        expandedView?.setTextViewText(R.id.DistanceRan, parts.getOrNull(1))

        expandedView?.setTextViewText(R.id.TimeTaken, parts.getOrNull(0))

        val notification: Notification = builder
            //.setContentTitle("RunAI is tracking your run")
            .setSmallIcon(R.mipmap.ic_launcher)
            .setContentIntent(pendingIntent)
            .setOnlyAlertOnce(true)
            .setAutoCancel(false)
            .setCustomContentView(collapsedView)
            .setCustomBigContentView(expandedView)
            .setStyle(NotificationCompat.DecoratedCustomViewStyle())
            .build()



        return notification

    }


    private fun getMainActivityClass(context: Context): Class<*>? {
        val packageName = context.packageName
        val launchIntent = context.packageManager.getLaunchIntentForPackage(packageName)
        val className = launchIntent!!.component!!.className
        return try {
            Class.forName(className)
        } catch (e: ClassNotFoundException) {
            e.printStackTrace()
            null
        }
    }


    override fun onBind(intent: Intent): IBinder? {
        return binder
    }

    override fun onRebind(intent: Intent) {
        Log.d(LOG_TAG, "onRebind ")
    }

    override fun onUnbind(intent: Intent): Boolean {
        Log.d(LOG_TAG, "onUnbind ")
        return true
    }

    override fun onDestroy() {
        Log.d(LOG_TAG, "onDestroy ")
        stopUpdatingLocation()
        manager.cancel(NOTI_ID)
        timer?.cancel()
        super.onDestroy()
    }


    /**
     * Binder class
     *
     * @author Takamitsu Mizutori
     */
    inner class LocationServiceBinder : Binder() {
        val service: LocationService
            get() = this@LocationService
    }

    /* LocationListener implemenation */
    override fun onProviderDisabled(provider: String) {
        if (provider == LocationManager.GPS_PROVIDER) {
            notifyLocationProviderStatusUpdated(false)
        }
    }

    override fun onProviderEnabled(provider: String) {
        if (provider == LocationManager.GPS_PROVIDER) {
            notifyLocationProviderStatusUpdated(true)
        }
    }

    override fun onStatusChanged(provider: String, status: Int, extras: Bundle) {
        if (provider == LocationManager.GPS_PROVIDER) {
            if (status == LocationProvider.OUT_OF_SERVICE) {
                notifyLocationProviderStatusUpdated(false)
            } else {
                notifyLocationProviderStatusUpdated(true)
            }
        }
    }

    /* GpsStatus.Listener implementation */

    private fun notifyLocationProviderStatusUpdated(isLocationProviderAvailable: Boolean) {
        //Broadcast location provider status change here
    }

    //    public void startLogging() {
    //        isLogging = true;
    //    }
    //
    //    public void stopLogging() {
    //        if (locationList.size() > 1 && batteryLevelArray.size() > 1) {
    //            long currentTimeInMillis = (long) (SystemClock.elapsedRealtimeNanos() / 1000000);
    //            long elapsedTimeInSeconds = (currentTimeInMillis - runStartTimeInMillis) / 1000;
    //            float totalDistanceInMeters = 0;
    //            for (int i = 0; i < locationList.size() - 1; i++) {
    //                totalDistanceInMeters += locationList.get(i).distanceTo(locationList.get(i + 1));
    //            }
    //            int batteryLevelStart = batteryLevelArray.get(0).intValue();
    //            int batteryLevelEnd = batteryLevelArray.get(batteryLevelArray.size() - 1).intValue();
    //
    //            float batteryLevelScaledStart = batteryLevelScaledArray.get(0).floatValue();
    //            float batteryLevelScaledEnd = batteryLevelScaledArray.get(batteryLevelScaledArray.size() - 1).floatValue();
    //
    //            saveLog(elapsedTimeInSeconds, totalDistanceInMeters, gpsCount, batteryLevelStart, batteryLevelEnd, batteryLevelScaledStart, batteryLevelScaledEnd);
    //        }
    //        isLogging = false;
    //    }
    @SuppressLint("MissingPermission")
    fun startUpdatingLocation() {
        wakeLock = (getSystemService(Context.POWER_SERVICE) as PowerManager).run {
            newWakeLock(PowerManager.PARTIAL_WAKE_LOCK, "MyApp::LocationWakelock").apply {
                acquire()
            }
        }
        if (!isLocationManagerUpdatingLocation) {
            startTime = System.currentTimeMillis()
            isLocationManagerUpdatingLocation = true
            runStartTimeInMillis = (SystemClock.elapsedRealtimeNanos() / 1000000)
            locationList!!.clear()
            oldLocationList!!.clear()
            noAccuracyLocationList!!.clear()
            inaccurateLocationList!!.clear()
            kalmanNGLocationList!!.clear()
            val locationManager = getSystemService(LOCATION_SERVICE) as LocationManager

            //Exception thrown when GPS or Network provider were not available on the user's device.
            try {
                val criteria = Criteria()
                criteria.accuracy =
                    Criteria.ACCURACY_FINE //setAccuracyは内部では、https://stackoverflow.com/a/17874592/1709287の用にHorizontalAccuracyの設定に変換されている。
               // criteria.powerRequirement = Criteria.POWER_HIGH
                criteria.isAltitudeRequired = false
                criteria.isSpeedRequired = true
                criteria.isCostAllowed = true
                criteria.isBearingRequired = false

                //API level 9 and up
                //criteria.horizontalAccuracy = Criteria.ACCURACY_HIGH
                //criteria.verticalAccuracy = Criteria.ACCURACY_HIGH
                //criteria.setBearingAccuracy(Criteria.ACCURACY_HIGH);
                //criteria.setSpeedAccuracy(Criteria.ACCURACY_HIGH);
                val gpsFreqInMillis = 1000
                val gpsFreqInDistance = 1 // in meters
                locationManager.requestLocationUpdates(
                    gpsFreqInMillis.toLong(),
                    gpsFreqInDistance.toFloat(),
                    criteria,
                    this,
                    null
                )
                gpsCount = 0
                goodGpsCount = 0

                timer = fixedRateTimer("timer", initialDelay = 1000L, period = 1000) {

                    var distnace = 0.0
                    locationList!!.forEachIndexed { index, location ->
                        if (index != locationList!!.lastIndex) {
                            distnace += location.distanceTo(locationList!![index + 1])
                        }
                    }
                    val formattedText = getFormattedText(distnace)
                    Log.d(TAG, "startUpdates: text : $formattedText")
                    val notification =
                        createNotificationChanel(formattedText)
                    manager.notify(NOTI_ID, notification)
                }
            } catch (e: RuntimeException) {
                Log.e(LOG_TAG, e.localizedMessage.toString())
            }
        }
    }


    private fun getFormattedText(distance: Double): String {
        Log.e(TAG, "getFormattedText: raw distance : $distance")
        val currentTime = System.currentTimeMillis()
        val milliseconds = (currentTime - startTime)

        val seconds = (milliseconds / 1000).toInt() % 60
        val minutes = (milliseconds / (1000 * 60) % 60).toInt()
        val hours = (milliseconds / (1000 * 60 * 60) % 24).toInt()
        val secondsRaw = (milliseconds / 1000).toInt()

        distanceIntent.putExtra("distance", distance)
        sendBroadcast(distanceIntent)
//        val d = distance * 1000
        val meters = (distance % 1000).toInt()
        val kilometers: Int = ((distance.toInt() - meters) / 1000)

        RunAI.getInstance().setPlayerCurrentMetersandTime(meters, secondsRaw)

        val durationText = "Duration: ${String.format("%02d:%02d:%02d", hours, minutes, seconds)}"
        val distanceStr =
            "Distance: ${if (kilometers > 0) "$kilometers km $meters m" else "$meters m"}"
//        val distance = "$currentNumberOfStepCount : ${getDistanceRun(currentNumberOfStepCount)} km"

        sendBroadcast(Intent().apply {
            action = "action.data_update"
            addCategory("action.category.distance")
            putExtra("distance", distance)
            putExtra("steps", getStepsFromDistance(distance = distance))
            putExtra("totalSeconds",secondsRaw)
        })

        return durationText
            .plus(",")
            .plus(distanceStr)
            .plus("-----$distance")
    }

    //function to determine the distance run in kilometers using average step length for men and number of steps
    private fun getDistanceRun(steps: Long): Float {
        return (steps * 78).toFloat() / 100000f
    }

    private fun getStepsFromDistance(distance: Double): Int {
        return (distance * 100000 / 78).toInt()
    }

    fun stopUpdatingLocation() {
        if (isLocationManagerUpdatingLocation) {
            try {
                wakeLock?.release()
            } catch (e: Exception) {
                e.printStackTrace()
            }
            val locationManager = getSystemService(LOCATION_SERVICE) as LocationManager
            locationManager.removeUpdates(this)
            isLocationManagerUpdatingLocation = false

//            val elapsedTimeInSeconds =
//                ((SystemClock.elapsedRealtimeNanos() / 1000000) - runStartTimeInMillis) / 1000
//            var totalDistanceInMeters = 0f
//            for (i in 0 until locationList!!.size - 1) {
//                totalDistanceInMeters += locationList!![i].distanceTo(locationList!![i + 1])
//            }

//            saveLog(
//                elapsedTimeInSeconds,
//                totalDistanceInMeters.toDouble(),
//                gpsCount
//            )
        }
    }

    override fun onLocationChanged(newLocation: Location) {
        Log.e(TAG, "(" + newLocation.latitude + "," + newLocation.longitude + ")")
        gpsCount++
        val filtered = filterLocation(newLocation)
        if (isLogging) {
            if (filtered != null) {
                currentSpeed = filtered.speed
                filterAndAddLocation(newLocation);
            }
        } else {
            // if newLocation passed the filter, count up goodLocationCount.
//            if (filtered != null) {
//                goodGpsCount++
//                if (goodGpsCount > 2) {
//                    val intent = Intent("GotEnoughLocations")
//                    intent.putExtra("goodLocationCount", goodGpsCount)
//                    LocalBroadcastManager.getInstance(this.application).sendBroadcast(intent)
//                }
//            }
        }
        val intent = Intent("LocationUpdated")
        intent.putExtra("location", newLocation)
        LocalBroadcastManager.getInstance(this.application).sendBroadcast(intent)
    }
    @SuppressLint("NewApi")
    private fun getLocationAge(newLocation: Location): Long {
        val locationAge: Long
        locationAge =
            (SystemClock.elapsedRealtimeNanos() / 1000000) - (newLocation.elapsedRealtimeNanos / 1000000)
        return locationAge
    }
    private fun filterAndAddLocation(location: Location): Boolean {
        val age = getLocationAge(location)
        if (age > 10 * 1000) { //more than 10 seconds
            Log.d(TAG, "Location is old")
            oldLocationList!!.add(location)
            return false
        }
        if (location.getAccuracy() <= 0) {
            Log.d(TAG, "Latitidue and longitude values are invalid.")
            noAccuracyLocationList!!.add(location)
            return false
        }

        //setAccuracy(newLocation.getAccuracy());
        val horizontalAccuracy: Float = location.getAccuracy()
        if (horizontalAccuracy > 100) {
            Log.d(TAG, "Accuracy is too low.")
            inaccurateLocationList!!.add(location)
            return false
        }


        /* Kalman Filter */
        val Qvalue: Float
        val locationTimeInMillis = (location.getElapsedRealtimeNanos() / 1000000) as Long
        val elapsedTimeInMillis = locationTimeInMillis - runStartTimeInMillis
        Qvalue = if (currentSpeed == 0.0f) {
            3.0f //3 meters per second
        } else {
            currentSpeed // meters per second
        }
        kalmanFilter!!.Process(
            location.getLatitude(),
            location.getLongitude(),
            location.getAccuracy(),
            elapsedTimeInMillis,
            Qvalue
        )
        val predictedLat: Double = kalmanFilter!!.get_lat()
        val predictedLng: Double = kalmanFilter!!.get_lng()
        val predictedLocation = Location("") //provider name is unecessary
        predictedLocation.setLatitude(predictedLat) //your coords of course
        predictedLocation.setLongitude(predictedLng)
        val predictedDeltaInMeters: Float = predictedLocation.distanceTo(location)
        if (predictedDeltaInMeters > 60) {
            Log.d(TAG, "Kalman Filter detects mal GPS, we should probably remove this from track")
            kalmanFilter!!.consecutiveRejectCount += 1
            if (kalmanFilter!!.consecutiveRejectCount > 3) {
                kalmanFilter =
                    KalmanLatLong(3.0f) //reset Kalman Filter if it rejects more than 3 times in raw.
            }
            kalmanNGLocationList!!.add(location)
            return false
        } else {
            kalmanFilter!!.consecutiveRejectCount = 0
        }

        /* Notifiy predicted location to UI */
        val intent = Intent("PredictLocation")
        intent.putExtra("location", predictedLocation)
        LocalBroadcastManager.getInstance(this.getApplication()).sendBroadcast(intent)
        Log.d(TAG, "Location quality is good enough.")
        currentSpeed = location.getSpeed()
        locationList!!.add(location)
        return true
    }
    private fun filterLocation(location: Location): Location? {
        val age = getLocationAge(location)
        if (age > 5 * 1000) { //more than 5 seconds
            Log.d(TAG, "Location is old")
            oldLocationList!!.add(location)
            return null
        }
        if (location.accuracy <= 0) {
            Log.d(TAG, "Latitidue and longitude values are invalid.")
            noAccuracyLocationList!!.add(location)
            return null
        }

        //setAccuracy(newLocation.getAccuracy());
        val horizontalAccuracy = location.accuracy
        if (horizontalAccuracy > 10) { //10meter filter
            Log.d(TAG, "Accuracy is too low.")
            inaccurateLocationList!!.add(location)
            return null
        }
        Log.d(TAG, "Location quality is good enough.")
        return location
    } /* Data Logging */ //


    @Synchronized
    fun saveLog(
        timeInSeconds: Long,
        distanceInMeters: Double,
        gpsCount: Int
    ) {
        val fileNameDateTimeFormat = SimpleDateFormat("yyyy_MMdd_HHmm")
        val filePath = (filesDir!!.absolutePath + "/"
                + fileNameDateTimeFormat.format(Date())) + ".csv"
        Log.e(WalkingServiceBridge.TAG, "saving to $filePath")
        var fileWriter: FileWriter? = null
        try {
            fileWriter = FileWriter(filePath, false)
            fileWriter.append(
                """
                ${"Time,Distance,GPSCount"})
                
                """.trimIndent()
            )
            val record =
                "$timeInSeconds,$distanceInMeters,$gpsCount\n"
            fileWriter.append(record)
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            if (fileWriter != null) {
                try {
                    fileWriter.close()
                } catch (ioe: IOException) {
                    ioe.printStackTrace()
                }
            }
        }
    }

    companion object {
        val LOG_TAG = LocationService::class.java.simpleName
        const val SEND_DISTANCE_DATA = "com.abk.distance.SEND_DISTANCE_DATA"
    }
}