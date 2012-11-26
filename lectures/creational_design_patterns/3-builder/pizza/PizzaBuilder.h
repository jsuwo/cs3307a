#ifndef PIZZA_BUILDER_H
#define PIZZA_BUILDER_H

#include "Pizza.h"

// Abstract Builder

class PizzaBuilder
{
  public:

    const Pizza& pizza()
    {
      return _pizza;
    }
 
    virtual void buildName() = 0;
    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildToppings() = 0;
 
  protected:
    Pizza _pizza;
};
 
#endif
