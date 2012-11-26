#include "DatabaseConfig.h"

using std::string;

AppConfig* DatabaseConfig::clone() const
{
  return new DatabaseConfig(*this);
}

DatabaseConfig::DatabaseConfig(const string& hostname, int port, const string& username, const string& password)
{
  // Simulate load of large configuration data from remote database server
  sleep(3 + (rand() % 3));
  
  // Simulate adding configuration from the file
  this->_config["config_source"] = hostname;

  // ...
}

void DatabaseConfig::saveConfig()
{
  // ...
}

