#include "superficiebezier.h"
#include <QObject>
#include <cmath>
#include <iostream>

using namespace std;

SuperficieBezier::SuperficieBezier(int m, int n)
{
    this->m = m;
    this->n = n;

    //Pontos de controle padrão.
    for (int i = 0; i < m; i++) {
    	for (int j = 0; j < n; j++) {
    	    pontosDeControle[i][j] = Ponto3d(i*10.0, j*10.0, 0.0);
    	}
    }

    //Tringulo de pascal.
    for (int i = 0; i <= (m > n ? m : n); i++) {
	pascal[i][0] = 1LL;
	for (int j = 1; j <= i; j++) {
	    pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
	}
	pascal[i][i+1] = 0LL;
    }
}

int SuperficieBezier::getM() {
    return m;
}

int SuperficieBezier::getN() {
    return n;
}

Ponto3d SuperficieBezier::pBezier(double u, double v) {
    Ponto3d p;
    for (int i = 0; i < m; i++) {
	for (int j = 0; j < n; j++) {
	    p += pontosDeControle[i][j]*bernstein(u, m-1, i)*bernstein(v, n-1, j);
	}
    }
    return p;
}

void SuperficieBezier::setPControle(int i, int j, Ponto3d p) {
    if ((i < m) && (j < n)) {
	pontosDeControle[i][j] = p;
	emit alterouPontoControle();
    }
}

Vetor3d SuperficieBezier::parcialS(double s, double t) {
    Vetor3d parcial;

    for (int j = 0; j < n; j++) {
	for (int i = 0; i < m-1; i++) {
	    parcial += (pontosDeControle[i+1][j] - pontosDeControle[i][j])*(bernstein(s, m-2, i)*bernstein(t, n-1, j));
	}
    }

    return parcial*(m-1);
}

Vetor3d SuperficieBezier::parcialT(double s, double t) {
    Vetor3d parcial;

    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n-1; j++) {
	    parcial += (pontosDeControle[i][j+1] - pontosDeControle[i][j])*(bernstein(t, n-2, j)*bernstein(s, m-1, i));
	}
    }

    return parcial*(n-1);
}

double SuperficieBezier::bernstein(double x, int p, int q) {
    double qr = pascal[p][q]*myPow((1-x), p-q)*myPow(x, q);
    return qr;
}

Ponto3d SuperficieBezier::pControle(int i, int j) {
    return pontosDeControle[i][j];
}

double SuperficieBezier::myPow(double x, int n) {
    if (n == 0) {
	return 1;
    } else if (n%2 == 1) {
	double mp = myPow(x, (n-1)/2);
	return x * mp * mp;
    } else {
	double mp = myPow(x, n/2);
	return mp*mp;
    }
}
