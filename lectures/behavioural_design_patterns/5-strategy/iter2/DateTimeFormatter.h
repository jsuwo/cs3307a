#ifndef DATE_TIME_FORMATTER_H
#define DATE_TIME_FORMATTER_H

#include <string>
#include "DateFormatter.h"

class Date;

class DateTimeFormatter : public DateFormatter
{
  const std::string toString(const Date* date) const;
};

#endif
