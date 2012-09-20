#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
  public:
    Person(std::string name);
    ~Person();

  private:
    std::string _name;
};

#endif

