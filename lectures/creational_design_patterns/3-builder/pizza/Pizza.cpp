#include <iomanip>
#include "Pizza.h"

using std::cout;
using std::endl;
using std::ostream;
using std::setfill;
using std::setw;
using std::string;
using std::vector;

void Pizza::setName(const string& name)
{
  this->_name = name;
}

void Pizza::setDough(const string& dough)
{
  this->_dough = dough;
}

void Pizza::setSauce(const string& sauce)
{
  this->_sauce = sauce;
}

void Pizza::addTopping(const string& topping)
{
  this->_toppings.push_back(topping);
}

ostream& operator<<(ostream& out, const Pizza& pizza)
{
  out << "Pizza: " << pizza._name << endl;
  out << setfill('=') << setw(80) << '=' << endl;
  out << "Dough: " << pizza._dough << endl;
  out << "Sauce: " << pizza._sauce << endl;
  out << "Toppings: " << endl;

  vector<string>::const_iterator it = pizza._toppings.begin();

  for (; it != pizza._toppings.end(); ++it)
  {
    out << "\t" << *it << endl;
  }
  
  return out;
}
