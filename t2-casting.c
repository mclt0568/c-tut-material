#include <stdio.h>

int main() {
  int number = 90;
  printf("%d %x\n", number, number);

  char letter = 'A';
  printf("%c %x\n", letter, letter);

  // note the %d formatter for letter
  // and  the %c formatter for number
  printf("%d\n", letter);
  printf("%c\n", number);

  char letter_2 = 65;
  printf("%c\n", letter_2);
  if (letter_2 >= 'A' && letter_2 <= 'Z') {
    printf("%c is capital letter\n", letter_2);
  }

  return 0;
}