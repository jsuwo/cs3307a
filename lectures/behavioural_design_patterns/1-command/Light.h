#ifndef LIGHT_H
#define LIGHT_H

#include <string>

class Light
{
  public:
    Light(const std::string& name);
    void turnOn();
    void turnOff();

  private:
    std::string _name;
    bool _turnedOn;
};

#endif
