/********************************************************************************
** Form generated from reading UI file 'education.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDUCATION_H
#define UI_EDUCATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_education
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;
    QLabel *label_2;

    void setupUi(QDialog *education)
    {
        if (education->objectName().isEmpty())
            education->setObjectName(QStringLiteral("education"));
        education->resize(525, 451);
        label = new QLabel(education);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 140, 91, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/t\303\251l\303\251chargement (1).jpg")));
        pushButton_2 = new QPushButton(education);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 280, 93, 28));
        pushButton = new QPushButton(education);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 280, 93, 28));
        buttonBox = new QDialogButtonBox(education);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(350, 70, 81, 91));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(education);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 140, 131, 91));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/res/t\303\251l\303\251chargement.jpg")));

        retranslateUi(education);

        QMetaObject::connectSlotsByName(education);
    } // setupUi

    void retranslateUi(QDialog *education)
    {
        education->setWindowTitle(QApplication::translate("education", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("education", "zone rurale", Q_NULLPTR));
        pushButton->setText(QApplication::translate("education", "zone urbaine", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class education: public Ui_education {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDUCATION_H
