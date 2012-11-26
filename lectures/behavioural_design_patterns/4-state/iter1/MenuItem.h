#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>
#include "Command.h"

class MenuItem
{
  public:

    MenuItem(const std::string& desc, Command* command);
    const std::string& description() const;
    void execute();
    
  private:
    std::string _description;
    Command* _command;

};

#endif

