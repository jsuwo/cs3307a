#include "Person.h"

using std::string;

Person::Person(string name)
{
  this->_name = name;
}

Person::Person(string name, int age)
{
  this->_name = name;
  this->_age = age;
}

Person::Person(string name, int age, bool female)
{
  this->_name = name;
  this->_age = age;
  this->_female = female;
}

