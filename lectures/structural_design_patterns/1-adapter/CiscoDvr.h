#ifndef CISCO_DVR_H
#define CISCO_DVR_H

class CiscoDvr
{
  public:
    typedef struct
    {
      int hour;
      int minute;
      int second;
    } Time;

    void beginPlayBack(Time startTime);
    void stopPlayBack();
    void pausePlayBack();
};

#endif
