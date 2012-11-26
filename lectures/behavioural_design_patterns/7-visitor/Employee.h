#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
class EmployeeVisitor;

class Employee
{
  public:
    Employee(const std::string& name) : _name(name) { }

    const std::string name() const
    {
      return this->_name;
    }

    virtual void accept(EmployeeVisitor*) = 0;

  protected:
    std::string _name;
};

#endif
