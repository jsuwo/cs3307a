#include "Logger.h"
#include "Person.h"
#include "Car.h"

main()
{
  Logger::instance() << "Starting program";

  Person p("Joe");

  // Side note: what design principle has been violated here?
  Car* car = p.car();
  
  car->turnOn();
  car->turnOff();
}
