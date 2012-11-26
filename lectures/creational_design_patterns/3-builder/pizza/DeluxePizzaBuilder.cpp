#include "DeluxePizzaBuilder.h"

void DeluxePizzaBuilder::buildName()
{
  _pizza.setName("Deluxe");
}

void DeluxePizzaBuilder::buildDough()
{
  _pizza.setDough("Thick");
}
    
void DeluxePizzaBuilder::buildSauce()
{
  _pizza.setSauce("Mild");
}

void DeluxePizzaBuilder::buildToppings()
{
  _pizza.addTopping("Pepperoni");
  _pizza.addTopping("Mushrooms");
  _pizza.addTopping("Onions");
  _pizza.addTopping("Green Peppers");
}
