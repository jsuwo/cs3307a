#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

Time::Time(int h, int m, int s)
{
  this->_h = h;
  this->_m = m;
  this->_s = s;
}

Time Time::operator+(const Time& rhs) 
{
  int s = this->seconds();
  int m = this->minutes();
  int h = this->hours();

  s += rhs.seconds();
  m += s / 60;
  s %= 60;
  m += rhs.minutes();
  h += m / 60;
  m %= 60;
  h += rhs.hours();

  return Time(h, m, s);
}

Time Time::operator+(const int seconds)
{
  return *this + Time(0, 0, seconds);
}

main() {
  Time t1(5,5,0);
  Time t2(7,5,10);

  // Add times t1 and t2 and print the result
  Time t3 = t1 + t2;

  cout << t3.hours() << endl;
  cout << t3.minutes() << endl;
  cout << t3.seconds() << endl;

  // Add 65 seconds to time t1 and print the result
  Time t4 = t1 + 65;

  cout << t4.hours() << endl;
  cout << t4.minutes() << endl;
  cout << t4.seconds() << endl;
}
