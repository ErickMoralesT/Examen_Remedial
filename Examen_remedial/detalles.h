#ifndef DETALLES_H
#define DETALLES_H

#include <QDialog>

namespace Ui {
class Detalles;
}

class Detalles : public QDialog
{
    Q_OBJECT

public:
    explicit Detalles(QWidget *parent = nullptr);
    ~Detalles();
protected:
    void paintEvent(QPaintEvent * e);

private:
    Ui::Detalles *ui;
};

#endif // DETALLES_H
