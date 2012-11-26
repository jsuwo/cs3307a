#ifndef LINE_OF_CREDIT_H
#define LINE_OF_CREDIT_H

#include <string>

class LineOfCreditState;
class NewState;
class AppliedState;
class OpenState;
class CancelledState;

class LineOfCredit
{
  public:
    
    // Disadvantage of this particular implementation: we violate the OCP
    // every time we add/remove a state
    friend class NewState;
    friend class AppliedState;
    friend class OpenState;
    friend class CancelledState;
    
    LineOfCredit();
    
    const std::string state() const;
    float balanceOwing() const;
    float availableCredit() const;

    void apply(float amount);
    void approve();
    void withdraw(float amount);
    void makePayment(float amount);
    void cancel();

  private:
    LineOfCreditState* _state;
    float _availableCredit;
    float _balanceOwing;
};

#endif

