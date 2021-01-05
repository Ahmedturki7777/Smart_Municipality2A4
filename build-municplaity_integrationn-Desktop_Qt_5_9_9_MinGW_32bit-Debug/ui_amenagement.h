/********************************************************************************
** Form generated from reading UI file 'amenagement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMENAGEMENT_H
#define UI_AMENAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_amenagement
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QLineEdit *lineEdit;

    void setupUi(QDialog *amenagement)
    {
        if (amenagement->objectName().isEmpty())
            amenagement->setObjectName(QStringLiteral("amenagement"));
        amenagement->resize(568, 497);
        buttonBox = new QDialogButtonBox(amenagement);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 70, 181, 281));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(amenagement);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(50, 150, 181, 31));
        lineEdit = new QLineEdit(amenagement);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 100, 191, 21));

        retranslateUi(amenagement);

        QMetaObject::connectSlotsByName(amenagement);
    } // setupUi

    void retranslateUi(QDialog *amenagement)
    {
        amenagement->setWindowTitle(QApplication::translate("amenagement", "Dialog", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("amenagement", "2015", Q_NULLPTR)
         << QApplication::translate("amenagement", "2014", Q_NULLPTR)
         << QApplication::translate("amenagement", "2013", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class amenagement: public Ui_amenagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMENAGEMENT_H
