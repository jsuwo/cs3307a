#include "IntList.h"

IntList::IntList()
{
  this->_elements = new int[MAX_CAPACITY];
  this->_nextIndex = 0;
}

IntList::~IntList()
{
  delete [] this->_elements;
}

void IntList::add(int value)
{
  this->_elements[this->_nextIndex++] = value;
}

int IntList::get(int index)
{
  return this->_elements[index];
}
