#include "stwidget.h"
#include "ui_stwidget.h"
#include <QMouseEvent>
#include <QPainter>
#include <iostream>

using namespace std;

#define myAbs(X) (((X) > 0) ? (X) : (-(X)))

STWidget::STWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::STWidget)
{
    ui->setupUi(this);

    s = height();
    t = 0;
}

STWidget::~STWidget()
{
    delete ui;
}

void STWidget::setS(double _s) {
    if (myAbs(s - _s) > 0.0001) {
	this->s = (int) (height()*(1 - _s));
	update();
    }
}

void STWidget::setT(double _t) {
    if (myAbs(t - _t) > 0.0001) {
	this->t = (int) width()*_t;
	update();
    }
}

void STWidget::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    //Bordas cor preta.
    painter.setPen(QColor(0, 0, 0));
    painter.drawLine(0, 0, 0, width()-1);
    painter.drawLine(height()-1, 0, height()-1, width()-1);
    painter.drawLine(0, 0, height()-1, 0);
    painter.drawLine(0, width()-1, height()-1, width()-1);

    painter.drawEllipse(QPoint(t, s), 2, 2);
    painter.setPen(QColor(150, 150, 150));
    painter.drawLine(0, s, width(), s);
    painter.drawLine(t, 0, t, height());
}

void STWidget::mousePressEvent(QMouseEvent *evento) {
    QPoint pos = evento->pos();
    QPoint centro = this->rect().center();
    if ((myAbs(centro.x() - pos.x()) <= width()/2) && (myAbs(centro.y() - pos.y()) <= height()/2)) {
	s = evento->pos().y();
	t = evento->pos().x();
	this->update(0, 0, width(), height());
    } else {
	if (pos.x() < 0){
	    t = 0;
	}
	if (pos.y() < 0) {
	    s = 0;
	}
	if (pos.x() > width()) {
	    t = width();
	}
	if (pos.y() > height()) {
	    s = height();
	}
    }
    emit mudouS(1-(s*1.0/width()));
    emit mudouT(t*1.0/height());
    update();
}

void STWidget::mouseMoveEvent(QMouseEvent *evento) {
    QPoint pos = evento->pos();
    QPoint centro = this->rect().center();
    if ((myAbs(centro.x() - pos.x()) < width()/2) && (myAbs(centro.y() - pos.y()) < height()/2)) {
	s = evento->pos().y();
	t = evento->pos().x();
    } else {
	t = (pos.x() < 0) ? 0 : (pos.x() >= width()) ? width() : pos.x();
	s = (pos.y() < 0) ? 0 : (pos.y() >= height()) ? height() : pos.y();
    }

    emit mudouS(1-(s*1.0/width()));
    emit mudouT(1.0*t/height());
    update();
}

