#include "person.h"
#include "car.h"
#include <QDebug>

Person::Person(const QString& name, QObject* parent) : QObject(parent), _name(name)
{
}

void Person::setCar(Car* car)
{
    this->_car = car;
    connect(car, SIGNAL(gasLevelChanged(int)), this, SLOT(carGasLevelChanged(int)));
}

void Person::carGasLevelChanged(int percent)
{
    if (percent < 25)
        qDebug() << this->_name << ": Uh oh, I better fill up my car soon.  The gas level is only" << percent << "%." << endl;
}
