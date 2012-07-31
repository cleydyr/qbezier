#ifndef VISORTOWIDGET_H
#define VISORTOWIDGET_H

#include <QGLWidget>
#include "superficiebezier.h"

namespace Ui {
class VisOrtoWidget;
}

class VisOrtoWidget : public QWidget
{
    Q_OBJECT

public:
    enum Plano {XY, YZ, ZX};
    explicit VisOrtoWidget(QWidget *parent = 0);
    ~VisOrtoWidget();
    void setPlano(Plano pl);
    SuperficieBezier* sup;

signals:
    void alterouPontos();

public slots:
    void mudaPrecisaoS(int ps);
    void mudaPrecisaoT(int pt);

    void mudaParamS(double s);
    void mudaParamT(double t);

protected:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent *);
    void wheelEvent(QWheelEvent *);
    void paintEvent(QPaintEvent *);

private:
    Plano plano;
    double escala;

    double ta;
    double tb;

    QTransform transform;

    double precisaoS;
    double precisaoT;

    double s;
    double t;

    Ui::VisOrtoWidget *ui;

    QPointF ultimaPos;

    void draw();
    QPointF tLocal(Ponto3d p);
    Ponto3d tWidgetInv (QPointF pf);

    //Este QPoint NÃO guarda as coordenadas, mas os ÍNDICES do ponto de controle da malha sendo editado.
    QPoint controleEditado;
};

#endif // VISORTOWIDGET_H
