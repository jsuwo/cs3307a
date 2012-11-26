#ifndef LINE_OF_CREDIT_STATE_H
#define LINE_OF_CREDIT_STATE_H

#include <string>

class LineOfCredit;

class LineOfCreditState
{
  public:
    LineOfCreditState(LineOfCredit*);
    virtual void apply(float);
    virtual void approve();
    virtual void withdraw(float);
    virtual void makePayment(float);
    virtual void cancel();
    virtual const std::string name() const;

  protected:
    LineOfCredit* _loc;
};
#endif
