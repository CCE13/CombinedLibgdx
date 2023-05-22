package com.mygdx.runai.characters;


import com.badlogic.gdx.graphics.Texture;
import com.mygdx.runai.Sprite;

public class PlayerCharacter {

    public Sprite playerSprite;


    public PlayerCharacter(Texture texture){
        playerSprite = new Sprite(texture, 425,500 );

    }

    public void update(float delta){

        //playerSprite.setVelocity(0, RunAI.getInstance().playerCurrentSpeed);
        //System.out.println(RunAI.getInstance().playerCurrentSpeed);
        playerSprite.update(delta);
    }





}
