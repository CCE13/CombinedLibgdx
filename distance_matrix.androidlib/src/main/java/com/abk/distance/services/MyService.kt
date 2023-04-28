package com.abk.distance.services

import android.app.*
import android.content.Context
import android.content.Intent
import android.graphics.Color
import android.hardware.Sensor
import android.hardware.SensorEvent
import android.hardware.SensorEventListener
import android.hardware.SensorManager
import android.os.Build
import android.os.IBinder
import android.util.Log
import androidx.core.app.NotificationCompat
import com.abk.distance.utils.DataPoint
import com.abk.gps_forground.R
import java.util.*
import kotlin.concurrent.fixedRateTimer
import kotlin.math.pow
import kotlin.math.sqrt

class MyService : Service(), SensorEventListener {
    private val NOTI_ID: Int = 2
    private var timer: Timer? = null

    //    private var currentNumberOfStepCount: Long = 0L
    private var stepCounterSensor: Sensor? = null
    private var startTime: Long = 0
//    private var initialStepCount: Long = -1L
//    var formatter: NumberFormat = DecimalFormat("00")

    val mSensorManager: SensorManager by lazy { getSystemService(Context.SENSOR_SERVICE) as SensorManager }
    private val TAG = "MyService"

    val manager: NotificationManager by lazy { getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager }

    private val SMOOTHING_WINDOW_SIZE = 20

    var mSensorCount: Sensor? = null
    var mSensorAcc: Sensor? = null
    private val mRawAccelValues = FloatArray(3)

    // smoothing accelerometer signal variables
    private val mAccelValueHistory = Array(3) {
        FloatArray(
            SMOOTHING_WINDOW_SIZE
        )
    }
    private val mRunningAccelTotal = FloatArray(3)
    private val mCurAccelAvg = FloatArray(3)
    private var mCurReadIndex = 0

    var mStepCounter = 0L
    var mStepCounterAndroid = 0f
    var mInitialStepCount = 0f


    private var mGraph2LastXValue = 0.0

    private lateinit var mSeries2: ArrayList<DataPoint>

    private var lastMag = 0.0
    private var avgMag = 0.0
    private var netMag = 0.0

    //peak detection variables
    private var lastXPoint = 1.0
    var stepThreshold = 1.0
    var noiseThreshold = 2.0
    private val windowSize = 10


    override fun onCreate() {
        super.onCreate()
        val notification = createNotificationChanel("Fetching Data........")
        startForeground(NOTI_ID, notification)
    }


    private fun createNotificationChanel(text: String): Notification {
        val NOTIFICATION_CHANNEL_ID = "com.getDistance"
        if (Build.VERSION.SDK_INT > Build.VERSION_CODES.O) {
            val channelName = "Foreground Service"
            val chan = NotificationChannel(
                NOTIFICATION_CHANNEL_ID,
                channelName,
                NotificationManager.IMPORTANCE_DEFAULT
            )
            chan.lightColor = Color.BLUE
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

        val notification: Notification = builder
            .setContentTitle("App running")
            .setSmallIcon(R.mipmap.ic_launcher)
            .setContentIntent(pendingIntent)
            .setOnlyAlertOnce(true)
            .setContentText(text)
            .setAutoCancel(false)
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

    override fun onStartCommand(intent: Intent?, flags: Int, startId: Int): Int {
        super.onStartCommand(intent, flags, startId)
        startUpdates()
        return START_NOT_STICKY
    }

    override fun onDestroy() {
        manager.cancel(NOTI_ID)
        timer?.cancel()
        mSensorManager.unregisterListener(this, stepCounterSensor);
        super.onDestroy()
    }


    override fun onBind(intent: Intent?): IBinder? {
        return null
    }

    private fun startUpdates() {
        mSeries2 = arrayListOf()
        startTime = System.currentTimeMillis()
        // 1

        // 2
        mSensorCount = mSensorManager.getDefaultSensor(
            Sensor.TYPE_STEP_COUNTER
        )
        mSensorAcc = mSensorManager.getDefaultSensor(
            Sensor.TYPE_ACCELEROMETER
        )
        mSensorManager.registerListener(
            this,
            mSensorCount,
            SensorManager.SENSOR_DELAY_UI
        )
        mSensorManager.registerListener(
            this,
            mSensorAcc,
            SensorManager.SENSOR_DELAY_UI
        )
        // 3
        if (mSensorCount == null) {
            stopSelf()
            return
        }



        timer = fixedRateTimer("timer", initialDelay = 1000L, period = 1000) {
            val formattedText = getFormattedText(mStepCounter)
            Log.d(TAG, "startUpdates: text : $formattedText")
            val notification =
                createNotificationChanel(formattedText)
            manager.notify(NOTI_ID, notification)
        }
    }

    override fun onAccuracyChanged(sensor: Sensor?, accuracy: Int) {
        Log.d("TAG", "onAccuracyChanged: Sensor: $sensor; accuracy: $accuracy")
    }

    override fun onSensorChanged(e: SensorEvent?) {
        // 1
        e ?: return

        when (e.sensor.getType()) {
            Sensor.TYPE_STEP_COUNTER -> {
                if (mInitialStepCount.toDouble() == 0.0) {
                    mInitialStepCount = e.values[0]
                }
                mStepCounterAndroid = e.values[0]
            }
            Sensor.TYPE_ACCELEROMETER -> {
                mRawAccelValues[0] = e.values[0]
                mRawAccelValues[1] = e.values[1]
                mRawAccelValues[2] = e.values[2]
                lastMag = sqrt(
                    mRawAccelValues[0].toDouble().pow(2.0) + mRawAccelValues[1].toDouble()
                        .pow(2.0) + mRawAccelValues[2].toDouble().pow(2.0)
                )

                //Source: https://github.com/jonfroehlich/CSE590Sp2018
                var i = 0
                while (i < 3) {
                    mRunningAccelTotal[i] =
                        mRunningAccelTotal[i] - mAccelValueHistory[i][mCurReadIndex]
                    mAccelValueHistory[i][mCurReadIndex] = mRawAccelValues[i]
                    mRunningAccelTotal[i] =
                        mRunningAccelTotal[i] + mAccelValueHistory[i][mCurReadIndex]
                    mCurAccelAvg[i] =
                        mRunningAccelTotal[i] / SMOOTHING_WINDOW_SIZE
                    i++
                }
                mCurReadIndex++
                if (mCurReadIndex >= SMOOTHING_WINDOW_SIZE) {
                    mCurReadIndex = 0
                }
                avgMag = sqrt(
                    Math.pow(mCurAccelAvg[0].toDouble(), 2.0) + Math.pow(
                        mCurAccelAvg[1].toDouble(), 2.0
                    ) + Math.pow(mCurAccelAvg[2].toDouble(), 2.0)
                )
                netMag = lastMag - avgMag //removes gravity effect


                mGraph2LastXValue += 1.0
                mSeries2.add(DataPoint(mGraph2LastXValue, netMag))
            }
        }
        peakDetection()

//        if (sensorEvent.sensor.type == Sensor.TYPE_STEP_COUNTER) {
//            // 2
//            sensorEvent.values.firstOrNull()?.let {
////                Log.d("TAG", "Steps count: $it ")
//                if (initialStepCount == -1L) {
//                    initialStepCount = it.toLong()
//                }
//                currentNumberOfStepCount = it.toLong() - initialStepCount
//
//                Log.d(
//                    "TAG",
//                    "Steps count: $currentNumberOfStepCount Total Distance : ${
//                        getDistanceRun(currentNumberOfStepCount)
//                    }"
//                )
//
//            }
//        }
    }

    private fun peakDetection() {

        if (mSeries2.isEmpty()) {
            return
        }
        /* Peak detection algorithm derived from: A Step Counter Service for Java-Enabled Devices Using a Built-In Accelerometer, Mladenov et al.
         *Threshold, stepThreshold was derived by observing people's step graph
         * ASSUMPTIONS:
         * Phone is held vertically in portrait orientation for better results
         */
        val highestValX = mSeries2.maxOf { it.getX() }
        if (highestValX - lastXPoint < windowSize) {
            return
        }
        val valuesInWindow = mSeries2.filter { it.x in lastXPoint..highestValX }
        lastXPoint = highestValX
        var forwardSlope = 0.0
        var downwardSlope = 0.0
        val dataPointList: MutableList<DataPoint> = ArrayList<DataPoint>()
        dataPointList.addAll(valuesInWindow)

        for (i in dataPointList.indices) {
            if (i == 0) continue else if (i < dataPointList.size - 1) {
                forwardSlope = (dataPointList[i + 1].y - dataPointList[i].y)
                downwardSlope = (dataPointList[i].y - dataPointList[i - 1].y)
                if (forwardSlope < 0 && downwardSlope > 0 && dataPointList[i].y > stepThreshold && dataPointList[i].y < noiseThreshold) {
                    mStepCounter += 1
                }
            }
        }
    }

    private fun getFormattedText(currentNumberOfStepCount: Long): String {
        val currentTime = System.currentTimeMillis()
        val milliseconds = (currentTime - startTime)

        val seconds = (milliseconds / 1000).toInt() % 60
        val minutes = (milliseconds / (1000 * 60) % 60).toInt()
        val hours = (milliseconds / (1000 * 60 * 60) % 24).toInt()

        val d = getDistanceRun(currentNumberOfStepCount) * 1000
        val meters = (d % 1000).toInt()
        val kilometers: Int = ((d.toInt() - meters) / 1000)

        val durationText = "Duration: ${String.format("%02d:%02d:%02d", hours, minutes, seconds)}"
        val distance =
            "Distance: ${if (kilometers > 0) "$kilometers km $meters m" else "$meters m"}"
//        val distance = "$currentNumberOfStepCount : ${getDistanceRun(currentNumberOfStepCount)} km"

        sendBroadcast(Intent().apply {
            action = "action.data_update"
            addCategory("action.category.distance")
            putExtra("distance", d)
            putExtra("steps", currentNumberOfStepCount)
        })

        return "Running Activity".plus("\n")
            .plus(durationText)
            .plus(", ")
            .plus(distance)
    }

    //function to determine the distance run in kilometers using average step length for men and number of steps
    private fun getDistanceRun(steps: Long): Float {
        return (steps * 78).toFloat() / 100000f
    }
}
