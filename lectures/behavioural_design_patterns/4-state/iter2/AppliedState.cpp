#include "AppliedState.h"
#include "CancelledState.h"
#include "OpenState.h"
#include "LineOfCredit.h"

using std::string;

AppliedState::AppliedState(LineOfCredit* loc) : LineOfCreditState(loc)
{ 
}

void AppliedState::approve()
{
  this->_loc->_state = new OpenState(this->_loc);
}

void AppliedState::cancel()
{
  this->_loc->_state = new CancelledState;
}

const string AppliedState::name() const
{
  return "Applied";
}