#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
using std::string;

Person::Person(string name, string pet_name) : _name(name), _pet(pet_name)
{
  cout << "In constructor Person(name, pet_name)" << endl;
}

