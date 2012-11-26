#include "Person.h"

int main()
{
  QObject dummy;

  Person* p1 = new Person("Joe", &dummy);
  Person* p2 = new Person("Jane", &dummy);

  return 0;
}
