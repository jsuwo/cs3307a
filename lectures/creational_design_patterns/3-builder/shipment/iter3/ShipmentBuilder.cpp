#include "ShipmentBuilder.h"
#include "OrderItem.h"
#include "EnvelopeItem.h"
#include "BoxedItem.h"
#include "CratedItem.h"

ShipmentBuilder& ShipmentBuilder::createShipment()
{
  this->_shipment = new Shipment();
  return *this;
}

Shipment* ShipmentBuilder::getShipment() const
{
  return this->_shipment;
}

const ShipmentBuilder& ShipmentBuilder::withEnvelopeItem(float weight) const
{
  OrderItem* item = new EnvelopeItem();
  item->setWeight(weight);
  this->_shipment->addItem(item);
  
  return *this;
}

const ShipmentBuilder& ShipmentBuilder::withBoxedItem(float weight) const
{
  OrderItem* item = new BoxedItem();
  item->setWeight(weight);
  this->_shipment->addItem(item);

  return *this;
}

const ShipmentBuilder& ShipmentBuilder::withCratedItem(float weight) const
{
  OrderItem* item = new CratedItem();
  item->setWeight(weight);
  this->_shipment->addItem(item);

  return *this;
}
  
