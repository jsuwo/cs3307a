#ifndef TIME_ONLY_FORMATTER_H
#define TIME_ONLY_FORMATTER_H

#include <string>
#include "DateFormatter.h"

class Date;

class TimeOnlyFormatter : public DateFormatter
{
  const std::string toString(const Date* date) const;
};

#endif
