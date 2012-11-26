#include "EnvelopeItem.h"

float EnvelopeItem::getShippingCost() const
{
  return 0.5 * this->_weight;
}
