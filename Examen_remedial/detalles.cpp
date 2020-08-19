#include "detalles.h"
#include "ui_detalles.h"
#include <QPainter>

Detalles::Detalles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detalles)
{
    ui->setupUi(this);
}

Detalles::~Detalles()
{
    delete ui;
}

void Detalles::paintEvent(QPaintEvent *e){
    QPainter painter (this);
    painter.drawPixmap(0, 0, 100, 100, QPixmap(":/tabla.jpg"));
    QWidget::paintEvent(e);
}
