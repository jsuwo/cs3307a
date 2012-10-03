#include <iostream>

using std::cout;
using std::endl;

main()
{
  const int i = 4;
  const int& j = i;

  int& k = const_cast<int&>(j);

  cout << "Before change: " << endl << endl;

  cout << "Address of i: " << &i << endl;
  cout << "Address of j: " << &j << endl;
  cout << "Address of k: " << &k << endl << endl;

  cout << "i: " << i << endl;
  cout << "j: " << j << endl;
  cout << "k: " << k << endl << endl;

  k = 5;

  cout << "After change: " << endl << endl;

  cout << "Address of i: " << &i << endl;
  cout << "Address of j: " << &j << endl;
  cout << "Address of k: " << &k << endl << endl;

  cout << "i: " << i << endl;
  cout << "j: " << j << endl;
  cout << "k: " << k << endl << endl;

  cout << "wt...?" << endl;
}
