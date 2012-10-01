#include <iostream>
#include "Array.h"

using std::cout;
using std::endl;

main()
{
  IntArray a(4);

  a[0] = 4;
  a[1] = 3;
  a[2] = 2;
  a[3] = 1;

  IntArray b = a;

  a[0] = 99;

  cout << "a[0] = " << a[0] << endl;
  cout << "b[0] = " << b[0] << endl;
}
