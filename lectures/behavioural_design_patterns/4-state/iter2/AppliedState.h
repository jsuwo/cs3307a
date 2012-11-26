#ifndef APPLIED_STATE_H
#define APPLIED_STATE_H

#include <string>
#include "LineOfCreditState.h"
class LineOfCredit;

class AppliedState : public LineOfCreditState
{
  public:
    AppliedState(LineOfCredit* loc);
    void approve();
    void cancel();
    const std::string name() const;
};

#endif
