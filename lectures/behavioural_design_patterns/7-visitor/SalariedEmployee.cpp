#include <string>
#include "SalariedEmployee.h"
#include "EmployeeVisitor.h"

using std::string;

SalariedEmployee::SalariedEmployee(const string& name, int salary) :
  Employee(name), _salary(salary)
{
}

int SalariedEmployee::salary() const
{
  return this->_salary;
}

void SalariedEmployee::accept(EmployeeVisitor* visitor)
{
  visitor->visit(this);
}
