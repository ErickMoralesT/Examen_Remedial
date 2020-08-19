#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private slots:
    void on_editar_clicked();

    void on_detalles_clicked();

private:
    Ui::Principal *ui;
    enum Columna
{
    PESO, ALTURA, MASA
};
};
#endif // PRINCIPAL_H
