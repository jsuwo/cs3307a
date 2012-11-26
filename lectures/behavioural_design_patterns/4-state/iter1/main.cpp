#include <iostream>
#include "ApplyCommand.h"
#include "ApproveCommand.h"
#include "CancelCommand.h"
#include "LineOfCredit.h"
#include "Menu.h"
#include "MenuItem.h"
#include "QuitCommand.h"
#include "PayCommand.h"
#include "WithdrawCommand.h"

using std::cout;
using std::endl;

main()
{
  Menu menu;
  LineOfCredit loc;

  menu.add(new MenuItem("Apply", new ApplyCommand(&loc)));
  menu.add(new MenuItem("Approve", new ApproveCommand(&loc)));
  menu.add(new MenuItem("Withdraw", new WithdrawCommand(&loc)));
  menu.add(new MenuItem("Make Payment", new PayCommand(&loc)));
  menu.add(new MenuItem("Cancel Account", new CancelCommand(&loc)));
  menu.add(new MenuItem("Quit", new QuitCommand()));

  while (true)
  {
    try
    {
      cout << endl << "Line of Credit" << endl;
      cout << "  State: " << loc.state() << endl;
      cout << "  Balance Owing: " << loc.balanceOwing() << endl;
      cout << "  Available Credit: " << loc.availableCredit() << endl << endl;

      menu.getChoice();
    }
    catch (const char* msg)
    {
      cout << endl << "Error: " << msg << endl;
    }
  }
}
