#include "Person.h"

Person::Person(const std::string& name)
{
  this->_car = new Car();
}

Person::~Person()
{
  delete this->_car;
}

Car* Person::car() const
{
  return this->_car;
}
