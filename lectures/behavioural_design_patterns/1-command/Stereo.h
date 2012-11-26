#ifndef STEREO_H
#define STEREO_H

#include <string>

class Stereo
{
  public:
    Stereo(const std::string& name);
    void turnOn();
    void turnOff();
    void play();

  private:
    std::string _name;
    bool _turnedOn;
};

#endif
