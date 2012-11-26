#include <iomanip>
#include <string>
#include <sstream>
#include "DateTimeFormatter.h"
#include "Date.h"

using std::ostringstream;
using std::setfill;
using std::setw;
using std::string;

const std::string DateTimeFormatter::toString(const Date* date) const
{
  ostringstream os;

  os << setw(2) << setfill('0') << date->month() << "-"
     << setw(2) << setfill('0') << date->day() << "-"
                                << date->year() << " "
     << setw(2) << setfill('0') << date->hour() << ":"
     << setw(2) << setfill('0') << date->minute() << ":"
     << setw(2) << setfill('0') << date->second();

  return os.str();
}

