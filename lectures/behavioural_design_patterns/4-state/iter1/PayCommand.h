#ifndef PAY_COMMAND_H
#define PAY_COMMAND_H

#include "Command.h"
class LineOfCredit;

class PayCommand : public Command
{
  public:
    PayCommand(LineOfCredit*);
    void execute();

  private:
    LineOfCredit* _loc;
};

#endif

