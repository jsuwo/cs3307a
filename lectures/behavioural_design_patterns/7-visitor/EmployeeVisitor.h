#ifndef EMPLOYEE_VISITOR_H
#define EMPLOYEE_VISITOR_H

class HourlyEmployee;
class SalariedEmployee;

class EmployeeVisitor
{
  public:
    virtual void visit(HourlyEmployee*) = 0;
    virtual void visit(SalariedEmployee*) = 0;
};

#endif
