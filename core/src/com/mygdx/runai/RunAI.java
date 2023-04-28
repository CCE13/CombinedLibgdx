package com.mygdx.runai;

import com.badlogic.gdx.Game;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.assets.AssetManager;
import com.badlogic.gdx.graphics.GL20;
import com.badlogic.gdx.graphics.Pixmap;
import com.badlogic.gdx.graphics.PixmapIO;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.graphics.glutils.FrameBuffer;

import com.mygdx.runai.characters.AICharacter;
import com.mygdx.runai.characters.PlayerCharacter;
import com.mygdx.runai.screens.PlayScreen;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ConcurrentLinkedQueue;

import jdk.nashorn.internal.runtime.Debug;

public class RunAI extends Game
{
	public SpriteBatch Batch;

	public FrameBuffer fbo;
	public Texture fboText;

	private AssetManager assetManager;
	private Texture enemyTexture;
	private Texture playerTexture;
	private List<Sprite> enemySprites = new ArrayList<>();

	private Sprite playerSprite;
	private boolean isRunningInBackground;

	private int playerCurrentMeters = 10;
	private int playerCurrentTime;
	public int  playerCurrentSpeed;
	public int test;

	public static boolean forgroundServiceEnabled;
	ConcurrentLinkedQueue<Boolean> queue = new ConcurrentLinkedQueue<Boolean>();
	//InterThreadComm

	public static volatile RunAI instance;


	//Creates a instance of RunAI for the foreground service to use
	public static RunAI getInstance(){
		RunAI result = instance;


		if(instance == null){
			synchronized (RunAI.class){
				if(instance == null){
					System.out.println("OMG NEW CREATED OMGOHWOEHGOWHEGOWHEOGHWOEHGo");
					instance = new RunAI();
				}
			}
		}
		return  instance;

	}



	@Override
	public void create () {

		//The queue is for the two threads to communicate
		queue.add(forgroundServiceEnabled);

		Batch = new SpriteBatch();
		setScreen(new PlayScreen(this));
		buildFBO(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
		assetManager = new AssetManager();



		//Loads the enemy texture
		assetManager.load("bad.png", Texture.class);
		assetManager.load("player.png", Texture.class);
		//Wait for the texture to finish loading
		assetManager.finishLoading();

		enemyTexture = assetManager.get("bad.png", Texture.class);
		playerTexture = assetManager.get("player.png", Texture.class);


		//final AICharacter	aiCharacter = new AICharacter();

		Thread backgroundThread = new Thread(new Runnable() {
			@Override
			public void run() {
				AICharacter[] aiCharacters = new AICharacter[10];
				PlayerCharacter playerCharacter = new PlayerCharacter(playerTexture);

				playerSprite = playerCharacter.playerSprite;

				for (int i = 0; i < aiCharacters.length; i++){
					aiCharacters[i] = new AICharacter(i,enemyTexture, i * 100, 0);
					enemySprites.add( aiCharacters[i].aiSprite);
				}

				//boolean serviceEnabled = (queue.poll() != null)? queue.poll() : false;


				//System.out.println(serviceEnabled);
				while (true){

					System.out.println("Debugging");

					for(AICharacter aiCharacter: aiCharacters){
						aiCharacter.update(Gdx.graphics.getDeltaTime());
					}

					playerCharacter.update(Gdx.graphics.getDeltaTime());

					if(isRunningInBackground){
						try{
							Thread.sleep(1000);
						}catch (InterruptedException e ){
							e.printStackTrace();
						}
					}


				}
			}
		});

		backgroundThread.start();
	}

	private void buildFBO(int width, int height) {
		fbo = new FrameBuffer(Pixmap.Format.RGBA8888, width, height, false);
	}

	@Override
	public void pause() {
		isRunningInBackground = true;
		super.pause();
	}

	public void resume(){
		isRunningInBackground = false;
		super.resume();
	}
	public static String Hello(){
		return "Hello";
	}

	@Override
	public void render () {

		//aiCharacter.update(Gdx.graphics.getDeltaTime());

		//Clears the frame buffer
		Gdx.gl.glClearColor(0, 0, 0, 0);
        Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);


		//Where all rendered objects should be place at
		Batch.begin();


		for (Sprite enemysprite: enemySprites){
			enemysprite.draw(Batch);
		}

		if(playerSprite != null){

			playerSprite.draw(Batch);
		}


		//Batch.draw(fboText, 0,0, fboText.getWidth(), fboText.getHeight(), 0,0, 1,1);

		Batch.end();

		fbo.begin();
		super.render();

		//Gets the frame buffer and sets it as a texture
		fboText = fbo.getColorBufferTexture();
		fbo.end();

		//saveFBOTextureToPNG();
	}

	private void saveFBOTextureToPNG() {
		// Get the local storage directory for the app
		String localStoragePath = Gdx.files.getLocalStoragePath();

		// Specify the desired save path, e.g. "fboText.png"
		String savePath = localStoragePath + "fboText.png";

		System.out.println(savePath);

		// Save the Pixmap to the specified path
		Pixmap pixmap = Pixmap.createFromFrameBuffer(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
		PixmapIO.writePNG(Gdx.files.absolute(savePath), pixmap);
		pixmap.dispose();
	}


	public void setPlayerCurrentMetersandTime(int meters, int time){

		forgroundServiceEnabled = true;
		queue.add(forgroundServiceEnabled);
		playerCurrentMeters = meters;
		playerCurrentTime = time;
		//playerCurrentSpeed =  (meters/playerCurrentTime) * 100;
		playerCurrentSpeed =  10;

		//System.out.println(meters);
		//System.out.println(RunAI.getInstance().playerCurrentSpeed);
		//System.out.println(RunAI.forgroundServiceEnabled);




	}



	@Override
	public void dispose () {
		Batch.dispose();
		if(fboText != null){

			fboText.dispose();
		}
	}

}
