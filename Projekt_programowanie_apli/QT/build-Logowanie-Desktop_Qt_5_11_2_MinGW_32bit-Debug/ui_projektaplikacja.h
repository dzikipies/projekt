/********************************************************************************
** Form generated from reading UI file 'projektaplikacja.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJEKTAPLIKACJA_H
#define UI_PROJEKTAPLIKACJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_projektaplikacja
{
public:

    void setupUi(QDialog *projektaplikacja)
    {
        if (projektaplikacja->objectName().isEmpty())
            projektaplikacja->setObjectName(QStringLiteral("projektaplikacja"));
        projektaplikacja->resize(400, 300);

        retranslateUi(projektaplikacja);

        QMetaObject::connectSlotsByName(projektaplikacja);
    } // setupUi

    void retranslateUi(QDialog *projektaplikacja)
    {
        projektaplikacja->setWindowTitle(QApplication::translate("projektaplikacja", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projektaplikacja: public Ui_projektaplikacja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTAPLIKACJA_H
