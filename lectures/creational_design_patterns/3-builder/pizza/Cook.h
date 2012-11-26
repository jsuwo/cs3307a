#ifndef COOK_H
#define COOK_H

#include "PizzaBuilder.h"
#include "Pizza.h"

// Director class

class Cook
{
  public:
    Cook();
    ~Cook();
 
    void setPizzaBuilder(PizzaBuilder* pizzaBuilder);
    const Pizza& getPizza();
    void constructPizza();
   
  private:
    PizzaBuilder* _pizzaBuilder;
};

#endif
