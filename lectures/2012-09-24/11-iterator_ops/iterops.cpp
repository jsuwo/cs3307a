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

  vector<string>::iterator it = v.begin();

  cout << "First word: " << *it << endl;

  cout << "First word length: " << (*it).length() << endl;
  cout << "First word length: " << it->length() << endl;
}
