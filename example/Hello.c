#include "Hello.h"
#include <stdio.h>


void JNICALL Java_Hello_printGreeting(JNIEnv *jni, jobject jobj)
 {
  	printf("Hello World !!! in C\n");
 }