#include <stdio.h>

typedef struct {
  int student_id;
  char* name;
  int* units;
  int unit_count;
} Student;

Student print_student(Student student) {
  printf("Student:\n");
  printf("  id: %d\n", student.student_id);
  printf("  name: %s\n", student.name);
  printf("  units:\n");
  for (int i = 0; i < student.unit_count; i++) {
    printf("    %d\n", student.units[i]);
  }
}

Student new_student(int id, char* name, int* units) {
  Student student;

  student.student_id = id;
  student.name = name;
  student.unit_count = 1;
  units[0] = 1045;
  student.units = units;

  return student;
}

int main() {
  int units[100];
  Student alice = new_student(33332835, "Alice Smith", units);

  print_student(alice);

  return 0;
}