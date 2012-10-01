#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::transform;

int op_double(int val)
{
  return val * 2;
}

int op_sum(int i, int j)
{
  return i + j;
}

main()
{
  int a[5] = { 1, 2, 3, 4, 5 };
  int b[5];
  int c[5];

  int* end = a + 5; // point one element past the end of the array

  transform(a, end, b, op_double);

  for (int i = 0; i < 5; ++i)
    cout << a[i] << " * 2 = " << b[i] << endl;

  transform(a, end, b, c, op_sum);

  for (int i = 0; i < 5; ++i)
    cout << a[i] << " + " << b[i] << " = " << c[i] << endl;
}
