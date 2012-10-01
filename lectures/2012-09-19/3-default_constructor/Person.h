#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {

  public:
    std::string name() const;
    int age() const;
    bool female() const;
    Person* best_friend() const;

  private:
    std::string _name;
    int _age;
    bool _female;
    Person* _bff;
};

#endif

