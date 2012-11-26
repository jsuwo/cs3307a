#include "OpenState.h"
#include "CancelledState.h"
#include "LineOfCredit.h"

using std::string;

OpenState::OpenState(LineOfCredit* loc) : LineOfCreditState(loc)
{
}

void OpenState::withdraw(float amount)
{
  float newBalance = this->_loc->balanceOwing() + amount;

  if (newBalance > this->_loc->availableCredit())
    throw "Insufficient funds available";
  else
    this->setBalanceOwing(newBalance);
}
    
void OpenState::makePayment(float amount)
{
  float newBalance = this->_loc->balanceOwing() - amount;
  this->setBalanceOwing(newBalance);
}

void OpenState::cancel()
{
  if (this->_loc->balanceOwing() > 0)
    throw "If only life worked that way.";
  else
    this->transition(new CancelledState);
}

const string OpenState::name() const
{
  return "Open";
}
