#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person(string name) : _name(name)
{
  cout << "In Person constructor" << endl;
}

Person::~Person()
{
  cout << "In Person " << this->_name << " destructor" << endl;
}

