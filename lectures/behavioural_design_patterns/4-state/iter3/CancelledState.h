#ifndef CANCELLED_STATE_H
#define CANCELLED_STATE_H

#include <string>
#include "LineOfCreditState.h"

class CancelledState : public LineOfCreditState
{
  public:
    CancelledState() : LineOfCreditState(NULL)
    {
    }

    const std::string name() const
    {
      return "Cancelled";
    }  
};

#endif
