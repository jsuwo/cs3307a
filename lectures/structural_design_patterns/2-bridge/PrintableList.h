#ifndef PRINTABLE_LIST_H
#define PRINTABLE_LIST_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include "List.h"

template <class T>
class PrintableList : public List<T>
{
  public:
    PrintableList(ListImpl<T>* impl) : List<T>(impl)
    {
    }

    virtual void print()
    {
      int borderLength = 0;
      std::ostringstream elements;

      for (int i = 0; i < this->_listImpl->size(); ++i)
      {
        std::ostringstream s;
        T value = this->_listImpl->get(i);

        s << value;
        borderLength += s.str().length() + 3;

        elements << "| " << value << " ";
      }

      borderLength++;
      std::cout << std::setw(borderLength) << std::setfill('-') << "-" << std::endl;
      std::cout << elements.str() << "|" << std::endl;
      std::cout << std::setw(borderLength) << std::setfill('-') << "-" << std::endl;
    }
};

#endif
