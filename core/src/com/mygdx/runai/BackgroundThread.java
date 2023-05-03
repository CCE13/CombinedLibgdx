package com.mygdx.runai;

public class BackgroundThread extends Thread implements Runnable{
    private Initialiser game;
    private boolean running = true;
    public BackgroundThread(Initialiser game) {

        this.game = game;
    }

    @Override
    public void run() {
        while (running) {
            // Add your code here
            System.out.println("Thread is running...");

            try {
                // Add a delay to reduce CPU usage
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}


