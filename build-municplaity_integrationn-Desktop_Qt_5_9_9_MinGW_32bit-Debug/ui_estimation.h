/********************************************************************************
** Form generated from reading UI file 'estimation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTIMATION_H
#define UI_ESTIMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_estimation
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QDialog *estimation)
    {
        if (estimation->objectName().isEmpty())
            estimation->setObjectName(QStringLiteral("estimation"));
        estimation->resize(400, 300);
        buttonBox = new QDialogButtonBox(estimation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(estimation);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 40, 131, 22));
        label = new QLabel(estimation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 200, 200));

        retranslateUi(estimation);
        QObject::connect(buttonBox, SIGNAL(accepted()), estimation, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), estimation, SLOT(reject()));

        QMetaObject::connectSlotsByName(estimation);
    } // setupUi

    void retranslateUi(QDialog *estimation)
    {
        estimation->setWindowTitle(QApplication::translate("estimation", "Dialog", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("estimation", "apple watch", Q_NULLPTR)
         << QApplication::translate("estimation", "steve jobs", Q_NULLPTR)
         << QApplication::translate("estimation", "bently", Q_NULLPTR)
        );
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class estimation: public Ui_estimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTIMATION_H
