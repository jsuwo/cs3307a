#ifndef DELUXE_PIZZA_BUILDER_H
#define DELUXE_PIZZA_BUILDER_H

#include "PizzaBuilder.h"

class DeluxePizzaBuilder : public PizzaBuilder
{
  public:
    void buildName();
    void buildDough();   
    void buildSauce();
    void buildToppings();
};

#endif
