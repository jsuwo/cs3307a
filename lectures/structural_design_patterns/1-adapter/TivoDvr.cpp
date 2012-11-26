#include <iostream>
#include "TivoDvr.h"

using std::cout;
using std::endl;

void TivoDvr::playFrom(int h, int m, int s)
{
  cout << "Tivo DVR is now playing from " << h << ":" << m << ":" << s << endl;
}

void TivoDvr::stopPlayback()
{
  cout << "Tivo DVR is now stopped" << endl;
}

void TivoDvr::pausePlayback()
{
  cout << "Tivo DVR is now paused" << endl;
}

