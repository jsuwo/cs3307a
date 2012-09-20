#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
  public:
    Person(std::string name);
    Person(std::string name, Person* bff);
    ~Person();

    std::string name() const;

  private:
    std::string _name;
    Person* _bff;
};

#endif

