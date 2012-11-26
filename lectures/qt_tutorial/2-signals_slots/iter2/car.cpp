#include "car.h"

Car::Car(QObject* parent) : QObject(parent)
{
}

void Car::setGasLevel(int percent)
{
    this->_gasLevel = percent;
    emit gasLevelChanged(percent);
}
