#ifndef ARRAY_H
#define ARRAY_H

class IntArray
{
  public:
    IntArray(int size);
    ~IntArray();

    int& operator[](const int idx);
    int operator[](const int idx) const;
    int size() const;
  
  private:
    int* _values;
    int _size;
};

#endif
