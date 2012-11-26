#include <iomanip>
#include <string>
#include <sstream>
#include "TimeOnlyFormatter.h"
#include "Date.h"

using std::ostringstream;
using std::setfill;
using std::setw;
using std::string;

const std::string TimeOnlyFormatter::toString(const Date* date) const
{
  ostringstream os;

  os << setw(2) << setfill('0') << date->hour() << ":"
     << setw(2) << setfill('0') << date->minute() << ":"
     << setw(2) << setfill('0') << date->second();

  return os.str();
}

