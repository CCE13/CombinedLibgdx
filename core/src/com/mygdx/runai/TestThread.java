package com.mygdx.runai;

public class TestThread extends Thread implements Runnable{
    private Test game;
    private boolean running = true;

    public TestThread(Test game) {

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



