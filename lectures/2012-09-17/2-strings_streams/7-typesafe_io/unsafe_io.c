// Example of type-unsafe I/O in C
// Produces a compiler warning, but still compiles

#include <stdio.h>

typedef struct {
  int age;
  char* first_name;
  char* last_name;
} person_t;

main() {
  person_t p;

  p.age = 99;
  p.first_name = "Bob";
  p.last_name = "Caygeon";

  printf("%s\n", p);

  printf("%s\n", p.age); // Segmentation fault (why?)
}
