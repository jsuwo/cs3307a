#ifndef LIGHT_OFF_COMMAND_H
#define LIGHT_OFF_COMMAND_H

#include "Light.h"

class LightOffCommand : public Command
{
  public:
    LightOffCommand(Light* light) : _light(light)
    {
    }

    void execute()
    {
      this->_light->turnOff();
    }

  private:
    Light* _light;
};

#endif
