/********************************************************************************
** Form generated from reading UI file 'fenetre2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE2_H
#define UI_FENETRE2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fenetre2
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *fenetre2)
    {
        if (fenetre2->objectName().isEmpty())
            fenetre2->setObjectName(QStringLiteral("fenetre2"));
        fenetre2->resize(265, 285);
        pushButton_3 = new QPushButton(fenetre2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 210, 151, 71));
        pushButton = new QPushButton(fenetre2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 50, 151, 61));
        pushButton_2 = new QPushButton(fenetre2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 120, 151, 81));

        retranslateUi(fenetre2);

        QMetaObject::connectSlotsByName(fenetre2);
    } // setupUi

    void retranslateUi(QDialog *fenetre2)
    {
        fenetre2->setWindowTitle(QApplication::translate("fenetre2", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("fenetre2", "Construire \303\251ducation", Q_NULLPTR));
        pushButton->setText(QApplication::translate("fenetre2", "Am\303\251nagement ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("fenetre2", "Estimation Prix ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fenetre2: public Ui_fenetre2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE2_H
