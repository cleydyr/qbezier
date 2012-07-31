#ifndef CONTROLEST_H
#define CONTROLEST_H

#include <QWidget>

namespace Ui {
    class ControleST;
}

class ControleST : public QWidget
{
    Q_OBJECT

public:
    explicit ControleST(QWidget *parent = 0);
    ~ControleST();

signals:
    void valorAlterado(double s, double t);

private:
    Ui::ControleST *ui;
    qreal s;
    qreal t;

    int precisaoS;
    int precisaoT;

private slots:
    void valorSpinSAlterado(double valor);
    void valorSpinTAlterado(double valor);
    void setST(double s, double t);

public slots:
    void setaPrecisao(int ps, int pt);
};

#endif // CONTROLEST_H
