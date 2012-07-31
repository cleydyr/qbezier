#ifndef APLICACAO_H
#define APLICACAO_H

#include "superficiebezier.h"
#include <QApplication>

class Aplicacao
{
public:
    Aplicacao(int argc, char *argv[]);

private:
    SuperficieBezier* superficie;

private slots:
    void criaSuperficie(int m, int n);
};

#endif // APLICACAO_H
