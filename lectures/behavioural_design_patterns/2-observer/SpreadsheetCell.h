#ifndef SPREADSHEET_CELL_H
#define SPREADSHEET_CELL_H

#include "Subject.h"

class SpreadsheetCell : public Subject
{
  public:
    void value(double val);
    double value() const;
  
  private:
    double _value;
};

#endif

