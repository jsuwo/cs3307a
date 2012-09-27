#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::reverse;

main()
{
  int a[5] = { 1, 2, 3, 4, 5 };
  reverse(a, a + 5);

  for (int i = 0; i < 5; ++i)
    cout << "a[" << i << "] = " << a[i] << endl;
}
