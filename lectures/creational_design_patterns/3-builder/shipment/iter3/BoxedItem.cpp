#include "BoxedItem.h"

float BoxedItem::getShippingCost() const
{
  return 1.5 * this->_weight;
}
