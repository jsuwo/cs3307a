#ifndef BOXED_ITEM_H
#define BOXED_ITEM_H

#include "OrderItem.h"

class BoxedItem : public OrderItem
{
  public:
    float getShippingCost() const;
};

#endif

