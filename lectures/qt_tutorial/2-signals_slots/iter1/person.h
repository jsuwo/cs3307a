#include <QObject>

#ifndef PERSON_H
#define PERSON_H

class Car;

class Person : public QObject
{
    Q_OBJECT

public:
    Person(const QString &name, QObject *parent = NULL);
    void setCar(Car* car);

public slots:
    void carGasLevelChanged(int percent);

private:
    QString _name;
    Car* _car;
};

#endif // PERSON_H
