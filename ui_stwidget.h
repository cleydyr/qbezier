/********************************************************************************
** Form generated from reading UI file 'stwidget.ui'
**
** Created: Tue Jul 31 15:24:57 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STWIDGET_H
#define UI_STWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STWidget
{
public:

    void setupUi(QWidget *STWidget)
    {
        if (STWidget->objectName().isEmpty())
            STWidget->setObjectName(QString::fromUtf8("STWidget"));
        STWidget->resize(161, 161);

        retranslateUi(STWidget);

        QMetaObject::connectSlotsByName(STWidget);
    } // setupUi

    void retranslateUi(QWidget *STWidget)
    {
        STWidget->setWindowTitle(QApplication::translate("STWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class STWidget: public Ui_STWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STWIDGET_H
