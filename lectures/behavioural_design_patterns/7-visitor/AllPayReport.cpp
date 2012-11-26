#include <iomanip>
#include <iostream>
#include "AllPayReport.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using std::left;
using std::endl;
using std::ostream;
using std::setfill;
using std::setw;

AllPayReport::AllPayReport(ostream& out) : _out(out)
{
  this->_out << "Employee Pay Report" << endl << endl;

  this->_out << left << setw(20) << "Name";
  this->_out << left << setw(10) << "Salary";
  this->_out << left << setw(10) << "Wage" << endl;
  this->_out << setw(80) << setfill('=') << '=' << endl;
  this->_out << setfill(' ');
}

void AllPayReport::visit(HourlyEmployee* e)
{
  this->_out << setw(20) << e->name();
  this->_out << setw(10) << "n/a";
  this->_out << "$" << setw(9) << e->hourlyWage() << endl;
}

void AllPayReport::visit(SalariedEmployee* e)
{
  this->_out << setw(20) << e->name();
  this->_out << "$" << setw(9) << e->salary();
  this->_out << setw(10) << "n/a" << endl;
}

