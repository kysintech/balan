/********************************************************************************
** Form generated from reading UI file 'balan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALAN_H
#define UI_BALAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_balanClass
{
public:

    void setupUi(QWidget *balanClass)
    {
        if (balanClass->objectName().isEmpty())
            balanClass->setObjectName(QStringLiteral("balanClass"));
        balanClass->resize(600, 400);

        retranslateUi(balanClass);

        QMetaObject::connectSlotsByName(balanClass);
    } // setupUi

    void retranslateUi(QWidget *balanClass)
    {
        balanClass->setWindowTitle(QApplication::translate("balanClass", "balan", 0));
    } // retranslateUi

};

namespace Ui {
    class balanClass: public Ui_balanClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALAN_H
