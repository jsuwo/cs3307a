#include "Shipment.h"

using std::vector;

float Shipment::getShippingCost()
{
  float cost;
  vector<const OrderItem*>::const_iterator it;

  for (it = this->_items.begin(); it != this->_items.end(); ++it)
    cost += (*it)->getShippingCost();

  return cost;
}

void Shipment::addItem(const OrderItem* item)
{
  this->_items.push_back(item);
}

