#ifndef DATE_ONLY_FORMATTER_H
#define DATE_ONLY_FORMATTER_H

#include <string>
#include "DateFormatter.h"

class Date;

class DateOnlyFormatter : public DateFormatter
{
  const std::string toString(const Date* date) const;
};

#endif
