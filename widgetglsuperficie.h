#ifndef WIDGETGLSUPERFICIE_H
#define WIDGETGLSUPERFICIE_H

#include <QGLWidget>

#include "superficiebezier.h"


class WidgetGLSuperficie : public QGLWidget
{
public:
    explicit WidgetGLSuperficie(QWidget* parent);
    ~WidgetGLSuperficie();
    int precisaoS;
    int precisaoT;
    void setBezier(SuperficieBezier* sup);

public slots:

    void mudaPrecisaoS(int ps);
    void mudaPrecisaoT(int pt);

    void mudaParamS(double s);
    void mudaParamT(double t);

    void mudaI(int i);
    void mudaJ(int j);

    void mudouPontosControle();

private:
    bool primeiraExibicao;

    SuperficieBezier* sup;

    double rotX;
    double rotY;
    double rotZ;

    void compilaSuperficie();
    void compilaMalha();
    void compilaPontosControle();
    void compilaDerivadasParciais();

    void desenhaTudo();
    void paintEvent(QPaintEvent *);

    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void wheelEvent(QWheelEvent *);

    int iLook;
    int jLook;

    double s;
    double t;

    double angulo;

    QPoint ultimaPos;
};

#endif // WIDGETGLSUPERFICIE_H
