package com.mygdx.runai.states;

import com.badlogic.gdx.ai.btree.LeafTask;
import com.badlogic.gdx.ai.btree.Task;
import com.mygdx.runai.characters.AICharacter;

public class AudioNode extends LeafTask<AICharacter> {

    public AudioNode() {
        //test
    }
    @Override
    public Status execute() {
        return null;
    }

    @Override
    protected Task<AICharacter> copyTo(Task<AICharacter> task) {
        return null;
    }
}
