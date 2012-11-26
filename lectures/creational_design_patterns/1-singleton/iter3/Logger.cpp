#include <iostream>
#include "Logger.h"

using std::endl;
using std::string;

const Logger* Logger::_instance = NULL;

const Logger& Logger::instance()
{
  if (_instance == NULL)
    _instance = new Logger();

  return *_instance;
}

Logger::Logger()
{
  this->_output.open("program.log");  
}

Logger::~Logger()
{
  this->_output.close();
}

const Logger& Logger::log(const string& message) const
{
  this->_output << message << endl;
}

const Logger& Logger::operator<<(const string& message) const
{
  return this->log(message);
}
