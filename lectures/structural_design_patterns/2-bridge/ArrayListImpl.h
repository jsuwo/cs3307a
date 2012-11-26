#ifndef ARRAY_LIST_IMPL_H
#define ARRAY_LIST_IMPL_H

template <class T>
class ArrayListImpl : public ListImpl<T>
{
  public:
    ArrayListImpl()
    {
      this->_elements = new T[5];
      this->_capacity = 5;
      this->_nextIndex = 0;
    }

    virtual ~ArrayListImpl()
    {
      delete this->_elements;
    }

    virtual void add(T value)
    {
      if (_nextIndex == _capacity)
      {
        _capacity *= 2;
        T* newElements = new T[_capacity];

        for (int i = 0; i < _nextIndex; ++i)
          newElements[i] = _elements[i];

        delete _elements;
        _elements = newElements;
      }

      this->_elements[_nextIndex++] = value;
    }

    virtual bool remove(T value)
    {
      bool found = false;

      for (int i = 0; i < this->_nextIndex; ++i)
      {
        if (this->_elements[i] == value)
        {
          found = true;

          for (int j = i + 1; j < this->_nextIndex; ++j)
          {
            this->_elements[j - 1] = this->_elements[j];
          }

          i--;
          this->_nextIndex--;
        }
      }

      return found;
    }

    virtual bool contains(T value)
    {
      for (int i = 0; i < this->_nextIndex; ++i)
      {
        if (this->_elements[i] == value)
          return true;
      }

      return false;
    }

    virtual T get(int idx)
    {
      return this->_elements[idx];
    }

    virtual int size()
    {
      return this->_nextIndex;
    }

  private:
    T* _elements;
    int _nextIndex;
    int _capacity;
};

#endif
