#include "SpreadsheetCell.h"

void SpreadsheetCell::value(double val)
{
  this->_value = val;
  this->notify();
}

double SpreadsheetCell::value() const
{
  return this->_value;
}
  
