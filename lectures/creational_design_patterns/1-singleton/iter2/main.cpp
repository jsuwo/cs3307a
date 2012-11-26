#include "Logger.h"
#include "Person.h"
#include "Car.h"

main()
{
  Logger log;
  Person p("Joe", log);

  log << "Starting program";

  // Side note: what design principle has been violated here?
  Car* car = p.car();
  
  car->turnOn();
  car->turnOff();
}
