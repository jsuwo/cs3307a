#ifndef STR_LIST_H
#define STR_LIST_H

#define MAX_CAPACITY 256

#include <string>

class StrList {

  public:
    StrList();
    ~StrList();

    void add(std::string value);
    std::string get(int index);

  private:
    std::string* _elements;
    int _nextIndex;
};

#endif

