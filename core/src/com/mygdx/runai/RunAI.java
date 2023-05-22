package com.mygdx.runai;

import com.badlogic.gdx.Game;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.Preferences;
import com.badlogic.gdx.assets.AssetManager;
import com.badlogic.gdx.audio.Sound;
import com.badlogic.gdx.graphics.GL20;
import com.badlogic.gdx.graphics.Pixmap;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.graphics.glutils.FrameBuffer;
import com.badlogic.gdx.math.Vector2;
import com.mygdx.runai.Screens.PlayScreen;
import com.mygdx.runai.characters.AICharacter;
import com.mygdx.runai.characters.PlayerCharacter;

import java.util.ArrayList;
import java.util.List;

public class RunAI extends Game
{
	public SpriteBatch Batch;

	public FrameBuffer fbo;
	public Texture fboText;

	public static AssetManager assetManager;
	private Texture enemyTexture;
	private Texture playerTexture;
	private List<Sprite> enemySprites = new ArrayList<>();

	private Sprite playerSprite;
	private boolean isRunningInBackground;

	private float playerCurrentMeters;
	private float playerCurrentTime;
	public static float  playerCurrentSpeed;

	//The current time of the system
	public float time;

	public Vector2 playerPosition;


	AICharacter[] aiCharacters;
	PlayerCharacter playerCharacter;

	public static int yo;

	Preferences prefs;

	public RunAI(){
		yo += 1;
		System.out.println("Hello" + yo);


	}

	@Override
	public void create () {

		prefs = Gdx.app.getPreferences("com.runai.settings");
		//The queue is for the two threads to communicate

		Batch = new SpriteBatch();
		setScreen(new PlayScreen(this));
		buildFBO(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
		assetManager = new AssetManager();

		assetManager.load("leftfoot.wav", Sound.class);



		//Loads the enemy texture
		assetManager.load("bad.png", Texture.class);
		assetManager.load("player.png", Texture.class);
		//Wait for the texture to finish loading
		assetManager.finishLoading();

		enemyTexture = assetManager.get("bad.png", Texture.class);
		playerTexture = assetManager.get("player.png", Texture.class);


		//final AICharacter	aiCharacter = new AICharacter();

		CreateAndRunAI();


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

		RunTheAI();
		//Gets the frame buffer and sets it as a texture
		fboText = fbo.getColorBufferTexture();
		fbo.end();

		//saveFBOTextureToPNG();
	}




	public void CreateAndRunAI(){
		//Creates the AI and the player character
		aiCharacters = new AICharacter[10];
		playerCharacter = new PlayerCharacter(playerTexture);

		//Cache the playersprite value to render later
		playerSprite = playerCharacter.playerSprite;
		playerPosition = playerCharacter.playerSprite.getPosition();

		//Sets all the contructor values of the AI character
		for (int i = 0; i < aiCharacters.length; i++){
			aiCharacters[i] = new AICharacter(i, enemyTexture, i * 100, 500);
			enemySprites.add( aiCharacters[i].aiSprite);
		}



	}

	public void RunTheAI(){


		time = Gdx.graphics.getDeltaTime();

		float speed = DataManager.LoadPlayerRanDist();




		//speed = speed * Gdx.graphics.getDeltaTime();

		System.out.println(speed);

		for(AICharacter aiCharacter: aiCharacters){
			aiCharacter.update(Gdx.graphics.getDeltaTime(), speed, playerPosition);
		}

		playerCharacter.update(Gdx.graphics.getDeltaTime());

		//If Thread is running make it sleep every second so that it wont use that much power
		if(isRunningInBackground){
			try{
				Thread.sleep(1000);
			}catch (InterruptedException e ){
				e.printStackTrace();
			}
		}
	}


	@Override
	public void dispose () {
		Batch.dispose();
		if(fboText != null){

			fboText.dispose();
		}
	}

}
