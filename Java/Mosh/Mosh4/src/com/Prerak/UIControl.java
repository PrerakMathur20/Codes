package com.Prerak;

public abstract class UIControl {
    private boolean isEnbaled =  true;

//    public UIControl(boolean isEnbaled) {
//        this.isEnbaled = isEnbaled;
//    }

    public abstract void render();

    public final void enable(){
        isEnbaled = true;
    }

    public void disable(){
        isEnbaled = false;
    }
    public boolean isEnbaled(){
        return isEnbaled;
    }
}
