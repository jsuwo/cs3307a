#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

class Logger
{
  public:
    Logger();
    virtual ~Logger();
    const Logger& log(const std::string& message) const;
    const Logger& operator<<(const std::string& message) const;

  private:
    mutable std::ofstream _output;
};

#endif

