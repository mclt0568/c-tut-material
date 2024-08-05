#include <stdio.h>

int main(int argc, char* argv[]) {
  char str_1[] = "Hello World!\n";
  printf("%s", str_1);

  char str_2[] = {'H', 'o', 'l', 'a'};
  printf("%s", str_2);

  char str_3[] = {'H', 'o', 'l', 'a', '\n', '\0'};
  printf("%s", str_3);

  return 0;
}