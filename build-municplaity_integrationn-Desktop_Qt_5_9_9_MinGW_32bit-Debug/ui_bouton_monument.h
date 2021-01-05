/********************************************************************************
** Form generated from reading UI file 'bouton_monument.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTON_MONUMENT_H
#define UI_BOUTON_MONUMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bouton_monument
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *ajouter_2;
    QPushButton *modifer_2;
    QPushButton *supprimer_2;
    QPushButton *metier;
    QPushButton *quitter;
    QDateEdit *dateEdit;
    QDoubleSpinBox *doubleSpinBox;
    QSpinBox *spinBox;
    QTableView *tableView;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *bouton_monument)
    {
        if (bouton_monument->objectName().isEmpty())
            bouton_monument->setObjectName(QStringLiteral("bouton_monument"));
        bouton_monument->resize(712, 442);
        tabWidget = new QTabWidget(bouton_monument);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(70, 30, 631, 411));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        ajouter_2 = new QPushButton(tab_2);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(40, 40, 93, 28));
        ajouter_2->setStyleSheet(QStringLiteral("color:red;"));
        modifer_2 = new QPushButton(tab_2);
        modifer_2->setObjectName(QStringLiteral("modifer_2"));
        modifer_2->setGeometry(QRect(40, 90, 93, 28));
        modifer_2->setStyleSheet(QStringLiteral("color:red;"));
        supprimer_2 = new QPushButton(tab_2);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(40, 170, 93, 28));
        supprimer_2->setStyleSheet(QStringLiteral("color:red;"));
        metier = new QPushButton(tab_2);
        metier->setObjectName(QStringLiteral("metier"));
        metier->setGeometry(QRect(500, 70, 93, 28));
        metier->setStyleSheet(QStringLiteral("color:red;"));
        quitter = new QPushButton(tab_2);
        quitter->setObjectName(QStringLiteral("quitter"));
        quitter->setGeometry(QRect(500, 120, 93, 28));
        quitter->setStyleSheet(QStringLiteral("color:red;"));
        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(160, 130, 110, 22));
        doubleSpinBox = new QDoubleSpinBox(tab_2);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(30, 310, 111, 22));
        spinBox = new QSpinBox(tab_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(160, 50, 111, 22));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(250, 180, 351, 191));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 280, 55, 16));
        label_3->setStyleSheet(QStringLiteral("color:orange;"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 30, 71, 16));
        label_4->setStyleSheet(QStringLiteral("color:orange"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 110, 55, 16));
        label_5->setStyleSheet(QStringLiteral("color:orange;"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(bouton_monument);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bouton_monument);
    } // setupUi

    void retranslateUi(QDialog *bouton_monument)
    {
        bouton_monument->setWindowTitle(QApplication::translate("bouton_monument", "Dialog", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("bouton_monument", "ajouter", Q_NULLPTR));
        modifer_2->setText(QApplication::translate("bouton_monument", "modifier", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("bouton_monument", "supprimer", Q_NULLPTR));
        metier->setText(QApplication::translate("bouton_monument", "les m\303\251tier", Q_NULLPTR));
        quitter->setText(QApplication::translate("bouton_monument", "Quitter", Q_NULLPTR));
        label_3->setText(QApplication::translate("bouton_monument", "prix", Q_NULLPTR));
        label_4->setText(QApplication::translate("bouton_monument", "valeur", Q_NULLPTR));
        label_5->setText(QApplication::translate("bouton_monument", "Date", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("bouton_monument", "Monument Historique ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bouton_monument: public Ui_bouton_monument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTON_MONUMENT_H
