#include <iostream>

using std::cout;
using std::endl;
using std::hex;

typedef union
{
  int i;
  float f;
} num_t;

main()
{
  num_t num;

  num.f = 3.25;

  cout << "0x" << hex << num.i << endl;
  cout << num.f << endl << endl;

  num.i = 0x40490fd0;
  
  cout << "0x" << hex << num.i << endl;
  cout << num.f << endl;
}
