#include <stdio.h>

int main() {

  int array_1[] = {1, 3, 5}; // initialised array
  int array_2[3];            // uninitialised array

  int* ptr = array_1;

  *ptr++; // makes array_1[0] from 1 to 2
  ptr++;  // but what if we do +1 to a pointer it self?
  printf("%d\n", *ptr);

  printf("%d\n", ptr[2]);
  printf("%d\n", *array_1);

  return 0;
}