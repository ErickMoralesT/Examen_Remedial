#include "principal.h"
#include "ui_principal.h"
#include "editar.h"
#include "detalles.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    QStringList tit;
    setWindowTitle("Cálculo IMC");
    ui->tableWidget->setColumnCount(2);
    tit << "Peso" << "Altura";
    ui->tableWidget->setHorizontalHeaderLabels(tit);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_editar_clicked()
{
    double peso, altura;
    int fila;
    Editar ed (this);
    ed.setWindowTitle("Nuevos Datos");
    ed.exec();
    peso = ed.peso();
    altura = ed.altura();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    fila = ui->tableWidget->rowCount()-1;
    ui->tableWidget->setItem(fila, PESO, new QTableWidgetItem(QString::number(peso)));
    ui->tableWidget->setItem(fila, ALTURA, new QTableWidgetItem(QString::number(altura)));
}

void Principal::on_detalles_clicked()
{
    int res;
    Detalles det(this);
    det.setWindowTitle("Detalles de IMC");
    res = det.exec();
    if (res == QDialog::Rejected)
        return;

}
