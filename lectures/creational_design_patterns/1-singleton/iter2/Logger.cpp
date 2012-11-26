#include <iostream>
#include "Logger.h"

using std::endl;
using std::string;

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
