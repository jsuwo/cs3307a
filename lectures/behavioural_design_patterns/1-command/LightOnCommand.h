#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "Light.h"

class LightOnCommand : public Command
{
  public:
    LightOnCommand(Light* light) : _light(light)
    {
    }

    void execute()
    {
      this->_light->turnOn();
    }

  private:
    Light* _light;
};

#endif
