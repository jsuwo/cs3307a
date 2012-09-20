#ifndef ARRAY_H
#define ARRAY_H

class IntArray
{
  public:
    IntArray(int size);
    IntArray(const IntArray& other);
    ~IntArray();

    IntArray& operator=(const IntArray& other);

    int& operator[](const int idx);
    int operator[](const int idx) const;
    int size() const;
  
  private:
    int* _values;
    int _size;
};

#endif
