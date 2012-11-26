#ifndef TIVO_DVR_ADAPTER_H
#define TIVO_DVR_ADAPTER_H

#include "Dvr.h"
#include "TivoDvr.h"

class TivoDvrAdapter : public Dvr, private TivoDvr
{
  public:
    void play(int h, int m, int s);
    void stop();
    void pause();
};

#endif
