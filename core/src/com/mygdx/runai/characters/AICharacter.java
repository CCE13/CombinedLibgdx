package com.mygdx.runai.characters;

import com.badlogic.gdx.ai.btree.BehaviorTree;
import com.badlogic.gdx.ai.btree.branch.Sequence;
import com.badlogic.gdx.ai.btree.decorator.Invert;
import com.badlogic.gdx.ai.btree.leaf.Success;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.math.Vector2;
import com.mygdx.runai.Sprite;
import com.mygdx.runai.states.MovementNode;

public class AICharacter {

    private int speedIndex;
    private BehaviorTree<AICharacter> behaviorTree;
    public Sprite aiSprite;
    public float targetSpeed;

    public Vector2 playerPosition;



    public AICharacter(int speedIndex, Texture texture, float x, float y){

        //this.speedIndex = speedIndex;
        aiSprite = new Sprite(texture, x,y);


        //TODO connect with unity to get the speed curve


        //Main behvaiour tree branch
        behaviorTree = new BehaviorTree<AICharacter>(
                new Sequence<AICharacter>(
                        new Invert<AICharacter>(
                                new Sequence<AICharacter>(

                                        //new DebugNode(Integer.toString(speedIndex);
                                        new MovementNode(aiSprite, GetTargetPos(),100, this, playerPosition)


                                )


                        ),

                        new Success<AICharacter>()
                )

        );
    }

    public void update(float delta, float playerSpeed, Vector2 playerPostion){
        behaviorTree.step();

        //Sets the speed of the AI based on the players speed
        targetSpeed = playerSpeed;

        this.playerPosition = playerPostion;


    }

    public Vector2 GetTargetPos(){


        float targetSpeedMultipler = targetSpeed * 3;
        Vector2 target = new Vector2(aiSprite.getPosition().x,  500  +  targetSpeedMultipler);
        Vector2 targetPos = new Vector2(target );
        return targetPos;
    }

}
