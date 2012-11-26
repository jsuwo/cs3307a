#ifndef SET_LIST_IMPL_H
#define SET_LIST_IMPL_H

#include <set>

template <class T>
class SetListImpl : public ListImpl<T>, private std::set<T>
{
  public:
    virtual void add(T value)
    {
      this->insert(value);
    }

    virtual bool remove(T value)
    {
      return (this->erase(value) > 0);
    }

    virtual bool contains(T value)
    {
      return (this->find(value) != this->end());
    }

    virtual T get(int idx)
    {
      std::set<int>::iterator it;
      int i;

      for (i = 0, it = this->begin(); i < idx; ++i, ++it)
        ;

      return *it;
    }

    virtual int size()
    {
      return std::set<int>::size();
    }
};

#endif
