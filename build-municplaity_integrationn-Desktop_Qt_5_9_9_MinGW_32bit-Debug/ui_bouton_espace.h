/********************************************************************************
** Form generated from reading UI file 'bouton_espace.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTON_ESPACE_H
#define UI_BOUTON_ESPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bouton_espace
{
public:
    QTabWidget *tabWidget;
    QWidget *widget;
    QPushButton *ajouter;
    QPushButton *modifier;
    QPushButton *supprimer;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_adresse;
    QDoubleSpinBox *doubleSpinBox_superficie;
    QTableView *tableau;
    QLabel *label_nom;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *bouton_espace)
    {
        if (bouton_espace->objectName().isEmpty())
            bouton_espace->setObjectName(QStringLiteral("bouton_espace"));
        bouton_espace->resize(664, 401);
        tabWidget = new QTabWidget(bouton_espace);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 651, 391));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        ajouter = new QPushButton(widget);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(30, 20, 93, 28));
        ajouter->setStyleSheet(QStringLiteral("color:red;"));
        modifier = new QPushButton(widget);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(30, 80, 93, 28));
        modifier->setStyleSheet(QStringLiteral("color:red;"));
        supprimer = new QPushButton(widget);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(30, 140, 93, 28));
        supprimer->setStyleSheet(QStringLiteral("color:red;"));
        lineEdit_nom = new QLineEdit(widget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(160, 50, 113, 22));
        lineEdit_adresse = new QLineEdit(widget);
        lineEdit_adresse->setObjectName(QStringLiteral("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(160, 110, 113, 22));
        doubleSpinBox_superficie = new QDoubleSpinBox(widget);
        doubleSpinBox_superficie->setObjectName(QStringLiteral("doubleSpinBox_superficie"));
        doubleSpinBox_superficie->setGeometry(QRect(160, 200, 62, 22));
        tableau = new QTableView(widget);
        tableau->setObjectName(QStringLiteral("tableau"));
        tableau->setGeometry(QRect(280, 160, 321, 201));
        label_nom = new QLabel(widget);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(170, 20, 55, 16));
        label_nom->setStyleSheet(QStringLiteral("color:orange;"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 80, 91, 21));
        label->setStyleSheet(QStringLiteral("color:orange;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 160, 71, 31));
        label_2->setStyleSheet(QStringLiteral("color:orange;"));
        tabWidget->addTab(widget, QString());

        retranslateUi(bouton_espace);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bouton_espace);
    } // setupUi

    void retranslateUi(QDialog *bouton_espace)
    {
        bouton_espace->setWindowTitle(QApplication::translate("bouton_espace", "Dialog", Q_NULLPTR));
        ajouter->setText(QApplication::translate("bouton_espace", "ajouter ", Q_NULLPTR));
        modifier->setText(QApplication::translate("bouton_espace", "modifer ", Q_NULLPTR));
        supprimer->setText(QApplication::translate("bouton_espace", "supprimer", Q_NULLPTR));
        label_nom->setText(QApplication::translate("bouton_espace", "Nom", Q_NULLPTR));
        label->setText(QApplication::translate("bouton_espace", "Localisation", Q_NULLPTR));
        label_2->setText(QApplication::translate("bouton_espace", "Superficie", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("bouton_espace", "Espace Publique ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bouton_espace: public Ui_bouton_espace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTON_ESPACE_H
