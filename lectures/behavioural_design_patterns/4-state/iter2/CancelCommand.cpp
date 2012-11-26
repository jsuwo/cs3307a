#include "CancelCommand.h"
#include "LineOfCredit.h"

CancelCommand::CancelCommand(LineOfCredit* loc) : _loc(loc)
{
}

void CancelCommand::execute()
{
  this->_loc->cancel();
}

