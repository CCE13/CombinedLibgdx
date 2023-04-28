package com.mygdx.runai.states;

import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.ai.btree.LeafTask;
import com.badlogic.gdx.ai.btree.Task;
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

    public MovementNode(Sprite sprite, Vector2 startPos, Vector2 targetPos, float speed){
        this.sprite = sprite;
        this.startPos = new Vector2(startPos);
        this.targetPos = new Vector2(targetPos);
        this.speed = speed;


    }

    @Override
    public Status execute() {
        if(sprite.getPosition().dst(targetPos) <= 1){
            return Status.SUCCEEDED;
        }

        //Calculate the direction to the target
        Vector2 direction = targetPos.cpy().sub(startPos).nor();

        //Update the position based on the direction and speed
        sprite.setVelocity(0, direction.scl(speed).y);
        sprite.update(Gdx.graphics.getDeltaTime());

        return Status.SUCCEEDED;


    }

    @Override
    protected Task<AICharacter> copyTo(Task<AICharacter> task) {
        return null;
    }
}
