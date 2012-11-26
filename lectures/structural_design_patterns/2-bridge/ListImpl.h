#ifndef LIST_IMPL_H
#define LIST_IMPL_H

template <class T>
class ListImpl
{
  public:
    virtual ~ListImpl()
    {
    }

    virtual void add(T value) = 0;
    virtual bool remove(T value) = 0;
    virtual bool contains(T value) = 0;
    virtual T get(int idx) = 0;
    virtual int size() = 0;
};

#endif
