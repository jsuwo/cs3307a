#include <algorithm>;
#include "Subject.h"

using std::find;
using std::vector;

void Subject::attach(Observer* o)
{
  if (find(_observers.begin(), _observers.end(), o) == _observers.end())
    this->_observers.push_back(o);
}

void Subject::detach(Observer* o)
{
  vector<Observer*>::iterator it;

  it = find(_observers.begin(), _observers.end(), o);

  if (it != _observers.end())
    _observers.erase(it);
}

void Subject::notify()
{
  vector<Observer*>::iterator it;

  for (it = _observers.begin(); it != _observers.end(); ++it)
    (*it)->notify();
}
