#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person(string name) : _name(name), _bff(NULL)
{
  cout << "In constructor(name) for Person " << this->_name << endl;
}

Person::Person(string name, Person* bff) : _name(name), _bff(bff)
{
  cout << "In constructor(name, bff) for Person " << this->_name << endl;
}

Person::~Person()
{
  cout << "In destructor for Person " << this->_name << endl;
}

string Person::name() const
{
  return this->_name;
}
