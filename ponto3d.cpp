#include "ponto3d.h"

Ponto3d::Ponto3d(double x, double y, double z) :
    xp(x), yp(y), zp(z) {}

Ponto3d::Ponto3d(const Ponto3d& p) :
    xp(p.xp), yp(p.yp), zp(p.zp) {}

double Ponto3d::x() {
    return xp;
}

double Ponto3d::y() {
    return yp;
}

double Ponto3d::z() {
    return zp;
}

Ponto3d Ponto3d::operator +(const Ponto3d& a) {
    return Ponto3d(xp+a.xp, yp+a.yp, zp+a.zp);
}

Ponto3d Ponto3d::operator *(double k) {
    return Ponto3d(xp*k, yp*k, zp*k);
}

void Ponto3d::operator +=(const Ponto3d& a) {
    this->xp += a.xp;
    this->yp += a.yp;
    this->zp += a.zp;
}

void Ponto3d::operator *=(double k) {
    this->xp *= k;
    this->yp *= k;
    this->zp *= k;
}

Vetor3d Ponto3d::operator-(Ponto3d& p) {
    return Vetor3d(x() - p.x(), y() - p.y(), z() - p.z());
}

void Ponto3d::setX(double x) {
    this->xp = x;
}

void Ponto3d::setY(double y) {
    this->yp = y;
}

void Ponto3d::setZ(double z) {
    this->zp = z;
}

ostream& operator<<(ostream& os, Ponto3d& p) {
    os << "(" << p.x() << ", " << p.y() << ", " << p.z() << ")";
    return os;
}
