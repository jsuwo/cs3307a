#include <iostream>
#include "SonyDvr.h"

using std::cout;
using std::endl;

void SonyDvr::startPlayback(long seconds)
{
  cout << "Sony DVR is now playing from " << seconds << " seconds" << endl;
}

void SonyDvr::stop()
{
  cout << "Sony DVR is now stopped" << endl;
}

void SonyDvr::pause()
{
  cout << "Sony DVR is now paused" << endl;
}

