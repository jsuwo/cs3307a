#include <iomanip>
#include <string>
#include <sstream>
#include "DateOnlyFormatter.h"
#include "Date.h"

using std::ostringstream;
using std::setfill;
using std::setw;
using std::string;

const std::string DateOnlyFormatter::toString(const Date* date) const
{
  ostringstream os;

  os << setw(2) << setfill('0') << date->month() << "-"
     << setw(2) << setfill('0') << date->day() << "-"
                                << date->year();
  return os.str();
}

