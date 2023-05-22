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
import com.mygdx.runai.characters.AICharacter;
import com.mygdx.runai.characters.PlayerCharacter;
import java.util.ArrayList;
import java.util.List;

public class RunAI extends Game {
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
	public static float playerCurrentSpeed;

	public ArrayList<Vector2> aiPos;

	// The current time of the system
	public float time;

	public Vector2 playerPosition;

	AICharacter[] aiCharacters;
	PlayerCharacter playerCharacter;

	public static int yo;

	Preferences prefs;
	long runStartTimeMillis;

	public RunAI() {
		yo += 1;
		System.out.println("Hello" + yo);

	}

	@Override
	public void create() {
		prefs = Gdx.app.getPreferences("com.runai.settings");
		// The queue is for the two threads to communicate

		Batch = new SpriteBatch();
		buildFBO(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
		assetManager = new AssetManager();

		assetManager.load("leftfoot.wav", Sound.class);

		// Loads the enemy texture
		assetManager.load("bad.png", Texture.class);
		assetManager.load("player.png", Texture.class);
		// Wait for the texture to finish loading
		assetManager.finishLoading();

		enemyTexture = assetManager.get("bad.png", Texture.class);
		playerTexture = assetManager.get("player.png", Texture.class);

		CreateAndRunAI();

		runStartTimeMillis = System.currentTimeMillis();
	}

	private void buildFBO(int width, int height) {
		fbo = new FrameBuffer(Pixmap.Format.RGBA8888, width, height, false);
	}

	public void CreateAndRunAI() {
		// Creates the AI and the player character
		aiCharacters = new AICharacter[10];
		playerCharacter = new PlayerCharacter(playerTexture);

		// Cache the player sprite value to render later
		playerSprite = playerCharacter.playerSprite;
		playerPosition = playerCharacter.playerSprite.getPosition();

		// Sets all the constructor values of the AI character
		for (int i = 0; i < aiCharacters.length; i++) {
			aiCharacters[i] = new AICharacter(i, enemyTexture, i * 100, 500);
			enemySprites.add(aiCharacters[i].aiSprite);
		}
	}

	public ArrayList<Vector2> RunTheAI() {
		long currentTimeMillis = System.currentTimeMillis();
		long timeElapsedMillis = currentTimeMillis - runStartTimeMillis;

		float time = (float) timeElapsedMillis / 1000.0f; // Convert milliseconds to seconds

		float speed = DataManager.LoadPlayerRanDist();

		System.out.println("Hello From Run The AI");

		aiPos = new ArrayList<Vector2>();
		for (AICharacter aiCharacter : aiCharacters) {
			aiCharacter.update(time, speed, playerPosition);
			aiPos.add(aiCharacter.aiSprite.getPosition());
		}
		return aiPos;
	}

	@Override
	public void dispose() {
		Batch.dispose();
		if (fboText != null) {
			fboText.dispose();
		}
	}
}
