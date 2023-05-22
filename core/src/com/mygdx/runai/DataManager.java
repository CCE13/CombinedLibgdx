package com.mygdx.runai;

import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.Preferences;
import com.badlogic.gdx.files.FileHandle;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;


public final class DataManager {

    private static final String PREFS_NAME = "YOOO";
    private static Preferences prefs;

   public static float LoadPlayerRanDist() {
       try {
            //File file = new File("/data/user/0/com.mygdx.runai/files/variables.txt", "variables.txt");
            File file = new File("/data/user/0/com.DefaultCompany.RunAI_P/files/","variables.txt");
            BufferedReader reader = new BufferedReader(new FileReader(file));
            String line = reader.readLine();
            while (line != null) {
                String[] parts = line.split(": ");
                String variableSpeed = parts[0];
                String variableValue = parts[1];
                if (variableSpeed.equals("Speed")) {
                    String value = variableValue;
                   // System.out.println("Speed" + value);
                    return Float.parseFloat(variableValue);

                }


                line = reader.readLine();
            }
            reader.close();
        } catch (IOException e) {
            System.out.println("An error occurred unable to load file");
            e.printStackTrace();
        }

       return  0;
   }
    public static float LoadTime() {
        try {
            //File file = new File("/data/user/0/com.mygdx.runai/files/variables.txt", "variables.txt");
            FileHandle file = Gdx.files.local("variables.txt");

            BufferedReader reader = new BufferedReader(file.reader());
            String line = reader.readLine();
            while (line != null) {
                String[] parts = line.split(": ");
                String variableSpeed = parts[0];
                String variableValue = parts[1];
                if (variableSpeed.equals("Speed")) {
                    String value = variableValue;
                    System.out.println("Speed" + value);
                    return Float.parseFloat(variableValue);

                }

                if(variableSpeed.equals("Time")){

                    String value = variableValue;
                    System.out.println("Time" + value);
                    return Float.parseFloat(variableValue);
                }

                line = reader.readLine();
            }
            reader.close();
        } catch (IOException e) {
            System.out.println("An error occurred unable to load file");
            e.printStackTrace();
        }

        return  0;
    }


}
