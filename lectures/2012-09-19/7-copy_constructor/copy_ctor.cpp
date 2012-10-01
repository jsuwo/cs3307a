#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

Person g(Person p) // copy constructor
{
  cout << "In g()" << endl;
  return p; // copy constructor
}

void f(Person p) // copy constructor
{
  cout << "In f()" << endl;
}

main()
{
  Person p1("Jeff");

  Person p2 = p1;   // copy constructor
  Person p3(p1);    // copy constructor

  cout << "Calling f()" << endl;
  f(p1); 
  cout << "After f()" << endl;

  cout << "Calling g()" << endl;
  Person p4 = g(p1);
  cout << "After g()" << endl;
}
