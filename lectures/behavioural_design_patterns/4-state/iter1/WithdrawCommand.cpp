#include <iostream>
#include "WithdrawCommand.h"
#include "LineOfCredit.h"

using std::cin;
using std::cout;
using std::endl;

WithdrawCommand::WithdrawCommand(LineOfCredit* loc) : _loc(loc)
{
}

void WithdrawCommand::execute()
{
  float amount = 0;

  while (amount <= 0)
  {
    cout << "Withdrawal amount: ";
    cin >> amount;

    if (amount <= 0)
      cout << endl << "Invalid amount, please try again." << endl << endl;
  }

  this->_loc->withdraw(amount);
}

