#include <string>
#include "MenuItem.h"
#include "Command.h"

using std::string;

MenuItem::MenuItem(const string& desc, Command* command) : _description(desc), _command(command)
{
}

const string& MenuItem::description() const
{
  return this->_description;
}

void MenuItem::execute()
{
  this->_command->execute();
}
