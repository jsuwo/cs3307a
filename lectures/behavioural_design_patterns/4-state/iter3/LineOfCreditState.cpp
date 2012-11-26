#include "LineOfCreditState.h"
#include "LineOfCredit.h"

using std::string;

LineOfCreditState::LineOfCreditState(LineOfCredit* loc) : _loc(loc)
{
}

void LineOfCreditState::apply(float amount)
{
  throw "Cannot apply in the current state";
}

void LineOfCreditState::approve()
{
  throw "Cannot approve line of credit in the current state";
}

void LineOfCreditState::withdraw(float amount)
{
  throw "Cannot withdraw from line of credit in the current state";
}

void LineOfCreditState::makePayment(float amount)
{
  throw "Cannot make payment to line of credit in the current state";
}

void LineOfCreditState::cancel()
{
  throw "Cannot cancel line of credit in the current state";
}

const string LineOfCreditState::name() const
{
  return "Unknown";
}

void LineOfCreditState::transition(LineOfCreditState* target)
{
  this->_loc->_state = target;
}

void LineOfCreditState::setBalanceOwing(float amount)
{
  this->_loc->_balanceOwing = amount;
}

void LineOfCreditState::setAvailableCredit(float amount)
{
  this->_loc->_availableCredit = amount;
}
