#ifndef LIST_H
#define LIST_H

#define MAX_CAPACITY 256

template <class T>
class List {

  public:
    List<T>()
    {
      this->_elements = new T[MAX_CAPACITY];
      this->_nextIndex = 0;
    }

    ~List<T>()
    {
      delete [] this->_elements;
    }

    void add(T value)
    {
      this->_elements[this->_nextIndex++] = value;
    }

    T get(int index)
    {
      return this->_elements[index];
    }

  private:
    T* _elements;
    int _nextIndex;
};

#endif

