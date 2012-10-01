#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

void f(Person p)
{
  cout << "In f();" << endl;
}

main()
{
  Person p1("Jeff");
  Person* p2 = new Person("Bob");
  Person* p3 = new Person("Joe");

  cout << "Calling f()" << endl;
  f(p1);

  delete p2;
}
