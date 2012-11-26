#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
  public:
    Employee(const std::string& name) : _name(name)
    {
    }

    virtual ~Employee()
    {
    }

    virtual void add(Employee* member)
    {
      // do nothing -- throw exception?
    }

    virtual void print(int indent = 0) = 0;

    virtual const std::string& name() const
    {
      return this->_name;
    }

  private:
    std::string _name;
};

#endif

