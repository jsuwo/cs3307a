#ifndef QUIT_COMMAND_H
#define QUIT_COMMAND_H

#include "Command.h"
class LineOfCredit;

class QuitCommand : public Command
{
  public:
    QuitCommand();
    void execute();
};

#endif

