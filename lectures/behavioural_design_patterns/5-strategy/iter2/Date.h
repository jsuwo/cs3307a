#ifndef DATE_H
#define DATE_H

class DateFormatter;

class Date
{
  public:
    Date(int, int, int, int, int, int, DateFormatter*);

    void setFormatter(DateFormatter*);
    const std::string toString() const;

    int year() const;
    int month() const;
    int day() const;
    int hour() const;
    int minute() const;
    int second() const;

  private:
    int _year;
    int _month;
    int _day;
    int _hour;
    int _minute;
    int _second;
    DateFormatter* _formatter;
};

#endif
