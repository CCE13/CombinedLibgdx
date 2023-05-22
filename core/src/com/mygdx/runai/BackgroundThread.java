package com.mygdx.runai;

import com.badlogic.gdx.math.Vector2;
import com.mygdx.runai.AIData.AIDataClassHolder;

import java.util.ArrayList;

public class BackgroundThread extends Thread implements Runnable{
    private RunAI game;
    private boolean running = true;
    public BackgroundThread(RunAI game) {

        this.game = game;
    }

    public ArrayList<Vector2> aiPos;

    @Override
    public void run() {

        try {
            // Add a delay to reduce CPU usage
            Thread.sleep(3000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        game.CreateAndRunAI();
        while (running) {
            // Add your code here
            System.out.println("Thread is running...");
            aiPos =  game.RunTheAI();

            try {
                // Add a delay to reduce CPU usage
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public void SetAIData(AIDataClassHolder holder){
        System.out.println(holder.holder.size() + " Hello i have reached the backgroudThread");
    }

    public void StopRunning(){
        running = false;
    }
}



