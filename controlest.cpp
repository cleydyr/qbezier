#include "controlest.h"
#include "ui_controlest.h"

#include <iostream>

#define myAbs(X) (((X) > 0) ? (X) : -(X))

using namespace std;

ControleST::ControleST(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControleST)
{
    ui->setupUi(this);
    connect(ui->stWidget, SIGNAL(mudouST(double,double)), this, SLOT(setST(double,double)));
    connect(this, SIGNAL(valorAlterado(double,double)), ui->stWidget, SLOT(setST(double,double)));
}

ControleST::~ControleST()
{
    delete ui;
}

void ControleST::setST(double s, double t) {
    qreal tolerancia = 0.000001;
    if ((myAbs(this->s - s) > tolerancia) && (myAbs(this->t - t) > tolerancia)) {
	this->s = s;
	this->t = t;
	ui->spinS->setValue(s);
	ui->spinT->setValue(t);
	emit valorAlterado(s, t);
    }
}

void ControleST::valorSpinSAlterado(double valor) {
    emit valorAlterado(ui->spinS->value(), ui->spinT->value());
}

void ControleST::valorSpinTAlterado(double valor) {
    emit valorAlterado(ui->spinS->value(), ui->spinT->value());
}

void ControleST::setaPrecisao(int ps, int pt) {
    ui->spinS->setSingleStep(1.0/ps);
    ui->spinT->setSingleStep(1.0/pt);
    precisaoS = ps;
    precisaoT = pt;
}
