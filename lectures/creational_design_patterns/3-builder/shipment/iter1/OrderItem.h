#ifndef ORDER_ITEM_H
#define ORDER_ITEM_H

class OrderItem
{
  public:
    void setWeight(float weight);
    virtual float getShippingCost() const = 0;

  protected:
    float _weight;
};

#endif

