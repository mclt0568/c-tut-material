#include <stdio.h>

int main() {

  int array_1[] = {1, 3, 5}; // initialised array
  int array_2[3];            // uninitialised array

  int* ptr = array_1;

  ptr++; // becomes [1]
  ptr++; // becomes [2]
  ptr++; // becomes [3] out of bound!!!

  printf("%d\n", *ptr);
}