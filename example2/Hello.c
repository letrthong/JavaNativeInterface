#include "Hello.h"
#include <stdio.h>

int sum(int a, int b)
{	
  printf("a=%d & b=%d \n",a,b);
  return a+b;
}

void JNICALL Java_Hello_printGreeting(JNIEnv *jni, jobject jobj)
 {
  	printf("Hello World !!! in C\n");
 }


 jint JNICALL Java_Hello_sum(JNIEnv *jni, jobject jobj, jint a, jint b)
{
	return sum(a,b);
}
