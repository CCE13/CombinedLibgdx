package com.abk.distance;

import android.Manifest;
import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.location.Location;
import android.os.Build;
import android.os.Process;
import android.util.Log;

import androidx.core.app.ActivityCompat;

import com.abk.distance.services.LocationService;
import com.abk.distance.utils.UnityCallbacks;
import com.karumi.dexter.Dexter;
import com.karumi.dexter.MultiplePermissionsReport;
import com.karumi.dexter.PermissionToken;
import com.karumi.dexter.listener.PermissionRequest;
import com.karumi.dexter.listener.multi.MultiplePermissionsListener;
import com.mygdx.runai.AIData.AIDataClassHolder;
import com.mygdx.runai.BackgroundThread;
import com.mygdx.runai.Initialiser;

import org.json.JSONException;
import org.json.JSONObject;

import com.google.gson.Gson;

import java.util.ArrayList;
import java.util.List;

public class WalkingServiceBridge {
    public static final String TAG = "WalkingServiceBridge";
    Activity activity;
    private MyReceiver receiver;

    private Boolean _isPaused = false;

    private BackgroundThread _backgroundThread;

    public WalkingServiceBridge(Activity activity) {
        this.activity = activity;
    }

    public void PauseForegroundService()
    {
        System.out.println("Reached to pause");
        _isPaused = !_isPaused;
        Intent intent = new Intent("com.abk.distance.PAUSE_STATE_CHANGE");
        intent.putExtra("isPaused",_isPaused);
        activity.sendBroadcast(intent);
        System.out.println("Sending Intent");

    }
    public void startForegroundService() {
        Log.e(TAG, "startForegroundService: called process ::: " + Process.myPid());
        if (checkPermissions()) {
            startAhead();
        } else {
            UnityCallbacks.permissionDenied("ACTIVITY_RECOGNITION");
            takePermission();
        }
    }
    public void stopForegroundService() {
        Intent mServiceIntent = new Intent(activity, LocationService.class);
        activity.stopService(mServiceIntent);
        _backgroundThread.StopRunning();
        destroyListener();
    }

    public void GetAIIndexValues(String JsonString){
        System.out.println(JsonString);
        Gson gson = new Gson();
        AIDataClassHolder holder = gson.fromJson(JsonString,AIDataClassHolder.class);
        _backgroundThread.SetAIData(holder);
    }

    private void takePermission() {
        Dexter.withContext(activity)
                .withPermissions(
                        Manifest.permission.ACCESS_FINE_LOCATION,
                        Manifest.permission.ACCESS_COARSE_LOCATION
                )
                .withListener(new MultiplePermissionsListener() {
                    @Override
                    public void onPermissionsChecked(MultiplePermissionsReport multiplePermissionsReport) {
                        if (multiplePermissionsReport.areAllPermissionsGranted()) {
                            startAhead();
                        } else {
                            stopForegroundService();
                        }
                    }

                    @Override
                    public void onPermissionRationaleShouldBeShown(List<PermissionRequest> list, PermissionToken permissionToken) {
                        permissionToken.continuePermissionRequest();
                    }
                })
                .check();
    }

    /**
     * Returns the current state of the permissions needed.
     */
    private boolean checkPermissions() {
        return PackageManager.PERMISSION_GRANTED == ActivityCompat.checkSelfPermission(
                activity,
                Manifest.permission.ACCESS_FINE_LOCATION
        ) && PackageManager.PERMISSION_GRANTED == ActivityCompat.checkSelfPermission(
                activity,
                Manifest.permission.ACCESS_COARSE_LOCATION
        );
    }

    private void startAhead() {
        Intent mServiceIntent = new Intent(activity, LocationService.class);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            activity.startForegroundService(mServiceIntent);
        } else {
            activity.startService(mServiceIntent);
        }
        receiver = new MyReceiver();
        StartAIThread();
        IntentFilter filter = new IntentFilter();
        filter.addAction("action.data_update");
        filter.addCategory("action.category.distance");
        activity.registerReceiver(receiver, filter);
    }

    private void StartAIThread(){
        Initialiser game =  new Initialiser();
        _backgroundThread = new BackgroundThread(game);
        _backgroundThread.start();
    }

    public void destroyListener() {
        if (receiver != null) {
            activity.unregisterReceiver(receiver);
        }
    }

    public class MyReceiver extends BroadcastReceiver {
        private static final String TAG = "MyReceiver";

        @Override
        public void onReceive(Context context, Intent intent) {
//        Log.e(TAG, "onReceive: called process ::: " + Process.myPid());
            double distance = intent.getDoubleExtra("distance", -1.0);
            int steps = intent.getIntExtra("steps", -1);
            int timeSeconds = intent.getIntExtra("totalSeconds",0);
            ArrayList<Location> gpsData = intent.getParcelableArrayListExtra("gpsData");
            List<Location> convertedData = new ArrayList<>();
            convertedData.addAll(gpsData);
            Log.e(TAG, "onReceive: called ::: " + distance + " ::: " + steps + "::: total raw time"  + timeSeconds);
            try {
                JSONObject obj = new JSONObject();
                obj.put("distance", distance);
                obj.put("steps", steps);
                obj.put("totalSeconds",timeSeconds);
                obj.put("convertedData",convertedData);
                UnityCallbacks.onUpdateData(obj.toString());
            } catch (JSONException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
