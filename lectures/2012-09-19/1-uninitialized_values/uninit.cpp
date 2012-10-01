#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
  public:
    string _name;
};

main()
{
  int i;
  float f;
  double d;
  bool b;
  Person* p;

  cout << "int: " << i << endl;
  cout << "float: " << f << endl;
  cout << "double: " << d << endl;
  cout << "bool: " << b << endl;
  cout << "ptr: " << p->_name << endl;
}
