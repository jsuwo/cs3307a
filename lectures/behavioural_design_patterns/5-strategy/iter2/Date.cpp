#include <iomanip>
#include <sstream>
#include "Date.h"
#include "DateFormatter.h"

using std::ostringstream;
using std::setfill;
using std::setw;
using std::string;

Date::Date(int yr, int mon, int day, int hr, int min, int sec, DateFormatter* formatter) :
  _year(yr), _month(mon), _day(day), _hour(hr), _minute(min), _second(sec), _formatter(formatter)
{
}

void Date::setFormatter(DateFormatter* formatter)
{
  delete this->_formatter;
  this->_formatter = formatter;
}

const string Date::toString() const
{
  return this->_formatter->toString(this);
}

int Date::year() const
{
  return this->_year;
}

int Date::month() const
{
  return this->_month;
}

int Date::day() const
{
  return this->_day;
}

int Date::hour() const
{
  return this->_hour;
}

int Date::minute() const
{
  return this->_minute;
}

int Date::second() const
{
  return this->_second;
}
