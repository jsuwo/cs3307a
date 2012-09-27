#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

main()
{
  vector<string> v;

  v.push_back("hello");
  v.push_back("world");
  v.push_back("how");
  v.push_back("are");
  v.push_back("you?");

  for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
    cout << *it << endl;
}
