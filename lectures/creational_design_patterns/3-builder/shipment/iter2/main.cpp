#include <iostream>
#include "ShipmentBuilder.h"

using std::cout;
using std::endl;

main()
{
  ShipmentBuilder builder;

  builder.createShipment();
  builder.withEnvelopeItem(5);
  builder.withBoxedItem(10);
  builder.withCratedItem(7);

  cout << "Shipping cost: $" << builder.getShipment()->getShippingCost() << endl;
}
