#include <iostream>
#include "Light.h"

using std::cout;
using std::endl;
using std::string;

Light::Light(const std::string& name) : _name(name)
{
}

void Light::turnOn()
{
  cout << "Turning on " << this->_name << endl;
  this->_turnedOn = true;
}

void Light::turnOff()
{
  cout << "Turning off " << this->_name << endl;
  this->_turnedOn = false;
}
