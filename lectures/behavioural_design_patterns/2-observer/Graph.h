#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include "Observer.h"

class Graph : public Observer
{
  public:
    Graph(const std::string& name);
    void notify();

  private:
    std::string _name;
};

#endif

