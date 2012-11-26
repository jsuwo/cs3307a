#ifndef CRATED_ITEM_H
#define CRATED_ITEM_H

#include "OrderItem.h"

class CratedItem : public OrderItem
{
  public:
    float getShippingCost() const;
};

#endif

