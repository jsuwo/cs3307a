#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H

#include <string>
#include "Employee.h"
class EmployeeVisitor;

class HourlyEmployee : public Employee
{
  public:
    HourlyEmployee(const std::string&, int, float);

    int hours() const;
    float hourlyWage() const;

    virtual void accept(EmployeeVisitor*);

  private:
    int _hours;
    float _wage;
};

#endif
