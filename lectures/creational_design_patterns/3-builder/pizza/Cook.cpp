#include "Cook.h"

Cook::Cook() : _pizzaBuilder(NULL)
{
}

Cook::~Cook()
{
  if (_pizzaBuilder)
    delete _pizzaBuilder;
}

void Cook::setPizzaBuilder(PizzaBuilder* pizzaBuilder)
{
  if (_pizzaBuilder)
    delete _pizzaBuilder;

    _pizzaBuilder = pizzaBuilder;
}

const Pizza& Cook::getPizza()
{
  return _pizzaBuilder->pizza();
}
    
void Cook::constructPizza()
{
  _pizzaBuilder->buildName();
  _pizzaBuilder->buildDough();
  _pizzaBuilder->buildSauce();
  _pizzaBuilder->buildToppings();
}
