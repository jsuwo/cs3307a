#ifndef SHIPMENT_BUILDER_H
#define SHIPMENT_BUILDER_H

#include "Shipment.h"

class ShipmentBuilder
{
  public:
    ShipmentBuilder& createShipment();
    Shipment* getShipment() const;
    const ShipmentBuilder& withEnvelopeItem(float weight) const;
    const ShipmentBuilder& withBoxedItem(float weight) const;
    const ShipmentBuilder& withCratedItem(float weight) const;
  
  private:
    Shipment* _shipment;
};

#endif

