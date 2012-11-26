#ifndef HAWAIIAN_PIZZA_BUILDER_H
#define HAWAIIAN_PIZZA_BUILDER_H

#include "PizzaBuilder.h"

class HawaiianPizzaBuilder : public PizzaBuilder
{
  public:
    void buildName();
    void buildDough();
    void buildSauce();
    void buildToppings();
};

#endif
