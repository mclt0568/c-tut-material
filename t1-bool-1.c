#include <stdio.h>

int is_negative(int val) {
  if (val < 0) {
    return 1;
  }

  return 0;
}

int main() {
  printf("-3 is negative? %d \n", is_negative(-3));
  printf("256 is negative? %d \n", is_negative(256));

  int expr = (1 && 0) || 1;
  printf("(true && false) || true -> %d \n", expr);

  return 0;
}