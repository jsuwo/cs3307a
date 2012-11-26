#include "Person.h"

Person::Person(const std::string& name, const Logger& log)
{
  this->_car = new Car(log);
}

Person::~Person()
{
  delete this->_car;
}

Car* Person::car() const
{
  return this->_car;
}
