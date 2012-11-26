#include "LineOfCredit.h"

using std::string;

LineOfCredit::LineOfCredit()
{
  this->_state = NEW;
}

const string LineOfCredit::state() const
{
  switch (this->_state)
  {
    case NEW:
      return "New";
    case APPLIED:
      return "Applied";
    case OPEN:
      return "Open";
    case CANCELLED:
      return "Cancelled";
    default:
      return "Unknown";
  }
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
  if (this->_state == NEW)
  {
    this->_state = APPLIED;
    this->_availableCredit = amount;
  }
  else
    throw "Can't apply in the current state";
}

void LineOfCredit::approve()
{
  if (this->_state == APPLIED)
    this->_state = OPEN;
  else
    throw "Can't approve the line of credit in its current state";
}

void LineOfCredit::withdraw(float amount)
{
  if (this->_state != OPEN)
    throw "Can't withdraw from the line of credit in its current state";

  if (this->_balanceOwing + amount > this->_availableCredit)
    throw "Insufficient funds available";
  else
    this->_balanceOwing += amount;
}

void LineOfCredit::makePayment(float amount)
{
  if (this->_state == OPEN)
    this->_balanceOwing -= amount;
  else
    throw "Can't make a payment in the current state";
}

void LineOfCredit::cancel()
{
  switch (this->_state)
  {
    case NEW:
    case APPLIED:
      this->_state = CANCELLED;
      break;

    case OPEN:
      if (this->_balanceOwing > 0)
        throw "If only life worked that way.";
      else
        this->_state = CANCELLED;
      break;

    default:
      throw "Can't cancel the line of credit in the current state";
      break;
  }
}

