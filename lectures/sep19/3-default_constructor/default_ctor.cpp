#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

main()
{
  Person p;  // default constructor called

  cout << "Name:        " << p.name() << endl;
  cout << "Age:         " << p.age() << endl;
  cout << "Female:      " << p.female() << endl;
  cout << "Best Friend: " << p.best_friend() << endl;
}
