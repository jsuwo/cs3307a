#include <iomanip>
#include <sstream>
#include "Date.h"

using std::ostringstream;
using std::setfill;
using std::setw;
using std::string;

Date::Date(int yr, int mon, int day, int hr, int min, int sec) :
  _year(yr), _month(mon), _day(day), _hour(hr), _minute(min), _second(sec)
{
}

const string Date::toString(DateFormat format) const
{
  ostringstream os;

  switch (format)
  {
    case DATE:
      os << setw(2) << setfill('0') << _month << "-"
         << setw(2) << setfill('0') << _day << "-"
                                    << _year;
      return os.str();
      
      break;

    case TIME:
      os << setw(2) << setfill('0') << _hour << ":"
         << setw(2) << setfill('0') << _minute << ":"
         << setw(2) << setfill('0') << _second;
      return os.str();

      break;

    case DATETIME:
      os << setw(2) << setfill('0') << _month << "-"
         << setw(2) << setfill('0') << _day << "-"
                                    << _year << " "
         << setw(2) << setfill('0') << _hour << ":"
         << setw(2) << setfill('0') << _minute << ":"
         << setw(2) << setfill('0') << _second;
      return os.str();

      break;

  }
}

