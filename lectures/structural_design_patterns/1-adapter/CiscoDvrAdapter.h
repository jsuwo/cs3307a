#ifndef CISCO_DVR_ADAPTER_H
#define CISCO_DVR_ADAPTER_H

#include "Dvr.h"
#include "CiscoDvr.h"

class CiscoDvrAdapter : public Dvr, private CiscoDvr
{
  public:
    void play(int h, int m, int s);
    void stop();
    void pause();
};

#endif
