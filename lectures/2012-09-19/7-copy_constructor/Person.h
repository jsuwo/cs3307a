#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>


class Person
{
  public:
    Person(std::string name);
    Person(std::string name, Person* bff);
    Person(const Person& other);
    ~Person();

    std::string name() const;

  private:
    std::string _name;
    Person* _bff;
};

#endif

