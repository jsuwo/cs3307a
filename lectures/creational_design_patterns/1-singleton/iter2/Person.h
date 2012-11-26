#ifndef PERSON_H
#define PERSON_H

#include "Logger.h"
#include "Car.h"

class Person
{
  public:
    Person(const std::string& name, const Logger& log);
    virtual ~Person();
    Car* car() const;

  private:
    std::string _name;
    Car* _car;
};

#endif
