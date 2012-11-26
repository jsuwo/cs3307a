#include <cstdlib>
#include "QuitCommand.h"

QuitCommand::QuitCommand()
{
}

void QuitCommand::execute()
{
  exit(EXIT_SUCCESS);
}

