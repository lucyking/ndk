package com.example.joe.ndk_demo;

/**
 * Created by Administrator on 2018/1/14.
 */

public class JNIUtils {
    // 加载native-jni
    static {
//        System.loadLibrary("native-jni");
        System.loadLibrary("native-lib");
    }
    //java调C中的方法都需要用native声明且方法名必须和c的方法名一样
    public native String stringFromJNI();
}
