#include <iostream>
#include "Stereo.h"

using std::cout;
using std::endl;
using std::string;

Stereo::Stereo(const std::string& name) : _name(name)
{
}

void Stereo::turnOn()
{
  cout << "Turning on " << this->_name << endl;
  this->_turnedOn = true;
}

void Stereo::turnOff()
{
  cout << "Turning off " << this->_name << endl;
  this->_turnedOn = false;
}

void Stereo::play()
{
  if (this->_turnedOn)
    cout << "Playing " << this->_name << endl;
  else
    cout << this->_name << " is not turned on!" << endl;
}
