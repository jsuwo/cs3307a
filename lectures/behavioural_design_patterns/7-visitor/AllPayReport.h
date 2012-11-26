#ifndef ALL_PAY_REPORT_H
#define ALL_PAY_REPORT_H

class HourlyEmployee;
class SalariedEmployee;
#include <iostream>
#include "EmployeeVisitor.h"

class AllPayReport : public EmployeeVisitor
{
  public:
    AllPayReport(std::ostream&);
    virtual void visit(HourlyEmployee*);
    virtual void visit(SalariedEmployee*);

  private:
    std::ostream& _out;
};

#endif
