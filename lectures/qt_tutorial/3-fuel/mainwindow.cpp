#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../signals_slots/car.h"
#include "../signals_slots/person.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Car* car = new Car(this);
    Person* joe = new Person("Joe", this);
    joe->setCar(car);

    connect(this->ui->horizontalSlider, SIGNAL(valueChanged(int)), car, SLOT(setGasLevel(int)));
    connect(car, SIGNAL(gasLevelChanged(int)),this->ui->progressBar, SLOT(setValue(int)));

    this->ui->horizontalSlider->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
