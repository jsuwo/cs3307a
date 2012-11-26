#ifndef HOURLY_PAY_REPORT_H
#define HOURLY_PAY_REPORT_H

class HourlyEmployee;
class SalariedEmployee;
#include <iostream>
#include "EmployeeVisitor.h"

class HourlyPayReport : public EmployeeVisitor
{
  public:
    HourlyPayReport(std::ostream&);
    virtual void visit(HourlyEmployee*);
    virtual void visit(SalariedEmployee*);

  private:
    std::ostream& _out;
};

#endif
