#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#include <map>
#include <string>

class AppConfig
{
  public:

    virtual void saveConfig() = 0;

    const std::string& operator[](const std::string& key)
    {
      return this->_config[key];
    }

  protected:
    std::map<std::string, std::string> _config;
};

#endif
