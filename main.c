#include <stdio.h>
#include "header.h"


int main(void) {
  printf("Hello World\n");

  myPublic();
  myPublic();
  printf("Global Variable is %d", globalVar); 


  return 0;
}