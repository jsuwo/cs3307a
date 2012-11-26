#include "CratedItem.h"

float CratedItem::getShippingCost() const
{
  return 2.5 * this->_weight;
}
