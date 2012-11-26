#include <iomanip>
#include <iostream>
#include <string>
#include "Manager.h"

using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::vector;

Manager::Manager(const string& name) : Employee(name)
{ 
}

void Manager::add(Employee* member)
{
  this->_subordinates.push_back(member);
}

void Manager::print(int indent)
{
  cout << setw(indent) << " " << "Manager: " << this->name() << endl;

  vector<Employee*>::iterator it;

  for (it = this->_subordinates.begin(); it != this->_subordinates.end(); ++it)
    (*it)->print(indent + 2);
}
