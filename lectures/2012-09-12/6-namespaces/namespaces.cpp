#include <iostream>

using std::cout;
using std::endl;

namespace ascending
{

  void print_list(int n)
  {
    for (int i = 1; i <= n; ++i)
    {
      cout << i << endl;
    }

  }

}

namespace descending
{

  void print_list(int n)
  {
    for (int i = n; i > 0; --i)
    {
      cout << i << endl;
    }
  }

}


using ascending::print_list;

main() {
        print_list(4);
        cout << endl;
        descending::print_list(4);
}
