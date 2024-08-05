#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  char str_1[] = "Hello World!\n";
  printf("%s", str_1);

  char str_2[] = "Hello World!\n";
  printf("%s", str_2);

  if (str_1 == str_2) {
    printf("str_1 == str_2 !!!\n");
  }

  if (strcmp(str_1, str_2) == 0) {
    printf("str_1 == str_2 !!!\n");
  }

  return 0;
}