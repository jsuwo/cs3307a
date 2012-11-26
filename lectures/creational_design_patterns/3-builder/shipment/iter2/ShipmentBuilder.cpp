#include "ShipmentBuilder.h"
#include "OrderItem.h"
#include "EnvelopeItem.h"
#include "BoxedItem.h"
#include "CratedItem.h"

void ShipmentBuilder::createShipment()
{
  this->_shipment = new Shipment();
}

Shipment* ShipmentBuilder::getShipment() const
{
  return this->_shipment;
}

void ShipmentBuilder::withEnvelopeItem(float weight) const
{
  OrderItem* item = new EnvelopeItem();
  item->setWeight(weight);
  this->_shipment->addItem(item);
}

void ShipmentBuilder::withBoxedItem(float weight) const
{
  OrderItem* item = new BoxedItem();
  item->setWeight(weight);
  this->_shipment->addItem(item);
}

void ShipmentBuilder::withCratedItem(float weight) const
{
  OrderItem* item = new CratedItem();
  item->setWeight(weight);
  this->_shipment->addItem(item);
}
  
