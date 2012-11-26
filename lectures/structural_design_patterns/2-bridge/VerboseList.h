#ifndef VERBOSE_LIST_H
#define VERBOSE_LIST_H

#include <iostream>
#include "ListImpl.h"

template <class T>
class VerboseList : public List<T>
{
  public:
    VerboseList(ListImpl<T>* impl) : List<T>(impl)
    {
    }

    virtual void add(T value)
    {
      std::cout << "Adding value " << value << std::endl;
      List<T>::add(value);
    }

    virtual bool remove(T value)
    {
      std::cout << "Removing value " << value << std::endl;
      return List<T>::remove(value);
    }

    virtual bool contains(T value)
    {
      std::cout << "Checking if list contains value " << value << std::endl;
      return List<T>::contains(value);
    }

    virtual T get(int idx)
    {
      std::cout << "Retrieving element at index " << idx << std::endl;
      return List<T>::get(idx);
    }

    virtual int size()
    {
      std::cout << "Retrieving list size" << std::endl;
      return List<T>::size();
    }

    virtual void print()
    {
      std::cout << "Printing list contents" << std::endl;
      List<T>::print();
    }
};

#endif
