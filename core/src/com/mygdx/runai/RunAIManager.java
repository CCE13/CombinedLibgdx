package com.mygdx.runai;


public class RunAIManager {
    private static RunAIManager instance;
    private RunAI runAI;

    public RunAIManager() {
        runAI = new RunAI();
    }

    public static synchronized RunAIManager getInstance() {
        if (instance == null) {
            instance = new RunAIManager();
        }
        return instance;
    }

    public RunAI getRunAI() {
        return runAI;
    }
}
