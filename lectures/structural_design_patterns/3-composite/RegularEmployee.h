#ifndef REGULAR_EMPLOYEE_H
#define REGULAR_EMPLOYEE_H

#include <string>
#include "Employee.h"

class RegularEmployee : public Employee
{
  public:
    RegularEmployee(const std::string& name);
    void print(int indent);
};

#endif

