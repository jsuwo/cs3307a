#ifndef INT_LIST_H
#define INT_LIST_H

#define MAX_CAPACITY 256

class IntList {

  public:
    IntList();
    ~IntList();

    void add(int value);
    int get(int index);

  private:
    int* _elements;
    int _nextIndex;
};

#endif

