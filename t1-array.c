#include <stdio.h>
#include <stdlib.h>

int main() {
  int array_1[] = {1, 2, 3};
  printf("%d\n", array_1[1]);

  int array_2[30];
  for (int i = 0; i < 30; i++) {
    array_2[i] = 0;
  }

  for (int i = 0; i < 3; i++) {
    printf("[%d] %d\n", i, array_1[i]);
  }

  return 0;
}