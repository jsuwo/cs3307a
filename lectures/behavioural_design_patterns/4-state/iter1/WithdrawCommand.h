#ifndef WITHDRAW_COMMAND_H
#define WITHDRAW_COMMAND_H

#include "Command.h"
class LineOfCredit;

class WithdrawCommand : public Command
{
  public:
    WithdrawCommand(LineOfCredit*);
    void execute();

  private:
    LineOfCredit* _loc;
};

#endif

