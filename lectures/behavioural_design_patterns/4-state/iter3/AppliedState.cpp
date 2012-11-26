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
  this->transition(new OpenState(this->_loc));
}

void AppliedState::cancel()
{
  this->transition(new CancelledState);
}

const string AppliedState::name() const
{
  return "Applied";
}
