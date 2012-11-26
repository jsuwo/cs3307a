#include <iostream>
#include "Cook.h"
#include "Pizza.h"
#include "HawaiianPizzaBuilder.h"
#include "DeluxePizzaBuilder.h"

using std::cout;
using std::endl;

int main()
{
  Cook cook;
  cook.setPizzaBuilder(new HawaiianPizzaBuilder);
  cook.constructPizza();
  
  Pizza hawaiian = cook.getPizza();
  cout << hawaiian << endl;

  cook.setPizzaBuilder(new DeluxePizzaBuilder);
  cook.constructPizza();

  Pizza deluxe = cook.getPizza();
  cout << deluxe << endl;
}
