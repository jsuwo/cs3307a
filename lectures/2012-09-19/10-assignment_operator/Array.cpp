#include "Array.h"

IntArray::IntArray(int size) : _size(size)
{
  this->_values = new int[this->_size]; 
}

IntArray::IntArray(const IntArray& other) : _size(other.size())
{
  this->_values = new int[other.size()];

  for (int i = 0; i < this->_size; ++i)
  {
    this->_values[i] = other[i];
  }

}

IntArray& IntArray::operator=(const IntArray& other)
{
  if (this != &other)
  {
    int* temp = new int[other.size()];

    for (int i = 0; i < this->_size; ++i)
    {
      temp[i] = other[i];
    }

    delete [] this->_values;
    this->_values = temp;
  }

  return *this;
}

IntArray::~IntArray()
{
  delete [] this->_values;
}

int IntArray::operator[](const int idx) const
{
  return this->_values[idx];
}

int& IntArray::operator[](const int idx)
{
      return this->_values[idx];
}

int IntArray::size() const 
{
  return this->_size;
}

