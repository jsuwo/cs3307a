#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

class Logger
{
  public:
    virtual ~Logger();
    static const Logger& instance();

    const Logger& log(const std::string& message) const;
    const Logger& operator<<(const std::string& message) const;

  protected:
    Logger(); // Prevent instantiation

  private:
    // Prevent copying and assignment 
    Logger(const Logger& other) { };
    Logger& operator=(const Logger& other) { };
    
    mutable std::ofstream _output;
    static const Logger* _instance;
};

#endif

