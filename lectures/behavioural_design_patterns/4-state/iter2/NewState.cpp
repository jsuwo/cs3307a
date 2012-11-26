#include "NewState.h"
#include "AppliedState.h"
#include "CancelledState.h"
#include "LineOfCredit.h"

using std::string;

NewState::NewState(LineOfCredit* loc) : LineOfCreditState(loc)
{ 
}

void NewState::apply(float amount)
{
  this->_loc->_state = new AppliedState(this->_loc);
  this->_loc->_availableCredit = amount;
}

void NewState::cancel()
{
  this->_loc->_state = new CancelledState;
}

const string NewState::name() const
{
  return "New";
}