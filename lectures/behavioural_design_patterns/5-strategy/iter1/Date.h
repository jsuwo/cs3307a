#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    enum DateFormat { DATE, TIME, DATETIME };

    Date(int, int, int, int, int, int);
    const std::string toString(DateFormat) const;

  private:
    int _year;
    int _month;
    int _day;
    int _hour;
    int _minute;
    int _second;
};

#endif
