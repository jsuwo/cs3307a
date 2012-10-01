#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::istringstream;
using std::string;

main()
{
  string time = "5h22m";
  istringstream in_str(time);

  char ch;
  int hours;
  int minutes;

  in_str >> hours >> ch >> minutes;

  cout << hours << " hours and " << minutes << " minutes" << endl;
}
