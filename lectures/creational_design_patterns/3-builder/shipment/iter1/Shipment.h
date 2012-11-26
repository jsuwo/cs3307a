#ifndef SHIPMENT_H
#define SHIPMENT_H

#include <vector>
#include "OrderItem.h"

class Shipment
{
  public:
    float getShippingCost();
    void addItem(const OrderItem* item);

  private:
    std::vector<const OrderItem*> _items;
};

#endif

