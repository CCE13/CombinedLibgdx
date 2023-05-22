package com.mygdx.runai.states;

import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.ai.btree.LeafTask;
import com.badlogic.gdx.ai.btree.Task;
import com.badlogic.gdx.audio.Sound;
import com.badlogic.gdx.math.Vector2;
import com.mygdx.runai.Sprite;
import com.mygdx.runai.characters.AICharacter;

public class MovementNode extends LeafTask<AICharacter> {
    Sprite sprite;
    float velocityX;
    float velocityY;

    private Vector2 targetPos;
    private Vector2 startPos;
    private float speed;

    private float randomizedSpeed;

    private AICharacter aiCharacter;

    public Sound sound;
    public Vector2 playerPosition;
    long soundID;


    public MovementNode(Sprite sprite, Vector2 targetPos, float speed, AICharacter aiCharacter, Vector2 playerPosition ){
        this.sprite = sprite;
        this.targetPos = new Vector2(targetPos);
        this.speed = speed;
        this.aiCharacter = aiCharacter;

        //Sets the player position
        this.playerPosition = playerPosition;

        sound = Gdx.audio.newSound(Gdx.files.internal("leftfoot.wav"));
        sound = Gdx.audio.newSound(Gdx.files.internal("rightfoot.wav"));

    }





    @Override
    public Status execute() {
        targetPos = aiCharacter.GetTargetPos();
        this.startPos = new Vector2(sprite.getPosition());

        // Calculate the direction to the target
        Vector2 direction = targetPos.cpy().sub(startPos).nor();

        // Calculate the distance to the target
        float distance = startPos.dst(targetPos);

        // Calculate the distance to be traveled in this frame
        float distanceToTravel = speed * Gdx.graphics.getDeltaTime();


        // Check if the remaining distance is less than the distance to be traveled in this frame
        if (distance < distanceToTravel) {
            sprite.setPosition(sprite.getPosition().x, targetPos.y);
            sprite.setVelocity(0, 0);

            return Status.SUCCEEDED;
        }

        // Calculate the movement along the Y-axis
        float yMovement = direction.y * distanceToTravel;

        // Update the position only on the Y-axis
        sprite.setPosition(sprite.getPosition().x, sprite.getPosition().y + yMovement);
        sprite.update(Gdx.graphics.getDeltaTime());

        return Status.RUNNING;

    }



    @Override
    protected Task<AICharacter> copyTo(Task<AICharacter> task) {
        return null;
    }
}
