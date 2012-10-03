#include <iostream>

using std::cout;
using std::endl;
using std::hex;

main()
{
  float* f = new float(3.25);
  int* i = reinterpret_cast<int*>(f);

  cout << "Address of f: " << f << endl;
  cout << "Address of i: " << i << endl;

  cout << "f: " << *f << endl;
  cout << "i: 0x" << hex << *i << endl;
}
