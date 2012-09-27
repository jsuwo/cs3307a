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

  map<string, int>::iterator it;

  it = grades.find("Bob");

  if (it != grades.end())
    cout << "Bob's grade is " << it->second << endl;
  else
    cout << "No grade recorded for Bob" << endl;

  it = grades.find("Alice");

  if (it != grades.end())
    cout << "Alice's grade is " << it->second << endl;
  else
    cout << "No grade recorded for Alice" << endl;
}
