#ifndef STEREO_ON_COMMAND_H
#define STEREO_ON_COMMAND_H

#include "Stereo.h"

class StereoOnCommand : public Command
{
  public:
    StereoOnCommand(Stereo* stereo) : _stereo(stereo)
    {
    }

    void execute()
    {
      this->_stereo->turnOn();
    }

  private:
    Stereo* _stereo;
};

#endif
