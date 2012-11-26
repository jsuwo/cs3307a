#ifndef CAR_H
#define CAR_H

#include "Logger.h"

class Car
{
  public:
    Car(const Logger& log);
    
    void turnOn();
    void turnOff();
    
  private:
    const Logger& _log;
};

#endif
