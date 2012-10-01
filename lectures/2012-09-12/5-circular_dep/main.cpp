#include "a.h"
#include "b.h"
 
int main() {
  A a;
  B b;
  a.b = &b;
  b.a = &a;
}

