#include "Car.h"

Car::Car(const Logger& log) : _log(log)
{
}

void Car::turnOn()
{
  this->_log << "Turning on car";
}

void Car::turnOff()
{
  this->_log << "Turning off car";
}
