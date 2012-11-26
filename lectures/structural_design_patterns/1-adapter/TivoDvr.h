#ifndef TIVO_DVR_H
#define TIVO_DVR_H

class TivoDvr
{
  public:
    void playFrom(int h, int m, int s);
    void stopPlayback();
    void pausePlayback();
};

#endif
