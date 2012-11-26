#include "TivoDvrAdapter.h"

void TivoDvrAdapter::play(int h, int m, int s)
{
  this->playFrom(h, m, s);
}

void TivoDvrAdapter::stop()
{
  this->stopPlayback();
}

void TivoDvrAdapter::pause()
{
  this->pausePlayback();
}

