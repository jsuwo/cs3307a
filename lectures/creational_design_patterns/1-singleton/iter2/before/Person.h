#ifndef PERSON_H
#define PERSON_H

#include "Car.h"

class Person
{
  public:
    Person(const std::string& name);
    virtual ~Person();
    Car* car() const;

  private:
    std::string _name;
    Car* _car;
};

#endif
