#include <iostream>
#include "Date.h"
#include "DateOnlyFormatter.h"
#include "TimeOnlyFormatter.h"
#include "DateTimeFormatter.h"

using std::cout;
using std::endl;

main()
{
  Date d(2011, 11, 5, 9, 52, 0, new DateOnlyFormatter);
  cout << "Date     : " << d.toString() << endl;

  d.setFormatter(new TimeOnlyFormatter);
  cout << "Time     : " << d.toString() << endl;

  d.setFormatter(new DateTimeFormatter); 
  cout << "DateTime : " << d.toString() << endl;
}

