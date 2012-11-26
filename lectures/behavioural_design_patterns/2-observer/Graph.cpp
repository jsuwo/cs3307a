#include <iostream>
#include "Graph.h"

using std::cout;
using std::endl;
using std::string;

Graph::Graph(const string& name) : _name(name)
{
}

void Graph::notify()
{
  cout << "Graph '" << this->_name << "' notified!" << endl;
}
