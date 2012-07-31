#include "janelaprincipal.h"
#include "ui_JanelaPrincipal.h"
#include "widgetglsuperficie.h"

#include <iostream>
#include "stwidget.h"

#define myAbs(X) (((X) > 0) ? (X) : (-(X)))

using namespace std;

JanelaPrincipal::JanelaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JanelaPrincipal)
{
    ui->setupUi(this);

    ui->projXY->setPlano(VisOrtoWidget::XY);
    ui->projYZ->setPlano(VisOrtoWidget::YZ);
    ui->projZX->setPlano(VisOrtoWidget::ZX);

    ui->widgetControleST->setGeometry(370, 510, 161, 161);

    fazConexoes();

    mudaPrecisaoS(10);
    mudaPrecisaoT(10);
}

void JanelaPrincipal::fazConexoes() {
    //OK
    connect(ui->spinParamS, SIGNAL(valueChanged(double)), ui->widgetControleST, SLOT(setS(double)));
    connect(ui->spinParamT, SIGNAL(valueChanged(double)), ui->widgetControleST, SLOT(setT(double)));

    connect(ui->widgetControleST, SIGNAL(mudouS(double)), ui->spinParamS, SLOT(setValue(double)));
    connect(ui->widgetControleST, SIGNAL(mudouT(double)), ui->spinParamT, SLOT(setValue(double)));

    //OK
    connect(ui->spinParamS, SIGNAL(valueChanged(double)), this, SLOT(mudaParamS(double)));
    connect(ui->spinParamT, SIGNAL(valueChanged(double)), this, SLOT(mudaParamT(double)));

    connect(ui->spinI, SIGNAL(valueChanged(int)), this, SLOT(mudaIndiceI(int)));
    connect(ui->spinJ, SIGNAL(valueChanged(int)), this, SLOT(mudaIndiceJ(int)));

    connect(ui->projXY, SIGNAL(alterouPontos()), this, SLOT(mudaPontoControle()));
    connect(ui->projXY, SIGNAL(alterouPontos()), ui->projYZ, SLOT(update()));
    connect(ui->projXY, SIGNAL(alterouPontos()), ui->projZX, SLOT(update()));

    connect(ui->projYZ, SIGNAL(alterouPontos()), this, SLOT(mudaPontoControle()));
    connect(ui->projYZ, SIGNAL(alterouPontos()), ui->projXY, SLOT(update()));
    connect(ui->projYZ, SIGNAL(alterouPontos()), ui->projZX, SLOT(update()));

    connect(ui->projZX, SIGNAL(alterouPontos()), this, SLOT(mudaPontoControle()));
    connect(ui->projZX, SIGNAL(alterouPontos()), ui->projXY, SLOT(update()));
    connect(ui->projZX, SIGNAL(alterouPontos()), ui->projYZ, SLOT(update()));
}

JanelaPrincipal::~JanelaPrincipal()
{
    delete ui;
}

void JanelaPrincipal::renderVisao3D() {

}

void JanelaPrincipal::renderProjXY() {

}

void JanelaPrincipal::renderProjYZ() {

}

void JanelaPrincipal::renderProjZX() {

}

void JanelaPrincipal::mudaPrecisaoS(int s) {
    this->precisaoS = s;
    ui->widgetVisaoPrincipal->mudaPrecisaoS(s);
    ui->projXY->mudaPrecisaoS(s);
    ui->projYZ->mudaPrecisaoS(s);
    ui->projZX->mudaPrecisaoS(s);
    if (ui->spinPrecisaoS->value() != s) {
	ui->spinPrecisaoS->setValue(s);
    }
}

void JanelaPrincipal::mudaPrecisaoT(int t) {
    this->precisaoT = t;
    ui->widgetVisaoPrincipal->mudaPrecisaoT(t);
    ui->projXY->mudaPrecisaoT(t);
    ui->projYZ->mudaPrecisaoT(t);
    ui->projZX->mudaPrecisaoT(t);
    if (ui->spinPrecisaoT->value() != t) {
	ui->spinPrecisaoT->setValue(t);
    }
}

void JanelaPrincipal::mudaParamS(double s){
    if (myAbs(this->s - s) > 0.0001) {
	this->s = s;
	ui->spinParamS->setValue(s);
	ui->widgetVisaoPrincipal->mudaParamS(s);
	ui->projXY->mudaParamS(s);
	ui->projYZ->mudaParamS(s);
	ui->projZX->mudaParamS(s);
    }
}

void JanelaPrincipal::mudaParamT(double t){
    if (myAbs(this->t - t) > 0.0001) {
	this->t = t;
	ui->spinParamT->setValue(t);
	ui->widgetVisaoPrincipal->mudaParamT(t);
	ui->projXY->mudaParamT(t);
	ui->projYZ->mudaParamT(t);
	ui->projZX->mudaParamT(t);
    }
}

void JanelaPrincipal::mudaIndiceI(int i){
    if (this->i != i) {
	this->i = i;
	ui->widgetVisaoPrincipal->mudaI(i);
    }
}

void JanelaPrincipal::mudaIndiceJ(int j){
    if (this->j != j) {
	this->j = j;
	ui->widgetVisaoPrincipal->mudaJ(j);
    }
}

void JanelaPrincipal::setMN(int m, int n) {
    superficie = new SuperficieBezier(m, n);
    ui->widgetVisaoPrincipal->setBezier(superficie);

    ui->projXY->sup = superficie;
    ui->projYZ->sup = superficie;
    ui->projZX->sup = superficie;

    ui->spinI->setMaximum(m-1);
    ui->spinJ->setMaximum(n-1);
    QString ss = "malha de bezier " + QString::number(m) + " x " + QString::number(n);
    setWindowTitle(ss);
}

void JanelaPrincipal::mudaPontoControle() {
    ui->widgetVisaoPrincipal->mudouPontosControle();
}
