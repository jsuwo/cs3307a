#ifndef DATABASE_CONFIG_H
#define DATABASE_CONFIG_H

#include <string>
#include "AppConfig.h"

class DatabaseConfig : public AppConfig
{
  public:
    DatabaseConfig(const std::string& hostname, int port, const std::string& username, const std::string& password);
    AppConfig* clone() const;
    void saveConfig();
};

#endif

