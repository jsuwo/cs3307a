#include <iostream>
#include "CiscoDvrAdapter.h"
#include "SonyDvrAdapter.h"
#include "TivoDvrAdapter.h"

using std::cout;
using std::endl;

void playEpisode(Dvr* dvr)
{
  dvr->play(0,45,10);
  dvr->pause();
  dvr->play(0,45,45);
  dvr->stop();
  cout << endl;
}

main()
{
  Dvr* dvr = new CiscoDvrAdapter(); 
  playEpisode(dvr);
  delete dvr;

  dvr = new SonyDvrAdapter();
  playEpisode(dvr);
  delete dvr;

  dvr = new TivoDvrAdapter();
  playEpisode(dvr);
  delete dvr;
}
