package com.Prerak;

public class Main {

    public static void main(String[] args) {
	// write your code here
        UIControl[] controls = { new TextBox(), new CheckBox()};
        for(var control : controls){
        control.render();
        }
    }
}
