#include "aplicacao.h"
#include "dialogoinicialmn.h"
#include "janelaprincipal.h"
#include <iostream>

using namespace std;

Aplicacao::Aplicacao(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    DialogoInicialMN dialogo;
//    dialogo.show();
    JanelaPrincipal janela;
    janela.show();
    cout << "ok" << endl;
}

void Aplicacao::criaSuperficie(int m, int n) {
    superficie = new SuperficieBezier(m, n);
}
