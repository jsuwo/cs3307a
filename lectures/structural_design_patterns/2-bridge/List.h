#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListImpl.h"

template <class T>
class List
{
  public:
    List(ListImpl<T>* impl) : _listImpl(impl)
    {
    }

    virtual ~List()
    {
      delete this->_listImpl;
    }

    virtual void add(T value)
    {
      this->_listImpl->add(value);
    }

    virtual bool remove(T value)
    {
      return this->_listImpl->remove(value);
    }

    virtual bool contains(T value)
    {
      return this->_listImpl->contains(value);
    }

    virtual T get(int idx)
    {
      return this->_listImpl->get(idx);
    }

    virtual int size()
    {
      return this->_listImpl->size();
    }

    virtual void print()
    {
      for (int i = 0; i < this->_listImpl->size(); ++i)
        std::cout << "[" << i << "]: " << this->_listImpl->get(i) << " ";

      std::cout << std::endl;
    }

  protected:
    ListImpl<T>* _listImpl;

};

#endif
