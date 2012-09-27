#include <iostream>
#include <string>
#include "IntList.h"
#include "StrList.h"

using std::cout;
using std::endl;
using std::string;

main()
{
  IntList intList;
  StrList strList;

  string s1 = "hello";
  string s2 = "world";

  strList.add(s1);
  strList.add(s2);

  intList.add(4);
  intList.add(3);

  cout << strList.get(0) << endl;
  cout << strList.get(1) << endl;

  cout << intList.get(0) << endl;
  cout << intList.get(1) << endl;
}
