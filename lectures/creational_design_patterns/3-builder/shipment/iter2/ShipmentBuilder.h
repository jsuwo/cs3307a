#ifndef SHIPMENT_BUILDER_H
#define SHIPMENT_BUILDER_H

#include "Shipment.h"

class ShipmentBuilder
{
  public:
    void createShipment();
    Shipment* getShipment() const;
    void withEnvelopeItem(float weight) const;
    void withBoxedItem(float weight) const;
    void withCratedItem(float weight) const;
  
  private:
    Shipment* _shipment;
};

#endif

