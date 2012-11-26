#include <iostream>
#include <vector>
#include "Menu.h"
#include "MenuItem.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

Menu::~Menu()
{
  vector<MenuItem*>::iterator it;

  for (it = this->_items.begin(); it != this->_items.end(); ++it)
    delete *it;

  this->_items.clear();
}

void Menu::add(MenuItem* item)
{
  this->_items.push_back(item);
}

MenuItem* Menu::getChoice()
{
  vector<MenuItem*>::iterator it;
  int choice;
  int i;

  while (true)
  {
    for (i = 1, it = this->_items.begin(); it != this->_items.end(); ++i, ++it)
      cout << "[" << i << "] " << (*it)->description() << endl;

    cout << endl << "Your Choice: ";
    cin >> choice;

    if ((choice < 1) || (choice > this->_items.size()))
      cout << endl << "Invalid choice, please try again." << endl << endl;
    else
    {
      this->_items[choice-1]->execute();
      return this->_items[choice-1];
    }
  }
}
