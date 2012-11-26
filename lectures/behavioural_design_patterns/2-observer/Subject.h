#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include "Observer.h"

class Subject
{
  public:
    void attach(Observer*);
    void detach(Observer*);

  protected:
    void notify();

  private:
    std::vector<Observer*> _observers;
};

#endif
