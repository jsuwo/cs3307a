#include "LineOfCredit.h"
#include "LineOfCreditState.h"
#include "NewState.h"

using std::string;

LineOfCredit::LineOfCredit()
{
  this->_state = new NewState(this);
}

const string LineOfCredit::state() const
{
  return this->_state->name();
}

float LineOfCredit::balanceOwing() const
{
  return this->_balanceOwing;
}

float LineOfCredit::availableCredit() const
{
  return this->_availableCredit;
}

void LineOfCredit::apply(float amount)
{
  this->_state->apply(amount);
}

void LineOfCredit::approve()
{
  this->_state->approve();
}

void LineOfCredit::withdraw(float amount)
{
  this->_state->withdraw(amount);
}

void LineOfCredit::makePayment(float amount)
{
  this->_state->makePayment(amount);
}

void LineOfCredit::cancel()
{
  this->_state->cancel();
}

