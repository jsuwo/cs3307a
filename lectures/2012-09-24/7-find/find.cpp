#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::find;

main()
{
  int a[5] = { 1, 2, 3, 4, 5 };
  int* end = a + 5; // point one element past the end of the array

  int* val = find(a, end, 4);

  if (val != end)
    cout << "Found value 4" << endl;
  else
    cout << "4 was not found" << endl;

  val = find(a, end, 99);

  if (val != end)
    cout << "Found value 99" << endl;
  else
    cout << "99 was not found" << endl;
}
