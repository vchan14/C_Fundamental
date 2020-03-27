#include <stdio.h>
#include "header.h"


static int privateVar; 
globalVar = 10;
static void myPrivate(){
  printf("I am a private function");
}

void myPublic(){
  static int counter = 0; 
  int notCounter = 5; 
  globalVar++; 

  counter++; 
  notCounter++; 
  printf("I am a public function\n");
  printf("counter value is %d \n", counter);
  printf("counter value is %d \n", notCounter);

}