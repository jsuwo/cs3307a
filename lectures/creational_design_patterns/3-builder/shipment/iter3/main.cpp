#include <iostream>
#include "ShipmentBuilder.h"

using std::cout;
using std::endl;

main()
{
  ShipmentBuilder builder;

  Shipment* shipment = builder.createShipment()
    .withEnvelopeItem(5)
    .withBoxedItem(10)
    .withCratedItem(7)
    .getShipment();

  cout << "Shipping cost: $" << shipment->getShippingCost() << endl;
}
