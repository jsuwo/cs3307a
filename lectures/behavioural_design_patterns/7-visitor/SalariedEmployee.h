#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include <string>
#include "Employee.h"
class EmployeeVisitor;

class SalariedEmployee : public Employee
{
  public:
    SalariedEmployee(const std::string&, int);
    int salary() const;

    virtual void accept(EmployeeVisitor*);

  private:
    int _salary;
};

#endif
