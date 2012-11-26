#ifndef MENU_H
#define MENU_H

#include <vector>
#include "MenuItem.h"

class Menu
{
  public:

    virtual ~Menu();
    void add(MenuItem* item);
    MenuItem* getChoice();

  private:
    std::vector<MenuItem*> _items;

};

#endif

