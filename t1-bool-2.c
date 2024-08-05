#include <stdbool.h>
#include <stdio.h>

bool is_negative(int val) {
  if (val < 0) {
    return true;
  }

  return false;
}

int main() {
  printf("-3 is negative? %d \n", is_negative(-3));
  printf("256 is negative? %d \n", is_negative(256));

  bool expr = (true && false) || true;
  printf("(true && false) || true -> %d \n", expr);

  return 0;
}