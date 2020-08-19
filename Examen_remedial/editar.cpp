#include "editar.h"
#include "ui_editar.h"

Editar::Editar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editar)
{
    ui->setupUi(this);
}

Editar::~Editar()
{
    delete ui;
}

void Editar::on_buttonBox_accepted()
{
    accept();
}

void Editar::on_buttonBox_rejected()
{
    reject();
}


double Editar::peso() const{
    return ui->peso->value();
}
double Editar::altura() const{
    return ui->altura->value();
}
