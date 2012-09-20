#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
  public:
    Person(std::string name);
    Person(std::string name, int age);
    Person(std::string name, int age, bool female);

  private:
    std::string _name;
    int _age;
    bool _female;
};

#endif

