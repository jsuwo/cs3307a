#include <iostream>
#include "Pet.h"

using std::cout;
using std::endl;
using std::string;

Pet::Pet()
{
  cout << "In default Pet constructor" << endl;
}

Pet::Pet(string name)
{
  cout << "In constructor Pet(name)" << endl;
}

Pet::Pet(const Pet& other)
{
  cout << "In Pet copy constructor" << endl;
}

Pet& Pet::operator=(const Pet& other)
{
  cout << "In Pet operator=()" << endl;
}
