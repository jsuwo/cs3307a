#ifndef DVR_H
#define DVR_H

class Dvr
{
  public:
    virtual void play(int h, int m, int s) = 0;
    virtual void stop() = 0;
    virtual void pause() = 0;
};

#endif
