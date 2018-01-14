//
// Created by Administrator on 2018/1/14.
//
#include "com_example_joe_ndk_demo_JNIUtils.h"
JNIEXPORT jstring JNICALL Java_com_example_joe_ndk_1demo_JNIUtils_stringFromJNI
        (JNIEnv *env, jobject j){
//    return (*env) -> NewStringUTF(env,"Hello, I'm from jni");
    return "Hello JNI";
}

