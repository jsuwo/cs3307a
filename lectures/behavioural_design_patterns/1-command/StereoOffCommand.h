#ifndef STEREO_OFF_COMMAND_H
#define STEREO_OFF_COMMAND_H

#include "Stereo.h"

class StereoOffCommand : public Command
{
  public:
    StereoOffCommand(Stereo* stereo) : _stereo(stereo)
    {
    }

    void execute()
    {
      this->_stereo->turnOff();
    }

  private:
    Stereo* _stereo;
};

#endif
