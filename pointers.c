// What is a Pointer

#include "stdio.h"
#include "stdlib.h"

int main(){
  int a = 22;
  int copy = a;

  int *ptr = &a;
  printf("%d\n",a);
  printf("%d\n", *ptr);

  *ptr = 233;

  printf("%d\n",a);
  printf("%d\n", *ptr);
}


