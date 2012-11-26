#include <iostream>
#include "Shipment.h"
#include "EnvelopeItem.h"
#include "BoxedItem.h"
#include "CratedItem.h"

using std::cout;
using std::endl;

main()
{
  Shipment* s = new Shipment();

  OrderItem* item1 = new EnvelopeItem();
  item1->setWeight(5);

  OrderItem* item2 = new BoxedItem();
  item2->setWeight(10);

  OrderItem* item3 = new CratedItem();
  item3->setWeight(7);

  s->addItem(item1);
  s->addItem(item2);
  s->addItem(item3);

  cout << "Shipping cost: $" << s->getShippingCost() << endl;
}
