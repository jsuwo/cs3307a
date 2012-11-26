#ifndef STEREO_PLAY_COMMAND_H
#define STEREO_PLAY_COMMAND_H

#include "Stereo.h"

class StereoPlayCommand : public Command
{
  public:
    StereoPlayCommand(Stereo* stereo) : _stereo(stereo)
    {
    }

    void execute()
    {
      this->_stereo->play();
    }

  private:
    Stereo* _stereo;
};

#endif
