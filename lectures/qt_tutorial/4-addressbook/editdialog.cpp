#include "editdialog.h"
#include "ui_editdialog.h"

EditDialog::EditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditDialog)
{
    ui->setupUi(this);
}

EditDialog::~EditDialog()
{
    delete ui;
}

const QString EditDialog::name() const
{
    return this->ui->txtName->text();
}

const QString EditDialog::number() const
{
    return this->ui->txtNumber->text();
}
