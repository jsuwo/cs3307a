#include "CiscoDvrAdapter.h"

void CiscoDvrAdapter::play(int h, int m, int s)
{
  Time t;

  t.hour = h;
  t.minute = m;
  t.second = s;

  this->beginPlayBack(t);
}

void CiscoDvrAdapter::stop()
{
  this->stopPlayBack();
}

void CiscoDvrAdapter::pause()
{
  this->pausePlayBack();
}

