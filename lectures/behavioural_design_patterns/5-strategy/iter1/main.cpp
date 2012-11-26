#include <iostream>
#include "Date.h"

using std::cout;
using std::endl;

main()
{
  Date d(2011, 11, 5, 9, 52, 0);

  cout << "Date     : " << d.toString(Date::DATE) << endl;
  cout << "Time     : " << d.toString(Date::TIME) << endl;
  cout << "DateTime : " << d.toString(Date::DATETIME) << endl;
}

