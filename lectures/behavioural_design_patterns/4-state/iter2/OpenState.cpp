#include "OpenState.h"
#include "CancelledState.h"
#include "LineOfCredit.h"

using std::string;

OpenState::OpenState(LineOfCredit* loc) : LineOfCreditState(loc)
{
}

void OpenState::withdraw(float amount)
{
  if (this->_loc->_balanceOwing + amount > this->_loc->_availableCredit)
    throw "Insufficient funds available";
  else
    this->_loc->_balanceOwing += amount;
}
    
void OpenState::makePayment(float amount)
{
  this->_loc->_balanceOwing -= amount;
}

void OpenState::cancel()
{
  if (this->_loc->_balanceOwing > 0)
    throw "If only life worked that way.";
  else
    this->_loc->_state = new CancelledState;
}

const string OpenState::name() const
{
  return "Open";
}
