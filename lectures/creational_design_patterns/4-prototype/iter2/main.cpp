#include <boost/timer/timer.hpp>
#include <iostream>
#include "FileConfig.h"
#include "DatabaseConfig.h"

using std::cout;
using std::endl;

AppConfig* loadConfig()
{
  boost::timer::auto_cpu_timer t;

  cout << "Loading config..." << endl;
  return new FileConfig("/mnt/fileserver/app.conf");
}

main()
{
  AppConfig* cfg1 = loadConfig();

  boost::timer::auto_cpu_timer t;
  cout << "Cloning config..." << endl;
  AppConfig* cfg2 = cfg1->clone();
}
