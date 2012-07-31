#ifndef VETOR3D_H
#define VETOR3D_H

#include "ponto3d.h"

class Ponto3d;

class Vetor3d
{
public:
    Vetor3d(double x = 0.0, double y = 0.0, double z = 0.0);
    Vetor3d(const Vetor3d& v);

    Vetor3d operator+(const Vetor3d& v);
    Vetor3d operator-(const Vetor3d& v);
    Vetor3d operator*(const double& k);
    Vetor3d operator-();

    Vetor3d operator+=(const Vetor3d& v);
    Vetor3d operator-=(const Vetor3d& v);
    Vetor3d operator*=(const double& k);

    Ponto3d operator+(Ponto3d& p);

    double x();
    double y();
    double z();

private:
    double xv;
    double yv;
    double zv;
};

#endif // VETOR3D_H
