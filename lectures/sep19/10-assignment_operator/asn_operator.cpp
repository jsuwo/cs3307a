#include <iostream>
#include "Array.h"

using std::cout;
using std::endl;

main()
{
  IntArray a(4);   // constructor
  IntArray b(4);   // constructor

  a[0] = 4;
  a[1] = 3;
  a[2] = 2;
  a[3] = 1;

  IntArray c = b;  // new object -> copy constructor

  c = a;           // existing object -> asn operator

  a[0] = 99;

  cout << "a[0] = " << a[0] << endl;
  cout << "c[0] = " << c[0] << endl;
}
