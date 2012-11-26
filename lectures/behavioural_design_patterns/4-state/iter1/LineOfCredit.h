#ifndef LINE_OF_CREDIT_H
#define LINE_OF_CREDIT_H

#include <string>

class LineOfCredit
{
  public:
    enum AccountState { NEW, APPLIED, OPEN, CANCELLED };

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
    AccountState _state;
    float _availableCredit;
    float _balanceOwing;
};

#endif

