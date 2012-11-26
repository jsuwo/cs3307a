#include "FileConfig.h"

using std::string;

FileConfig::FileConfig(const string& filename)
{
  // Simulate load of large configuration file on remote network share
  sleep(2 + (rand() % 2));
  
  // Simulate adding configuration from the file
  this->_config["config_source"] = filename;

  // ...
}

void FileConfig::saveConfig()
{
  // ...
}

