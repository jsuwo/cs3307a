#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person(string name, string pet_name)
{
  cout << "In constructor Person(name, pet_name)" << endl;
  this->_name = name;
  this->_pet = Pet(pet_name);
}

