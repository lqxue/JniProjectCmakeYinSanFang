package com.jniprojectcmake;

public class Util {
    static {
        System.loadLibrary("printString");
        System.loadLibrary("print");

    }

    public  static native String print1();
}
