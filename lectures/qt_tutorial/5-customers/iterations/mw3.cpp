#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlError>
#include <QSortFilterProxyModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->btnUpdate, SIGNAL(clicked()), this, SLOT(updateCustomers()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateCustomers()
{
    qDebug() << "Update clicked" << endl;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("group1.cs3307.ca");
    db.setDatabaseName("group1");
    db.setUserName("group1_user");
    db.setPassword("AsHa9vg*3_El6oi");

    if (! db.open())
      qFatal("Failed to connect to database.  Check your hostname, username, password, and database name, and try again.");

    QSqlQuery query;
    query.prepare("SELECT first_name, email FROM users WHERE role = 'customer' LIMIT :max");
    query.bindValue(":max", this->ui->spnCount->value());

    if (query.exec())
    {
      QSqlQueryModel* model = new QSqlQueryModel();
      model->setQuery(query);

      QSortFilterProxyModel* sortFilter = new QSortFilterProxyModel(this);
      sortFilter->setSourceModel(model);
      sortFilter->sort(0);

      model->setHeaderData(0, Qt::Horizontal, "Name");
      model->setHeaderData(1, Qt::Horizontal, "Email Address");
 
      this->ui->tblCustomers->setModel(sortFilter);
    }
    else
      qFatal(query.lastError().text().toUtf8().constData());
}
