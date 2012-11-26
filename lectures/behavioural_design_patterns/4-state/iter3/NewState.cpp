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
  this->transition(new AppliedState(this->_loc));
  this->setAvailableCredit(amount);
}

void NewState::cancel()
{
  this->transition(new CancelledState);
}

const string NewState::name() const
{
  return "New";
}
