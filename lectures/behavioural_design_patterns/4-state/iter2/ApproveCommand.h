#ifndef APPROVE_COMMAND_H
#define APPROVE_COMMAND_H

#include "Command.h"
class LineOfCredit;

class ApproveCommand : public Command
{
  public:
    ApproveCommand(LineOfCredit*);
    void execute();

  private:
    LineOfCredit* _loc;
};

#endif

