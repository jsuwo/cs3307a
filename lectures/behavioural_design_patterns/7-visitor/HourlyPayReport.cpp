#include <iomanip>
#include <iostream>
#include "HourlyPayReport.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using std::left;
using std::endl;
using std::ostream;
using std::setfill;
using std::setw;

HourlyPayReport::HourlyPayReport(ostream& out) : _out(out)
{
  this->_out << "Hourly Employee Pay Report" << endl << endl;

  this->_out << left << setw(20) << "Name";
  this->_out << left << setw(10) << "Hours";
  this->_out << left << setw(10) << "Wage";
  this->_out << "Pay" << endl;
  this->_out << setw(80) << setfill('=') << '=' << endl;
  this->_out << setfill(' ');
}

void HourlyPayReport::visit(HourlyEmployee* e)
{
  this->_out << setw(20) << e->name();
  this->_out << setw(10) << e->hours();
  this->_out << "$" << setw(9) << e->hourlyWage();
  this->_out << "$" << (e->hours() * e->hourlyWage()) << endl;
}

void HourlyPayReport::visit(SalariedEmployee* e)
{
  // Do nothing
}

