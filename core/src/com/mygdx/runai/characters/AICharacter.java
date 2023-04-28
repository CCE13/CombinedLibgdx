package com.mygdx.runai.characters;

import com.badlogic.gdx.ai.btree.BehaviorTree;
import com.badlogic.gdx.ai.btree.branch.Sequence;
import com.badlogic.gdx.ai.btree.decorator.Invert;
import com.badlogic.gdx.ai.btree.leaf.Success;
import com.badlogic.gdx.graphics.Texture;
import com.badlogic.gdx.graphics.g2d.Batch;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;
import com.badlogic.gdx.math.Vector2;
import com.mygdx.runai.RunAI;
import com.mygdx.runai.Sprite;
import com.mygdx.runai.states.DebugNode;
import com.mygdx.runai.states.MovementNode;

import java.util.Random;

import javax.management.relation.RelationNotFoundException;

import jdk.nashorn.internal.runtime.Debug;

public class AICharacter {

    private int speedIndex;
    private BehaviorTree<AICharacter> behaviorTree;
    public Sprite aiSprite;

    private float finalSpeed;



    public AICharacter(int speedIndex, Texture texture, float x, float y){

        this.speedIndex = speedIndex;
        aiSprite = new Sprite(texture, x,y);

        //TODO connect with unity to get the speed curve
        finalSpeed = speedIndex - 2;
        finalSpeed = finalSpeed/10;
        finalSpeed = 1 + finalSpeed;




        //Main behvaiour tree branch
        behaviorTree = new BehaviorTree<AICharacter>(
                new Sequence<AICharacter>(
                        new Invert<AICharacter>(
                                new Sequence<AICharacter>(

                                        //new DebugNode(Integer.toString(speedIndex);
                                        new MovementNode(aiSprite,aiSprite.getPosition(), new Vector2(GetTargetPos()),1)

                                )


                        ),

                        new Success<AICharacter>()
                )

        );
    }

    public void update(float delta){
        behaviorTree.step();
    }

    public Vector2 GetTargetPos(){
       //Vector2 targetPos = new Vector2(aiSprite.getPosition().x, RunAI.getInstance().playerCurrentSpeed* finalSpeed);
        Vector2 targetPos = new Vector2(0,0);
       return targetPos;
    }

}
