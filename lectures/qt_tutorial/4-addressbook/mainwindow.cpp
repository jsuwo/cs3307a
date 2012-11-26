#include "mainwindow.h"
#include "editdialog.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->btnAdd, SIGNAL(clicked()), this, SLOT(addItem()));
    connect(this->ui->btnDelete, SIGNAL(clicked()), this, SLOT(deleteItem()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addItem()
{
    qDebug() << "Add Item clicked" << endl;
    EditDialog dlg(this);

    if (dlg.exec() == QDialog::Accepted)
    {
        ui->lstAddresses->addItem(dlg.name() + " -- " + dlg.number());
    }
}

void MainWindow::deleteItem()
{
    qDebug() << "Delete Item clicked" << endl;
    delete ui->lstAddresses->currentItem();
}
