#ifndef CAR_H
#define CAR_H

#include "car.h"
#include "person.h"

class Car : public QObject
{
    Q_OBJECT

public:
    Car(QObject* parent = NULL);

public slots:
    void setGasLevel(int percent);

signals:
    void gasLevelChanged(int percent);

private:
    float _gasLevel;
};

#endif // CAR_H
