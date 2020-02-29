//
// Created by lqx on 2020-02-29.
//
#include "sanfang/com_testJni_Util.h"
#include "com_jniprojectcmake_Util.h"

JNIEXPORT jstring JNICALL Java_com_jniprojectcmake_Util_print1
        (JNIEnv *env, jclass thiz){
    return Java_com_testJni_Util_print(env,thiz);
}