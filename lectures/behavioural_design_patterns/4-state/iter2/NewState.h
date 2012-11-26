#ifndef NEW_STATE_H
#define NEW_STATE_H

#include "LineOfCreditState.h"
class LineOfCredit;

class NewState : public LineOfCreditState
{
  public:
    NewState(LineOfCredit* loc);
    void apply(float amount);
    void cancel();
    const std::string name() const;
};

#endif
