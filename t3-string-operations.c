#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  char old_str[] = "Hola";
  char new_str[100];

  strcpy(new_str, old_str);     // new_str = old_str
  strcat(new_str, " world!\n"); // new_str += "world!\n"

  printf("%s", new_str);

  return 0;
}