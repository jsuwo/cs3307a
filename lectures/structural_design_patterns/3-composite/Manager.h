#ifndef MANAGER_H
#define MANAGER_H

#include <string>
#include <vector>

#include "Employee.h"

class Manager : public Employee
{
  public:
    Manager(const std::string& name);

    void add(Employee* member);
    void print(int indent);

  private:
    std::vector<Employee*> _subordinates;
};

#endif

