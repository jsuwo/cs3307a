#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Pet.h"

class Person {
  public:
    Person(std::string name, std::string pet_name);

  private:
    std::string _name;
    Pet _pet;
};

#endif

