#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::string;

main()
{
  map<string, int> grades;

  grades["Bob"] = 90;
  grades["Joe"] = 85;
  grades["Jen"] = 94;

  cout << "Bob's grade: " << grades["Bob"] << endl;
  cout << "Joe's grade: " << grades["Joe"] << endl;
  cout << "Jen's grade: " << grades["Jen"] << endl;
}
