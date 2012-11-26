#include <iostream>
#include "ApplyCommand.h"
#include "LineOfCredit.h"

using std::cin;
using std::cout;
using std::endl;

ApplyCommand::ApplyCommand(LineOfCredit* loc) : _loc(loc)
{
}

void ApplyCommand::execute()
{
  float amount = 0;

  while (amount <= 0)
  {
    cout << "Amount to apply for: ";
    cin >> amount;

    if (amount <= 0)
      cout << endl << "Invalid amount, please try again." << endl << endl;
  }

  this->_loc->apply(amount);
}

