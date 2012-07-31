#include <QtGui/QApplication>
#include "janelaprincipal.h"
#include "dialogoinicialmn.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DialogoInicialMN dialogo;
    dialogo.show();
    JanelaPrincipal janela;

//    janela.show();
    QObject::connect(&dialogo, SIGNAL(reject()), &a, SLOT(quit()));
    QObject::connect(&dialogo, SIGNAL(accept(int, int)), &janela, SLOT(setMN(int, int)));
    QObject::connect(&dialogo, SIGNAL(accept(int, int)), &janela, SLOT(show()));
    QObject::connect(&dialogo, SIGNAL(accept(int, int)), &dialogo, SLOT(hide()));

    return a.exec();
}
