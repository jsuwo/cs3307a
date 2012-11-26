#ifndef LINE_OF_CREDIT_H
#define LINE_OF_CREDIT_H

#include <string>

class LineOfCreditState;

class LineOfCredit
{
  public:
    
    friend class LineOfCreditState;
    
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

