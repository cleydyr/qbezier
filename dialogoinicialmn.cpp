#include "dialogoinicialmn.h"
#include "ui_dialogoinicialmn.h"
#include <iostream>
using namespace std;

DialogoInicialMN::DialogoInicialMN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogoInicialMN)
{
    ui->setupUi(this);
    m = 1;
    n = 1;
}

DialogoInicialMN::~DialogoInicialMN()
{
    delete ui;
}

void DialogoInicialMN::setM(int m) {
    this->m = m;
}

void DialogoInicialMN::setN(int n) {
    this->n = n;
}

void DialogoInicialMN::concluiu() {
    emit accept(m, n);
}

