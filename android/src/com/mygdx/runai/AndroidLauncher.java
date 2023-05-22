package com.mygdx.runai;

import android.os.Bundle;
import android.view.KeyEvent;

import com.abk.distance.WalkingServiceBridge;
import com.badlogic.gdx.backends.android.AndroidApplication;
import com.badlogic.gdx.backends.android.AndroidApplicationConfiguration;

public class AndroidLauncher extends AndroidApplication{

	private WalkingServiceBridge bridge;
	@Override
	protected void onCreate (Bundle savedInstanceState) {
		AndroidApplicationConfiguration config = new AndroidApplicationConfiguration();
		initialize( new RunAI(), config);
		super.onCreate(savedInstanceState);
	}

	@Override
	protected void onStart() {
		super.onStart();
		bridge = new WalkingServiceBridge(this);
		bridge.startForegroundService();
	}

	@Override
	public boolean onKeyDown(int keyCode, KeyEvent event) {

		if(keyCode == KeyEvent.KEYCODE_A){
			bridge = new WalkingServiceBridge(this);
			bridge.startForegroundService();


		}
		return super.onKeyDown(keyCode, event);
	}

}
