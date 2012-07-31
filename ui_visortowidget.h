/********************************************************************************
** Form generated from reading UI file 'visortowidget.ui'
**
** Created: Tue Jul 31 15:24:57 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISORTOWIDGET_H
#define UI_VISORTOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisOrtoWidget
{
public:

    void setupUi(QWidget *VisOrtoWidget)
    {
        if (VisOrtoWidget->objectName().isEmpty())
            VisOrtoWidget->setObjectName(QString::fromUtf8("VisOrtoWidget"));
        VisOrtoWidget->resize(400, 300);

        retranslateUi(VisOrtoWidget);

        QMetaObject::connectSlotsByName(VisOrtoWidget);
    } // setupUi

    void retranslateUi(QWidget *VisOrtoWidget)
    {
        VisOrtoWidget->setWindowTitle(QApplication::translate("VisOrtoWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisOrtoWidget: public Ui_VisOrtoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISORTOWIDGET_H
