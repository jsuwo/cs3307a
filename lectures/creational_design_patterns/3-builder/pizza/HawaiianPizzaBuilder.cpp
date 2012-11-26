#include "HawaiianPizzaBuilder.h"

void HawaiianPizzaBuilder::buildName()
{
  _pizza.setName("Hawaiian");
}

void HawaiianPizzaBuilder::buildDough()
{
  _pizza.setDough("Regular");
}
    
void HawaiianPizzaBuilder::buildSauce()
{
  _pizza.setSauce("Mild");
}

void HawaiianPizzaBuilder::buildToppings()
{
  _pizza.addTopping("Ham");
  _pizza.addTopping("Pineapple");
}
