#ifndef ENVELOPE_ITEM_H
#define ENVELOPE_ITEM_H

#include "OrderItem.h"

class EnvelopeItem : public OrderItem
{
  public:
    float getShippingCost() const;
};

#endif

