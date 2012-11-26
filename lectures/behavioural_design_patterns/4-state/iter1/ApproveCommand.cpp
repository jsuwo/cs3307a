#include "ApproveCommand.h"
#include "LineOfCredit.h"

ApproveCommand::ApproveCommand(LineOfCredit* loc) : _loc(loc)
{
}

void ApproveCommand::execute()
{
  this->_loc->approve();
}

