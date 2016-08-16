#include "Hello.h"
#include <stdio.h>

int function()
{	
     printf("call function\n");
}

void JNICALL Java_Hello_printGreeting(JNIEnv *jni, jobject jobj)
{
  printf("Hello World !!! in C\n");
  function();
}