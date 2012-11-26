#ifndef SONY_DVR_ADAPTER_H
#define SONY_DVR_ADAPTER_H

#include "Dvr.h"
#include "SonyDvr.h"

class SonyDvrAdapter : public Dvr, private SonyDvr
{
  public:
    void play(int h, int m, int s);
    void stop();
    void pause();
};

#endif
