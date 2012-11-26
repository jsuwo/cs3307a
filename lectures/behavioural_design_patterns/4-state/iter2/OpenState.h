#ifndef OPEN_STATE_H
#define OPEN_STATE_H

#include <string>
#include "LineOfCreditState.h"
class LineOfCredit;

class OpenState : public LineOfCreditState
{
  public:
    OpenState(LineOfCredit* loc);
    
    void withdraw(float amount);
    void makePayment(float amount);
    void cancel();
    const std::string name() const;
};

#endif
