#include "widgetglsuperficie.h"
#include "QMouseEvent"
#include <GL/glu.h>

#include <iostream>

using namespace std;

#define myAbs(X) (((X) > 0) ? (X) : (-(X)))

#define LISTA_MALHA		    1
#define LISTA_SUPERFICIE	    2
#define LISTA_PONTOS_CONTROLE	    3
#define LISTA_DERIVADAS_PARCIAIS    4

WidgetGLSuperficie::WidgetGLSuperficie(QWidget* parent) :
    QGLWidget(parent)
{
    iLook = 0;
    jLook = 0;
    angulo = 45;
    rotX = 0.0;
    rotY = 0.0;
    rotZ = 0.0;
    s = 0.0;
    t = 0.0;
    primeiraExibicao = true;
}

WidgetGLSuperficie::~WidgetGLSuperficie()
{

}

void WidgetGLSuperficie::setBezier(SuperficieBezier* sup) {
    this->sup = sup;
    compilaSuperficie();
    compilaPontosControle();
    compilaMalha();
    compilaDerivadasParciais();
    update();
}

void WidgetGLSuperficie::mudouPontosControle() {
    compilaSuperficie();
    compilaMalha();
    compilaPontosControle();
    compilaDerivadasParciais();
    update();
}

void WidgetGLSuperficie::mudaPrecisaoS(int ps) {
    precisaoS = ps;
    if (this->isVisible()) {
	compilaSuperficie();
	update();
    }
}

void WidgetGLSuperficie::mudaPrecisaoT(int pt) {
    precisaoT = pt;
    if (this->isVisible()) {
	compilaSuperficie();
	update();
    }
}

void WidgetGLSuperficie::mudaParamS(double s) {
    if (myAbs(this->s - s) > 0.0001) {
	this->s = s;
	compilaDerivadasParciais();
	update();
    }
}

void WidgetGLSuperficie::mudaParamT(double t) {
    if (myAbs(this->t - t) > 0.0001) {
	this->t = t;
	compilaDerivadasParciais();
	update();
    }
}

void WidgetGLSuperficie::mudaI(int i) {
    if (this->iLook != i) {
	this->iLook = i;
	compilaPontosControle();
	update();
    }
}

void WidgetGLSuperficie::mudaJ(int j) {
    if (this->jLook != j) {
	this->jLook = j;
	compilaPontosControle();
	update();
    }
}

void WidgetGLSuperficie::compilaSuperficie() {
    //    makeCurrent();
//    glShadeModel(GL_FLAT);
    glNewList(LISTA_SUPERFICIE, GL_COMPILE);
    //    {
    glDisable(GL_LINE_STIPPLE);
    glColor3f(0.0, 1.0, 0.0);

    glBegin(GL_LINES);

    for (int i = 0; i <= precisaoS; i++) {
	//TODO: melhorar a eficiência.
	Ponto3d p = sup->pBezier(i*1.0/precisaoS, 0);
	for(int j = 0; j < precisaoT; j++) {
	    Ponto3d p_ = sup->pBezier(i*1.0/precisaoS, (j+1)*1.0/precisaoT);
	    glVertex3f(p.x(), p.y(), p.z());
	    glVertex3f(p_.x(), p_.y(), p_.z());
	    p = p_;
	}
    }

    for (int i = 0; i <= precisaoT; i++) {
	//TODO: melhorar a eficiência.
	Ponto3d p = sup->pBezier(0, i*1.0/precisaoT);
	for(int j = 0; j < precisaoS; j++) {
	    Ponto3d p_ = sup->pBezier((j+1)*1.0/precisaoS, i*1.0/precisaoT);
	    glVertex3f(p.x(), p.y(), p.z());
	    glVertex3f(p_.x(), p_.y(), p_.z());
	    p = p_;
	}
    }
    glEnd();
    glEndList();
}

void WidgetGLSuperficie::compilaMalha() {
    //    makeCurrent();
    glShadeModel(GL_FLAT);
    glNewList(LISTA_MALHA, GL_COMPILE);
    {
	glEnable (GL_LINE_STIPPLE);
	glLineStipple (1, 0x0101);   /*  dotted   */
	glBegin(GL_LINES);
	glColor3f(0.5, 0.5, 0.5);
	for (int i = 0; i < sup->getM(); ++i) {
	    for (int j = 0; j < sup->getN() - 1; ++j) {
		Ponto3d p1 = sup->pControle(i, j);
		Ponto3d p2 = sup->pControle(i, j+1);
		glVertex3f((GLfloat)p1.x(), (GLfloat)p1.y(), (GLfloat)p1.z());
		glVertex3f((GLfloat)p2.x(), (GLfloat)p2.y(), (GLfloat)p2.z());
	    }
	}
	for (int j = 0; j < sup->getN(); ++j) {
	    for (int i = 0; i < sup->getM() - 1; ++i) {
		Ponto3d p1 = sup->pControle(i, j);
		Ponto3d p2 = sup->pControle(i+1, j);
		glVertex3f((GLfloat)p1.x(), (GLfloat)p1.y(), (GLfloat)p1.z());
		glVertex3f((GLfloat)p2.x(), (GLfloat)p2.y(), (GLfloat)p2.z());
	    }
	}
	glEnd();
    } glEndList();
}

void WidgetGLSuperficie::compilaPontosControle() {
    //    makeCurrent();
    glShadeModel(GL_FLAT);
    glNewList(LISTA_PONTOS_CONTROLE, GL_COMPILE);
    {
	glPointSize(3.0);
	glColor3f(1.0, 0.0, 0.0);
	//Pontos de controle.
	glBegin(GL_POINTS);
	for (int i = 0; i < sup->getM(); ++i) {
	    for (int j = 0; j < sup->getN(); ++j) {
		Ponto3d p = sup->pControle(i, j);
		glVertex3f((GLfloat)p.x(), (GLfloat)p.y(), (GLfloat)p.z());
	    }
	}
	glEnd();

	Ponto3d centro = sup->pControle(iLook, jLook);

	//Ponto central.
	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(centro.x(), centro.y(), centro.z());
	glEnd();
    } glEndList();
}

void WidgetGLSuperficie::compilaDerivadasParciais() {
    glShadeModel(GL_FLAT);
    glNewList(LISTA_DERIVADAS_PARCIAIS, GL_COMPILE);

    glDisable(GL_LINE_STIPPLE);
    glPointSize(4.0);
    Ponto3d pd = sup->pBezier(s, t);

    glColor3f(0.3, .5, 1.0);
    {
	Vetor3d parcialS = sup->parcialS(s, t);
	Ponto3d extPS = parcialS + pd;
	glBegin(GL_LINES);
	glVertex3f(pd.x(), pd.y(), pd.z());
	glVertex3f(extPS.x(), extPS.y(), extPS.z());
	glEnd();
    }

    {
	glColor3f(0.7, .7, .0);
	Vetor3d parcialT = sup->parcialT(s, t);
	Ponto3d extPT = parcialT + pd;
	glBegin(GL_LINES);
	glVertex3f(pd.x(), pd.y(), pd.z());
	glVertex3f(extPT.x(), extPT.y(), extPT.z());
	glEnd();
    }
    glEndList();
}

void WidgetGLSuperficie::desenhaTudo() {
    glClearColor(0, 0, 0, 0);
    //    glPushAttrib(GL_ALL_ATTRIB_BITS);
    //Seta a câmera
    {
	//	glEnable(GL_DEPTH_TEST);
	//Limpa a tela.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Especifica sistema de coordenadas de projeção
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	// Inicializa sistema de coordenadas de projeção
	glLoadIdentity();
	// Especifica a projeção perspectiva
	gluPerspective(45, (GLfloat)width()/(GLfloat)height(), 0.1, 500);

	//    GLfloat x = (GLfloat)width()/(GLfloat)height();
	//    glFrustum(-x, +x, -1.0, +1.0, 4.0, 15.0);

	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();
	Ponto3d centro = sup->pControle(iLook, jLook);
	// Especifica posição do observador e do alvo
	gluLookAt(0.0, 0.0, angulo, centro.x(), centro.y(), centro.z(), 1.0, 0.0, 0.0);

	glTranslatef(centro.x(), centro.y(), centro.z());
	glRotatef(rotX, 1.0, 0.0, 0.0);
	glRotatef(rotY, 0.0, 1.0, 0.0);
	glRotatef(rotZ, 0.0, 0.0, 1.0);
	glTranslatef(-centro.x(), -centro.y(), -centro.z());

    }
    glEnable(GL_MULTISAMPLE);

    glCallList(LISTA_SUPERFICIE);
    glCallList(LISTA_MALHA);
    glCallList(LISTA_PONTOS_CONTROLE);
    glCallList(LISTA_DERIVADAS_PARCIAIS);

    setFont(QFont("Arial", 8));
    qglColor(QColor(160, 160, 160));
    for (int i = 0; i < sup->getM(); i++) {
	for (int j = 0; j < sup->getN(); j++) {
	    Ponto3d p = sup->pControle(i, j);
	    renderText(p.x(), p.y(), p.z(), "b(" + QString::number(i) + ", " + QString::number(j) + ")");
	}
    }
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
}

void WidgetGLSuperficie::paintEvent(QPaintEvent*) {
    if (primeiraExibicao) {
	primeiraExibicao = false;
	compilaSuperficie();
	compilaMalha();
	compilaPontosControle();
	compilaDerivadasParciais();
    }
    desenhaTudo();
    swapBuffers();
}


void WidgetGLSuperficie::mousePressEvent(QMouseEvent * evento) {
    ultimaPos = evento->pos();
    update();
}

void WidgetGLSuperficie::mouseMoveEvent(QMouseEvent * evento) {
    GLfloat dx = (GLfloat) (evento->x() - ultimaPos.x()) / width();
    GLfloat dy = (GLfloat) (evento->y() - ultimaPos.y()) / height();

    if (evento->buttons() & Qt::LeftButton) {
	rotX += 180 * dx;
	rotY -= 180 * dy;
	update();
    } else if (evento->buttons() & Qt::RightButton) {
	rotX += 180 * dy;
	rotZ += 180 * dx;
	update();
    }
    ultimaPos = evento->pos();
}

void WidgetGLSuperficie::wheelEvent(QWheelEvent *evento) {
    angulo += evento->delta()*.01;
    update();
}
