#include <stdio.h>

typedef struct {
  int serial_number;
  char* name;
  int price;
} Item;

void print_item(Item item) {
  printf("Item -> %d, %s, %d\n", item.serial_number, item.name, item.price);
}

void item_set_price(Item* item, int new_price) { (*item).price = new_price; }

int main() {
  Item cheese;
  cheese.serial_number = 1001;
  cheese.name = "Cheese";
  cheese.price = 20;

  print_item(cheese);
  item_set_price(&cheese, 30);
  print_item(cheese);

  return 0;
}