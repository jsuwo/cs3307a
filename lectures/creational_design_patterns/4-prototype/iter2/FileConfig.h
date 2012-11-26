#ifndef FILE_CONFIG_H
#define FILE_CONFIG_H

#include <string>
#include "AppConfig.h"

class FileConfig : public AppConfig
{
  public:
    FileConfig(const std::string& filename);
    AppConfig* clone() const;
    void saveConfig();
};

#endif

