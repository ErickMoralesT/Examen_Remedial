#ifndef EDITAR_H
#define EDITAR_H

#include <QDialog>

namespace Ui {
class Editar;
}

class Editar : public QDialog
{
    Q_OBJECT

public:
    explicit Editar(QWidget *parent = nullptr);
    ~Editar();

    double peso() const;
    double altura() const;
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Editar *ui;
};

#endif // EDITAR_H
