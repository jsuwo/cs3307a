#ifndef DATE_FORMATTER_H
#define DATE_FORMATTER_H

#include <string>
class Date;

class DateFormatter
{
  public:
    virtual const std::string toString(const Date* date) const = 0;
};

#endif
