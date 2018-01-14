#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_joe_ndk_1demo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
//    std::string hello = "Hello from C++\n May the force be with you.";
    std::string hello = "May the force be with you.";

    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jstring JNICALL
Java_com_example_joe_ndk_1demo_MainActivity_alphaFx(
        JNIEnv* env,
        jobject /* this */) {
//    std::string hello = "Hello from C++\n May the force be with you.";
    std::string hello = "May the force be with you.";

    return env->NewStringUTF(hello.c_str());
}


