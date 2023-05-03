package com.abk.distance;

import android.Manifest;
import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Process;
import android.util.Log;

import androidx.core.app.ActivityCompat;

import com.abk.distance.services.LocationService;
import com.abk.distance.utils.UnityCallbacks;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.files.FileHandle;
import com.karumi.dexter.Dexter;
import com.karumi.dexter.MultiplePermissionsReport;
import com.karumi.dexter.PermissionToken;
import com.karumi.dexter.listener.PermissionRequest;
import com.karumi.dexter.listener.multi.MultiplePermissionsListener;
import com.mygdx.runai.BackgroundThread;

import org.json.JSONException;
import org.json.JSONObject;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.List;
import java.util.TimerTask;

public class WalkingServiceBridge {
    public static final String TAG = "WalkingServiceBridge";
    Activity activity;
    private MyReceiver receiver;

    private TimerTask _timerTask;

    public WalkingServiceBridge(Activity activity) {
        this.activity = activity;
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

    public void PauseForegroundService()
    {
        System.out.print("Reached to pause");
        LocationService.SetIsPaused();
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
        destroyListener();
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
        IntentFilter filter = new IntentFilter();
        filter.addAction("action.data_update");
        filter.addCategory("action.category.distance");
        activity.registerReceiver(receiver, filter);
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
            Log.e(TAG, "onReceive: called ::: " + distance + " ::: " + steps + "::: total raw time"  + timeSeconds);
            try {
                JSONObject obj = new JSONObject();
                obj.put("distance", distance);
                obj.put("steps", steps);
                obj.put("totalSeconds",timeSeconds);
                UnityCallbacks.onUpdateData(obj.toString());
            } catch (JSONException e) {
                throw new RuntimeException(e);
            }
        }
    }


}
