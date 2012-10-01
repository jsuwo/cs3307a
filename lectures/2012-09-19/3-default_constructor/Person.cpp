#include "Person.h"

using std::string;

string Person::name() const
{
  return this->_name;
}

int Person::age() const
{
  return this->_age;
}

bool Person::female() const
{
  return this->_female;
}

Person* Person::best_friend() const
{
  return this->_bff;
}
