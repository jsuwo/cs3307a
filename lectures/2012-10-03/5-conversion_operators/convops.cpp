#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

class SpreadsheetCell
{
  public:
    SpreadsheetCell(const string& cell, double value) : _cell(cell), _value(value)
    {
    }

    operator string() const
    {
      ostringstream ss;
      ss << _cell << " = " << _value;
      return ss.str();
    }

    operator int() const
    {
      return _value;
    }

  private:
    string _cell;
    double _value;

};

main()
{
  SpreadsheetCell cell("A1", 3.14);

  // implicit conversion
  string s = cell; 

  cout << "Cell as a string (implicit): " << s << endl;
  cout << "Cell as a string (explicit): "
       << static_cast<string>(cell) << endl;

  // implicit conversion
  int i = cell;

  cout << "Cell as an int (implicit): " << i << endl;
  cout << "Cell as an int (explicit): " 
       << static_cast<int>(cell) << endl;
}
