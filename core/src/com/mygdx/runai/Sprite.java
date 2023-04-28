package com.mygdx.runai;


import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.math.Vector2;

public class Sprite {
    private Texture texture;
    private Vector2 position;
    private Vector2 velocity;

    public Sprite(Texture texture, float x, float y){
        this.texture = texture;
        this.position = new Vector2(x,y);
        this.velocity = new Vector2(0,0);

    }

    public void update(float delta){
       position.add(velocity.x * delta, velocity.y * delta);
    }

    public void draw(SpriteBatch batch){
        batch.draw(texture, position.x, position.y);
    }

    public void setVelocity(float x, float y) {
        velocity.set(x, y);
    }

    public Vector2 getPosition(){
        return  position;
    }




}
