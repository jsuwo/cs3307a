#include <iostream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "HourlyPayReport.h"
#include "AllPayReport.h"
#include "SalariedEmployee.h"

using std::endl;
using std::cout;
using std::vector;

main()
{
  vector<Employee*> employees;

  employees.push_back(new HourlyEmployee("Joe User", 60, 25.75));
  employees.push_back(new HourlyEmployee("Jane Doe", 55, 31.25));
  employees.push_back(new SalariedEmployee("Bob Caygeon", 75000));
  employees.push_back(new SalariedEmployee("Eve Adams", 72000));

  HourlyPayReport rpt1(cout);

  for (vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) 
    (*it)->accept(&rpt1);   // why not call rpt1.visit(*it)? 

  cout << endl;

  AllPayReport rpt2(cout);

  for (vector<Employee*>::iterator it = employees.begin(); it != employees.end(); ++it) 
    (*it)->accept(&rpt2);            
}
