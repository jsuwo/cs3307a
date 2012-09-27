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

  for (map<string, int>::iterator it = grades.begin(); it != grades.end(); ++it)
    cout << it->first << ": " << it->second << endl;
}
