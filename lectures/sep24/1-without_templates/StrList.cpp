#include "StrList.h"

using std::string;

StrList::StrList()
{
  this->_elements = new string[MAX_CAPACITY];
  this->_nextIndex = 0;
}

StrList::~StrList()
{
  delete [] this->_elements;
}

void StrList::add(string value)
{
  this->_elements[this->_nextIndex++] = value;
}

string StrList::get(int index)
{
  return this->_elements[index];
}
