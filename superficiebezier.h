#ifndef SUPERFICIEBEZIER_H
#define SUPERFICIEBEZIER_H

#include <QList>
#include <QObject>
#include <QPoint>

#include "ponto3d.h"
#include "vetor3d.h"

#define MAX_PONTOS (1<<10)

class SuperficieBezier : public QObject
{
    Q_OBJECT

public:
    SuperficieBezier(int m, int n);
    Ponto3d pBezier(double s, double t);

    Vetor3d parcialS(double s, double t);
    Vetor3d parcialT(double s, double t);

    Ponto3d pControle(int i, int j);
    void setPControle(int i, int j, Ponto3d p);
    int getM();
    int getN();

signals:
    void alterouPontoControle();

private:
    int m;
    int n;
    Ponto3d pontosDeControle[MAX_PONTOS][MAX_PONTOS];
    long long pascal[MAX_PONTOS][MAX_PONTOS];
    double bernstein(double x, int p, int q);
    double myPow(double v, int n);
    double delta(int i, int j);
};

#endif // SUPERFICIEBEZIER_H
