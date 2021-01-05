/********************************************************************************
** Form generated from reading UI file 'bouton_profil.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTON_PROFIL_H
#define UI_BOUTON_PROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bouton_profil
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLineEdit *lineEdit_supprimerp;
    QLineEdit *lineEdit_login;
    QTableView *tableView_2;
    QLineEdit *modifier_pasword;
    QLabel *label_4;
    QLineEdit *modifier_login;
    QPushButton *ajouterp_Button;
    QLineEdit *lineEdit_password;
    QLabel *label_3;
    QPushButton *supprimerpButton;
    QPushButton *modifier_profil;

    void setupUi(QDialog *bouton_profil)
    {
        if (bouton_profil->objectName().isEmpty())
            bouton_profil->setObjectName(QStringLiteral("bouton_profil"));
        bouton_profil->resize(746, 344);
        tabWidget = new QTabWidget(bouton_profil);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 10, 731, 321));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_supprimerp = new QLineEdit(tab_3);
        lineEdit_supprimerp->setObjectName(QStringLiteral("lineEdit_supprimerp"));
        lineEdit_supprimerp->setGeometry(QRect(70, 200, 113, 20));
        lineEdit_supprimerp->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        lineEdit_login = new QLineEdit(tab_3);
        lineEdit_login->setObjectName(QStringLiteral("lineEdit_login"));
        lineEdit_login->setGeometry(QRect(70, 50, 113, 20));
        lineEdit_login->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(200, 10, 341, 281));
        tableView_2->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        modifier_pasword = new QLineEdit(tab_3);
        modifier_pasword->setObjectName(QStringLiteral("modifier_pasword"));
        modifier_pasword->setGeometry(QRect(600, 90, 113, 20));
        modifier_pasword->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 47, 13));
        modifier_login = new QLineEdit(tab_3);
        modifier_login->setObjectName(QStringLiteral("modifier_login"));
        modifier_login->setGeometry(QRect(600, 50, 113, 20));
        modifier_login->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        ajouterp_Button = new QPushButton(tab_3);
        ajouterp_Button->setObjectName(QStringLiteral("ajouterp_Button"));
        ajouterp_Button->setGeometry(QRect(80, 10, 75, 23));
        ajouterp_Button->setStyleSheet(QStringLiteral("background-color:rgb(241, 241, 241)"));
        lineEdit_password = new QLineEdit(tab_3);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(70, 90, 113, 20));
        lineEdit_password->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 47, 13));
        supprimerpButton = new QPushButton(tab_3);
        supprimerpButton->setObjectName(QStringLiteral("supprimerpButton"));
        supprimerpButton->setGeometry(QRect(80, 160, 91, 23));
        supprimerpButton->setStyleSheet(QStringLiteral("background-color:rgb(241, 241, 241)"));
        modifier_profil = new QPushButton(tab_3);
        modifier_profil->setObjectName(QStringLiteral("modifier_profil"));
        modifier_profil->setGeometry(QRect(600, 10, 91, 23));
        modifier_profil->setStyleSheet(QStringLiteral("background-color:rgb(241, 241, 241)"));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(bouton_profil);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bouton_profil);
    } // setupUi

    void retranslateUi(QDialog *bouton_profil)
    {
        bouton_profil->setWindowTitle(QApplication::translate("bouton_profil", "departement profil", Q_NULLPTR));
        label_4->setText(QApplication::translate("bouton_profil", "password", Q_NULLPTR));
        ajouterp_Button->setText(QApplication::translate("bouton_profil", "ajouter", Q_NULLPTR));
        label_3->setText(QApplication::translate("bouton_profil", "login", Q_NULLPTR));
        supprimerpButton->setText(QApplication::translate("bouton_profil", "supprimer", Q_NULLPTR));
        modifier_profil->setText(QApplication::translate("bouton_profil", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("bouton_profil", "profil", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bouton_profil: public Ui_bouton_profil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTON_PROFIL_H
