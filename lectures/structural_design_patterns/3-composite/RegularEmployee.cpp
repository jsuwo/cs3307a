#include <iomanip>
#include <iostream>
#include <string>
#include "RegularEmployee.h"

using std::cout;
using std::endl;
using std::setw;
using std::string;

RegularEmployee::RegularEmployee(const string& name) : Employee(name)
{ 
}

void RegularEmployee::print(int indent)
{
  cout << setw(indent) << " " << "Employee: " << this->name() << endl;
}
