/********************************************************************************
** Form generated from reading UI file 'JanelaPrincipal.ui'
**
** Created: Tue Jul 31 15:24:57 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "stwidget.h"
#include "visortowidget.h"
#include "widgetglsuperficie.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QWidget *centralWidget;
    WidgetGLSuperficie *widgetVisaoPrincipal;
    QGroupBox *grupoOrtogonais;
    VisOrtoWidget *projXY;
    VisOrtoWidget *projYZ;
    VisOrtoWidget *projZX;
    STWidget *widgetControleST;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *grupoPrecisao;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelS;
    QSpinBox *spinPrecisaoS;
    QLabel *labelT;
    QSpinBox *spinPrecisaoT;
    QGroupBox *grupoControle;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelI;
    QSpinBox *spinI;
    QLabel *labelJ;
    QSpinBox *spinJ;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *labelParamS;
    QDoubleSpinBox *spinParamS;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelParamT;
    QDoubleSpinBox *spinParamT;

    void setupUi(QMainWindow *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->resize(1011, 673);
        centralWidget = new QWidget(JanelaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widgetVisaoPrincipal = new WidgetGLSuperficie(centralWidget);
        widgetVisaoPrincipal->setObjectName(QString::fromUtf8("widgetVisaoPrincipal"));
        widgetVisaoPrincipal->setGeometry(QRect(10, 10, 641, 491));
        grupoOrtogonais = new QGroupBox(centralWidget);
        grupoOrtogonais->setObjectName(QString::fromUtf8("grupoOrtogonais"));
        grupoOrtogonais->setGeometry(QRect(700, 10, 291, 661));
        projXY = new VisOrtoWidget(grupoOrtogonais);
        projXY->setObjectName(QString::fromUtf8("projXY"));
        projXY->setGeometry(QRect(0, 20, 291, 200));
        projYZ = new VisOrtoWidget(grupoOrtogonais);
        projYZ->setObjectName(QString::fromUtf8("projYZ"));
        projYZ->setGeometry(QRect(0, 230, 291, 200));
        projZX = new VisOrtoWidget(grupoOrtogonais);
        projZX->setObjectName(QString::fromUtf8("projZX"));
        projZX->setGeometry(QRect(0, 440, 291, 200));
        widgetControleST = new STWidget(centralWidget);
        widgetControleST->setObjectName(QString::fromUtf8("widgetControleST"));
        widgetControleST->setGeometry(QRect(360, 510, 161, 161));
        widgetControleST->setMaximumSize(QSize(161, 161));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 510, 341, 66));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        grupoPrecisao = new QGroupBox(layoutWidget);
        grupoPrecisao->setObjectName(QString::fromUtf8("grupoPrecisao"));
        gridLayout_2 = new QGridLayout(grupoPrecisao);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelS = new QLabel(grupoPrecisao);
        labelS->setObjectName(QString::fromUtf8("labelS"));

        horizontalLayout->addWidget(labelS);

        spinPrecisaoS = new QSpinBox(grupoPrecisao);
        spinPrecisaoS->setObjectName(QString::fromUtf8("spinPrecisaoS"));

        horizontalLayout->addWidget(spinPrecisaoS);

        labelT = new QLabel(grupoPrecisao);
        labelT->setObjectName(QString::fromUtf8("labelT"));

        horizontalLayout->addWidget(labelT);

        spinPrecisaoT = new QSpinBox(grupoPrecisao);
        spinPrecisaoT->setObjectName(QString::fromUtf8("spinPrecisaoT"));

        horizontalLayout->addWidget(spinPrecisaoT);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(grupoPrecisao);

        grupoControle = new QGroupBox(layoutWidget);
        grupoControle->setObjectName(QString::fromUtf8("grupoControle"));
        gridLayout = new QGridLayout(grupoControle);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelI = new QLabel(grupoControle);
        labelI->setObjectName(QString::fromUtf8("labelI"));

        horizontalLayout_2->addWidget(labelI);

        spinI = new QSpinBox(grupoControle);
        spinI->setObjectName(QString::fromUtf8("spinI"));

        horizontalLayout_2->addWidget(spinI);

        labelJ = new QLabel(grupoControle);
        labelJ->setObjectName(QString::fromUtf8("labelJ"));

        horizontalLayout_2->addWidget(labelJ);

        spinJ = new QSpinBox(grupoControle);
        spinJ->setObjectName(QString::fromUtf8("spinJ"));

        horizontalLayout_2->addWidget(spinJ);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(grupoControle);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(540, 540, 104, 100));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelParamS = new QLabel(groupBox);
        labelParamS->setObjectName(QString::fromUtf8("labelParamS"));

        gridLayout_3->addWidget(labelParamS, 0, 0, 1, 1);

        spinParamS = new QDoubleSpinBox(groupBox);
        spinParamS->setObjectName(QString::fromUtf8("spinParamS"));
        spinParamS->setMaximum(1);
        spinParamS->setSingleStep(0.01);

        gridLayout_3->addWidget(spinParamS, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelParamT = new QLabel(groupBox);
        labelParamT->setObjectName(QString::fromUtf8("labelParamT"));

        horizontalLayout_5->addWidget(labelParamT);

        spinParamT = new QDoubleSpinBox(groupBox);
        spinParamT->setObjectName(QString::fromUtf8("spinParamT"));
        spinParamT->setMaximum(1);
        spinParamT->setSingleStep(0.01);

        horizontalLayout_5->addWidget(spinParamT);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

        JanelaPrincipal->setCentralWidget(centralWidget);

        retranslateUi(JanelaPrincipal);
        QObject::connect(spinPrecisaoS, SIGNAL(valueChanged(int)), JanelaPrincipal, SLOT(mudaPrecisaoS(int)));
        QObject::connect(spinPrecisaoT, SIGNAL(valueChanged(int)), JanelaPrincipal, SLOT(mudaPrecisaoT(int)));

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QApplication::translate("JanelaPrincipal", "JanelaPrincipal", 0, QApplication::UnicodeUTF8));
        grupoOrtogonais->setTitle(QApplication::translate("JanelaPrincipal", "Proje\303\247\303\265es ortogonais", 0, QApplication::UnicodeUTF8));
        grupoPrecisao->setTitle(QApplication::translate("JanelaPrincipal", "Precis\303\243o", 0, QApplication::UnicodeUTF8));
        labelS->setText(QApplication::translate("JanelaPrincipal", "s", 0, QApplication::UnicodeUTF8));
        labelT->setText(QApplication::translate("JanelaPrincipal", "t", 0, QApplication::UnicodeUTF8));
        grupoControle->setTitle(QApplication::translate("JanelaPrincipal", "Pontos de controle", 0, QApplication::UnicodeUTF8));
        labelI->setText(QApplication::translate("JanelaPrincipal", "i", 0, QApplication::UnicodeUTF8));
        labelJ->setText(QApplication::translate("JanelaPrincipal", "j", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("JanelaPrincipal", "Par\303\242metros", 0, QApplication::UnicodeUTF8));
        labelParamS->setText(QApplication::translate("JanelaPrincipal", "s", 0, QApplication::UnicodeUTF8));
        labelParamT->setText(QApplication::translate("JanelaPrincipal", "t", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
