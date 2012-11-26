#include <string>
#include "HourlyEmployee.h"
#include "EmployeeVisitor.h"

using std::string;

HourlyEmployee::HourlyEmployee(const string& name, int hours, float hourlyWage) :
  Employee(name), _hours(hours), _wage(hourlyWage)
{
}

void HourlyEmployee::accept(EmployeeVisitor* visitor)
{
  visitor->visit(this);
}

int HourlyEmployee::hours() const
{
  return this->_hours;
}

float HourlyEmployee::hourlyWage() const
{
  return this->_wage;
}

