#include <iostream>
#include "PayCommand.h"
#include "LineOfCredit.h"

using std::cin;
using std::cout;
using std::endl;

PayCommand::PayCommand(LineOfCredit* loc) : _loc(loc)
{
}

void PayCommand::execute()
{
  float amount = 0;

  while (amount <= 0)
  {
    cout << "Repayment amount: ";
    cin >> amount;

    if (amount <= 0)
      cout << endl << "Invalid amount, please try again." << endl << endl;
  }

  this->_loc->makePayment(amount);
}

