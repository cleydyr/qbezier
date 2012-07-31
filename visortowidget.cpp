#include "visortowidget.h"
#include "ui_visortowidget.h"
#include <iostream>
#include <QMouseEvent>

using namespace std;

double myAbs(double x) {
    return (x > 0) ? x : -x;
}

VisOrtoWidget::VisOrtoWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VisOrtoWidget)
{
    ui->setupUi(this);
    escala = 2;
    ta = 0.0;
    tb = 0.0;
    s = 0.0;
    t = 0.0;
    //    setFormat(QGLFormat(QGL::DoubleBuffer | QGL::DepthBuffer));
}

void VisOrtoWidget::setPlano(Plano pl) {
    plano = pl;
}

VisOrtoWidget::~VisOrtoWidget()
{
    delete ui;
}

void VisOrtoWidget::mudaPrecisaoS(int ps) {
    precisaoS = ps;
    if (this->isVisible()) {
	update();
    }
}

void VisOrtoWidget::mudaPrecisaoT(int pt) {
    precisaoT = pt;
    if (this->isVisible()) {
	update();
    }
}

void VisOrtoWidget::mudaParamS(double s) {
    if (myAbs(this->s - s) > 0.0001) {
	this->s = s;
	update();
    }
}

void VisOrtoWidget::mudaParamT(double t) {
    if (myAbs(this->t - t) > 0.0001) {
	this->t = t;
	update();
    }
}

void VisOrtoWidget::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.fillRect(rect(), Qt::black);
    painter.setWindow(-width()/2, -height()/2, width(), height());

    transform = painter.transform();
    transform.translate(ta, tb);
    transform.scale(escala, escala);

    //Pinta pontos de controle
    {
	//Superfície
	painter.setPen(QPen(Qt::green));
	{
	    for (int i = 0; i <= precisaoS; i++) {
		//TODO: melhorar a eficiência.
		Ponto3d p = sup->pBezier(i*1.0/precisaoS, 0);
		for(int j = 0; j < precisaoT; j++) {
		    Ponto3d p_ = sup->pBezier(i*1.0/precisaoS, (j+1)*1.0/precisaoT);
		    painter.drawLine(tLocal(p), tLocal(p_));
		    p = p_;
		}
	    }

	    for (int i = 0; i <= precisaoT; i++) {
		//TODO: melhorar a eficiência.
		Ponto3d p = sup->pBezier(0, i*1.0/precisaoT);
		for(int j = 0; j < precisaoS; j++) {
		    Ponto3d p_ = sup->pBezier((j+1)*1.0/precisaoS, i*1.0/precisaoT);
		    painter.drawLine(tLocal(p), tLocal(p_));
		    p = p_;
		}
	    }
	}

	//Controle
	painter.setPen(QPen(QColor(160, 160, 160), 4));
	for (int i = 0; i < sup->getM(); i++) {
	    for (int j = 0; j < sup->getN(); j++) {
		Ponto3d p = sup->pControle(i, j);
		painter.drawPoint(tLocal(p));
		painter.setFont(QFont("Monospace", 8));
		painter.drawText(tLocal(p), "b(" + QString::number(i) + ", " + QString::number(j) + ")");
	    }
	}
    }
}

QPointF VisOrtoWidget::tLocal(Ponto3d p) {
    switch (plano) {
    case XY:
	return transform.map(QPointF(p.x(), -p.y()));
	break;
    case YZ:
	return transform.map(QPointF(p.y(), -p.z()));
	break;
    case ZX:
	return transform.map(QPointF(p.z(), -p.x()));
	break;
    default:
	return QPointF();
	break;
    }
}

//Dado um clique na tela, retorna a posição na cena (considera a translação e a escala do plano o viewport do widget).
Ponto3d VisOrtoWidget::tWidgetInv (QPointF pf) {
    switch (plano) {
    case XY:
	return Ponto3d((pf.x() - width()/2.0)/escala - (ta/escala), (((height()/2.0) - pf.y())/escala + (tb/escala)), 0);
	break;
    case YZ:
	return Ponto3d(0, (pf.x() - width()/2.0)/escala - (ta/escala), ((height()/2.0) - pf.y())/escala + (tb/escala));
	break;
    case ZX:
	return Ponto3d(((height()/2.0) - pf.y())/escala + (tb/escala), 0, (pf.x() - width()/2.0)/escala - (ta/escala));
	break;
    default:
	return Ponto3d();
	break;
    }
}

void VisOrtoWidget::mousePressEvent(QMouseEvent *event) {
    double tolerancia = 0.7;
    ultimaPos = event->posF();
    controleEditado = QPoint(-1, -1);
    bool proximo = false;   //true se estiver próximo de um ponto.
    int i = 0;
    while (i < sup->getM() && !proximo) {
	int j = 0;
	while (j < sup->getN() && !proximo) {
	    Ponto3d p = sup->pControle(i, j);
	    Ponto3d pWidget = tWidgetInv(ultimaPos);
	    switch (plano)
	    {
	    case XY:
		if (myAbs(p.x()- pWidget.x()) < tolerancia &&
			myAbs(p.y() - pWidget.y()) < tolerancia) {
		    controleEditado = QPoint(i, j);
		    proximo = true;
		}
		break;
	    case YZ:
		if (myAbs(p.y()- pWidget.y()) < tolerancia &&
			myAbs(p.z() - pWidget.z()) < tolerancia) {
		    controleEditado = QPoint(i, j);
		    proximo = true;
		}
		break;
	    case ZX:
		if (myAbs(p.z()- pWidget.z()) < tolerancia &&
			myAbs(p.x() - pWidget.x()) < tolerancia) {
		    controleEditado = QPoint(i, j);
		    proximo = true;
		}
		break;
	    default:
		break;
	    }
	    j++;
	}
	i++;
    }
    update();
}

void VisOrtoWidget::mouseMoveEvent(QMouseEvent *event) {
    if (controleEditado.x() != -1) {
	int i = controleEditado.x();
	int j = controleEditado.y();
	Ponto3d antigo = sup->pControle(i, j);
	Ponto3d alterado = tWidgetInv(event->posF());
	switch (plano) {
	case XY:
	    alterado.setZ(antigo.z());
	    break;
	case YZ:
	    alterado.setX(antigo.x());
	    break;
	case ZX:
	    alterado.setY(antigo.y());
	    break;
	default:
	    break;
	}
	sup->setPControle(i, j, alterado);
	emit alterouPontos();
    } else {
	double dx = (event->posF() - ultimaPos).x();
	double dy = (event->posF() - ultimaPos).y();

	ta += dx;
	tb += dy;

	ultimaPos = ultimaPos + QPointF(dx, dy) ;

    }
    update();
}

void VisOrtoWidget::mouseReleaseEvent(QMouseEvent *) {
    update();
}

void VisOrtoWidget::wheelEvent(QWheelEvent *evento) {
    escala += evento->delta()/360.0;
    escala = (escala > .00001) ? escala : .00001;
    update();
}
