#ifndef CANCEL_COMMAND_H
#define CANCEL_COMMAND_H

#include "Command.h"
class LineOfCredit;

class CancelCommand : public Command
{
  public:
    CancelCommand(LineOfCredit*);
    void execute();

  private:
    LineOfCredit* _loc;
};

#endif

