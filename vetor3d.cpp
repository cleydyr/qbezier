#include "vetor3d.h"

Vetor3d::Vetor3d(double x, double y, double z) :
    xv(x), yv(y), zv(z) {}

Vetor3d::Vetor3d(const Vetor3d& v) :
    xv(v.xv), yv(v.yv), zv(v.zv) {}

Vetor3d Vetor3d::operator+(const Vetor3d& v) {
    return Vetor3d(xv + v.xv, yv + v.yv, zv + v.zv);
}

Vetor3d Vetor3d::operator-(const Vetor3d& v) {
    return Vetor3d(xv - v.xv, yv - v.yv, zv - v.zv);
}

Vetor3d Vetor3d::operator*(const double& k) {
    return Vetor3d(k*xv, k*yv, k*zv);
}

Vetor3d Vetor3d::operator+=(const Vetor3d& v) {
    this->xv += v.xv;
    this->yv += v.yv;
    this->zv += v.zv;
    return *this;
}

Vetor3d Vetor3d::operator-=(const Vetor3d& v) {
    this->xv -= v.xv;
    this->yv -= v.yv;
    this->zv -= v.zv;
    return *this;
}

Vetor3d Vetor3d::operator*=(const double& k) {
    this->xv *= k;
    this->yv *= k;
    this->zv *= k;
    return *this;
}

Vetor3d operator-(Ponto3d& a, Ponto3d& b) {
    return Vetor3d(a.x() - b.x(), a.y() - b.y(), a.z() - b.z());
}

Ponto3d Vetor3d::operator+(Ponto3d& p) {
    return Ponto3d(xv + p.x(), yv + p.y(), zv + p.z());
}


