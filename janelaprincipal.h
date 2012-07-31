#ifndef JANELAPRINCIPAL_H
#define JANELAPRINCIPAL_H

#include <QMainWindow>
#include <QPoint>
#include "superficiebezier.h"

namespace Ui {
class JanelaPrincipal;
}

class JanelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit JanelaPrincipal(QWidget *parent = 0);
    ~JanelaPrincipal();

private:
    Ui::JanelaPrincipal *ui;
    SuperficieBezier* superficie;

    //Precisão com que é renderizada a malha/curva.
    int precisaoS;
    int precisaoT;

    //Parâmetros escolhidos para determinar um ponto na malha e sua derivada.
    double s;
    double t;

    //Índices do ponto escolhido para direcionar a câmera na visualização da malha.
    int i;
    int j;

    //Função para printar a malha e suas projeções.
    void renderVisao3D();
    void renderProjXY();
    void renderProjYZ();
    void renderProjZX();

    void fazConexoes();

public slots:
    void mudaPrecisaoS(int s);
    void mudaPrecisaoT(int t);

    void mudaParamS(double s);
    void mudaParamT(double t);

    void mudaIndiceI(int i);
    void mudaIndiceJ(int j);

    void setMN(int m, int n);

    void mudaPontoControle();
};

#endif // JANELAPRINCIPAL_H
