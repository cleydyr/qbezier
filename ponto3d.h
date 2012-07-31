#ifndef PONTO3D_H
#define PONTO3D_H

#include <ostream>
#include <QPointF>

#include "vetor3d.h"

using namespace std;

class Vetor3d;

class Ponto3d
{
public:
    Ponto3d(double x = 0.0, double y = 0.0, double z = 0.0);
    Ponto3d(const Ponto3d& p);

    double x();
    double y();
    double z();

    Ponto3d operator+(const Ponto3d& a);
    Ponto3d operator*(double k);

    void operator +=(const Ponto3d& a);
    void operator *=(double k);

    Vetor3d operator-(Ponto3d& b);

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    friend ostream& operator<<(ostream&, Ponto3d&);

private:
    double xp;
    double yp;
    double zp;
};

#endif // PONTO3D_H
