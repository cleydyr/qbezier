/********************************************************************************
** Form generated from reading UI file 'dialogoinicialmn.ui'
**
** Created: Tue Jul 31 15:24:57 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOINICIALMN_H
#define UI_DIALOGOINICIALMN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogoInicialMN
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vlayout;
    QHBoxLayout *hlayout1;
    QLabel *labelInfo;
    QSpacerItem *hspacer1;
    QSpacerItem *vspacer12;
    QHBoxLayout *hlayout2;
    QLabel *label_m;
    QSpinBox *spinM;
    QLabel *label_n;
    QSpinBox *spinN;
    QSpacerItem *hspacer2;
    QSpacerItem *vspacer23;
    QHBoxLayout *hlayout3;
    QSpacerItem *hspacer3;
    QDialogButtonBox *buttonBox;
    QLabel *labelDica;

    void setupUi(QDialog *DialogoInicialMN)
    {
        if (DialogoInicialMN->objectName().isEmpty())
            DialogoInicialMN->setObjectName(QString::fromUtf8("DialogoInicialMN"));
        DialogoInicialMN->resize(406, 174);
        DialogoInicialMN->setSizeGripEnabled(false);
        layoutWidget = new QWidget(DialogoInicialMN);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 369, 108));
        vlayout = new QVBoxLayout(layoutWidget);
        vlayout->setObjectName(QString::fromUtf8("vlayout"));
        vlayout->setContentsMargins(0, 0, 0, 0);
        hlayout1 = new QHBoxLayout();
        hlayout1->setObjectName(QString::fromUtf8("hlayout1"));
        labelInfo = new QLabel(layoutWidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        hlayout1->addWidget(labelInfo);

        hspacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout1->addItem(hspacer1);


        vlayout->addLayout(hlayout1);

        vspacer12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vlayout->addItem(vspacer12);

        hlayout2 = new QHBoxLayout();
        hlayout2->setObjectName(QString::fromUtf8("hlayout2"));
        label_m = new QLabel(layoutWidget);
        label_m->setObjectName(QString::fromUtf8("label_m"));

        hlayout2->addWidget(label_m);

        spinM = new QSpinBox(layoutWidget);
        spinM->setObjectName(QString::fromUtf8("spinM"));
        spinM->setAccelerated(true);
        spinM->setMinimum(1);
        spinM->setMaximum(1024);

        hlayout2->addWidget(spinM);

        label_n = new QLabel(layoutWidget);
        label_n->setObjectName(QString::fromUtf8("label_n"));

        hlayout2->addWidget(label_n);

        spinN = new QSpinBox(layoutWidget);
        spinN->setObjectName(QString::fromUtf8("spinN"));
        spinN->setAccelerated(true);
        spinN->setMinimum(1);
        spinN->setMaximum(1024);

        hlayout2->addWidget(spinN);

        hspacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout2->addItem(hspacer2);


        vlayout->addLayout(hlayout2);

        vspacer23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vlayout->addItem(vspacer23);

        hlayout3 = new QHBoxLayout();
        hlayout3->setObjectName(QString::fromUtf8("hlayout3"));
        hspacer3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlayout3->addItem(hspacer3);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hlayout3->addWidget(buttonBox);


        vlayout->addLayout(hlayout3);

        labelDica = new QLabel(DialogoInicialMN);
        labelDica->setObjectName(QString::fromUtf8("labelDica"));
        labelDica->setGeometry(QRect(20, 140, 361, 16));
        labelDica->setTextFormat(Qt::RichText);

        retranslateUi(DialogoInicialMN);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogoInicialMN, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogoInicialMN, SLOT(reject()));
        QObject::connect(spinM, SIGNAL(valueChanged(int)), DialogoInicialMN, SLOT(setM(int)));
        QObject::connect(spinN, SIGNAL(valueChanged(int)), DialogoInicialMN, SLOT(setN(int)));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogoInicialMN, SLOT(update()));
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogoInicialMN, SLOT(concluiu()));

        QMetaObject::connectSlotsByName(DialogoInicialMN);
    } // setupUi

    void retranslateUi(QDialog *DialogoInicialMN)
    {
        DialogoInicialMN->setWindowTitle(QApplication::translate("DialogoInicialMN", "Aten\303\247\303\243o:", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QApplication::translate("DialogoInicialMN", "Defina as dimens\303\265es da malha de controle:", 0, QApplication::UnicodeUTF8));
        label_m->setText(QApplication::translate("DialogoInicialMN", "m", 0, QApplication::UnicodeUTF8));
        label_n->setText(QApplication::translate("DialogoInicialMN", "n", 0, QApplication::UnicodeUTF8));
        labelDica->setText(QApplication::translate("DialogoInicialMN", "<b>Dica</b>: use m ou n = 1 para trabalhar com curvas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogoInicialMN: public Ui_DialogoInicialMN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOINICIALMN_H
