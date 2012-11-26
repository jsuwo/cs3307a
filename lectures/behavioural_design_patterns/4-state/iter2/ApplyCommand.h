#ifndef APPLY_COMMAND_H
#define APPLY_COMMAND_H

#include "Command.h"
class LineOfCredit;

class ApplyCommand : public Command
{
  public:
    ApplyCommand(LineOfCredit*);
    void execute();

  private:
    LineOfCredit* _loc;
};

#endif

