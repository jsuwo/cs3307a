#include "Car.h"
#include "Logger.h"

Car::Car()
{
}

void Car::turnOn()
{
  Logger::instance() << "Turning on car";
}

void Car::turnOff()
{
  Logger::instance() << "Turning off car";
}
