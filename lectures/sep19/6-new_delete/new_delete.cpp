#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

main()
{
  Person* p1 = new Person("Jeff");
  Person* p2 = new Person("Joe", p1);
  Person* p3 = new Person("John", p2);

  cout << "Deleting p1" << endl;

  delete p1;  // p2 now has a dangling pointer
  p1 = NULL;

  Person** people = new Person*[2];
  
  people[0] = p2;
  people[1] = p3;

  cout << "Deleting array" << endl;

  // Reclaim memory allocated for array;
  // does not delete array elements
  delete [] people; 

  cout << "I am P2 and I am still valid: " << p2->name() << endl;

  //memory leak
}
