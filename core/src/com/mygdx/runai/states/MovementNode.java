package com.mygdx.runai.states;

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

    private long lastTimeMillis;

    public MovementNode(Sprite sprite, Vector2 targetPos, float speed, AICharacter aiCharacter, Vector2 playerPosition) {
        this.sprite = sprite;
        this.targetPos = new Vector2(targetPos);
        this.speed = speed;
        this.aiCharacter = aiCharacter;
        this.playerPosition = playerPosition;
        this.lastTimeMillis = System.currentTimeMillis();
    }

    @Override
    public Status execute() {

        System.out.println("Hello from movement node");
        System.out.println(sprite.getPosition());
        targetPos = aiCharacter.GetTargetPos();
        this.startPos = new Vector2(sprite.getPosition());

        long currentTimeMillis = System.currentTimeMillis();
        float deltaTime = (currentTimeMillis - lastTimeMillis) / 1000f;
        lastTimeMillis = currentTimeMillis;

        // Calculate the direction to the target
        Vector2 direction = targetPos.cpy().sub(startPos).nor();

        // Calculate the distance to the target
        float distance = startPos.dst(targetPos);

        // Calculate the distance to be traveled in this frame
        float distanceToTravel = speed * deltaTime;

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
        sprite.update(deltaTime);
        return Status.RUNNING;
    }

    @Override
    protected Task<AICharacter> copyTo(Task<AICharacter> task) {
        return null;
    }
}
