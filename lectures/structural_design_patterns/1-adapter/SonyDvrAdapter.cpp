#include "SonyDvrAdapter.h"

void SonyDvrAdapter::play(int h, int m, int s)
{
  long seconds = (h * 3600) + (m * 60) + s;
  this->startPlayback(seconds);
}

void SonyDvrAdapter::stop()
{
  SonyDvr::stop();
}

void SonyDvrAdapter::pause()
{
  SonyDvr::pause();
}

