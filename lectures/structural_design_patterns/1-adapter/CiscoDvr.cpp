#include <iostream>
#include "CiscoDvr.h"

using std::cout;
using std::endl;

void CiscoDvr::beginPlayBack(Time t)
{
  cout << "Cisco DVR is now playing from " << t.hour << ":" 
                                           << t.minute << ":"
                                           << t.second << endl;
}

void CiscoDvr::stopPlayBack()
{
  cout << "Cisco DVR is now stopped" << endl;
}

void CiscoDvr::pausePlayBack()
{
  cout << "Cisco DVR is now paused" << endl;
}

