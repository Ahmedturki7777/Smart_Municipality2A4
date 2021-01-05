/********************************************************************************
** Form generated from reading UI file 'projet_button.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJET_BUTTON_H
#define UI_PROJET_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projet_button
{
public:
    QLabel *label_23;
    QTabWidget *tabWidget_license_2;
    QWidget *Afficher_2;
    QPushButton *pushButton_quit_projet;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_sup_projet;
    QTableView *tableView_projet;
    QLabel *label_projet;
    QLineEdit *lineEdit_CINsup_projet;
    QLineEdit *lineEdit_CINrec_projet;
    QPushButton *pushButton_rec_projet;
    QLabel *label_projet_2;
    QWidget *Ajouter_2;
    QGroupBox *groupBox_projet;
    QLabel *label_projet_4;
    QLabel *label_projet_5;
    QLabel *label_projet_6;
    QPushButton *pushButton_Ajouter_projet;
    QLineEdit *lineEdit_CIN_projet;
    QLineEdit *lineEdit_Nom_projet;
    QLineEdit *lineEdit_Pr_projet;
    QLabel *label_projet_7;
    QLineEdit *lineEdit_nl_projet;
    QLabel *label_projet_8;
    QLineEdit *lineEdit_mail_projet;
    QPushButton *pushButton_mod_projet;

    void setupUi(QDialog *projet_button)
    {
        if (projet_button->objectName().isEmpty())
            projet_button->setObjectName(QStringLiteral("projet_button"));
        projet_button->resize(687, 441);
        label_23 = new QLabel(projet_button);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(0, 370, 61, 121));
        label_23->setFrameShadow(QFrame::Plain);
        tabWidget_license_2 = new QTabWidget(projet_button);
        tabWidget_license_2->setObjectName(QStringLiteral("tabWidget_license_2"));
        tabWidget_license_2->setGeometry(QRect(0, 0, 691, 441));
        tabWidget_license_2->setAutoFillBackground(true);
        Afficher_2 = new QWidget();
        Afficher_2->setObjectName(QStringLiteral("Afficher_2"));
        Afficher_2->setAutoFillBackground(true);
        pushButton_quit_projet = new QPushButton(Afficher_2);
        pushButton_quit_projet->setObjectName(QStringLiteral("pushButton_quit_projet"));
        pushButton_quit_projet->setGeometry(QRect(560, 360, 75, 41));
        groupBox_3 = new QGroupBox(Afficher_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 681, 351));
        pushButton_sup_projet = new QPushButton(groupBox_3);
        pushButton_sup_projet->setObjectName(QStringLiteral("pushButton_sup_projet"));
        pushButton_sup_projet->setGeometry(QRect(600, 60, 75, 41));
        tableView_projet = new QTableView(groupBox_3);
        tableView_projet->setObjectName(QStringLiteral("tableView_projet"));
        tableView_projet->setGeometry(QRect(10, 60, 401, 192));
        label_projet = new QLabel(groupBox_3);
        label_projet->setObjectName(QStringLiteral("label_projet"));
        label_projet->setGeometry(QRect(440, 50, 91, 16));
        lineEdit_CINsup_projet = new QLineEdit(groupBox_3);
        lineEdit_CINsup_projet->setObjectName(QStringLiteral("lineEdit_CINsup_projet"));
        lineEdit_CINsup_projet->setGeometry(QRect(470, 70, 113, 20));
        lineEdit_CINrec_projet = new QLineEdit(groupBox_3);
        lineEdit_CINrec_projet->setObjectName(QStringLiteral("lineEdit_CINrec_projet"));
        lineEdit_CINrec_projet->setGeometry(QRect(470, 160, 113, 20));
        pushButton_rec_projet = new QPushButton(groupBox_3);
        pushButton_rec_projet->setObjectName(QStringLiteral("pushButton_rec_projet"));
        pushButton_rec_projet->setGeometry(QRect(600, 150, 75, 41));
        label_projet_2 = new QLabel(groupBox_3);
        label_projet_2->setObjectName(QStringLiteral("label_projet_2"));
        label_projet_2->setGeometry(QRect(440, 140, 131, 16));
        tabWidget_license_2->addTab(Afficher_2, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QStringLiteral("Ajouter_2"));
        Ajouter_2->setAutoFillBackground(true);
        groupBox_projet = new QGroupBox(Ajouter_2);
        groupBox_projet->setObjectName(QStringLiteral("groupBox_projet"));
        groupBox_projet->setGeometry(QRect(0, 0, 691, 391));
        label_projet_4 = new QLabel(groupBox_projet);
        label_projet_4->setObjectName(QStringLiteral("label_projet_4"));
        label_projet_4->setGeometry(QRect(30, 30, 47, 13));
        label_projet_5 = new QLabel(groupBox_projet);
        label_projet_5->setObjectName(QStringLiteral("label_projet_5"));
        label_projet_5->setGeometry(QRect(30, 80, 47, 13));
        label_projet_6 = new QLabel(groupBox_projet);
        label_projet_6->setObjectName(QStringLiteral("label_projet_6"));
        label_projet_6->setGeometry(QRect(30, 130, 47, 13));
        pushButton_Ajouter_projet = new QPushButton(groupBox_projet);
        pushButton_Ajouter_projet->setObjectName(QStringLiteral("pushButton_Ajouter_projet"));
        pushButton_Ajouter_projet->setGeometry(QRect(120, 170, 211, 81));
        lineEdit_CIN_projet = new QLineEdit(groupBox_projet);
        lineEdit_CIN_projet->setObjectName(QStringLiteral("lineEdit_CIN_projet"));
        lineEdit_CIN_projet->setGeometry(QRect(90, 30, 113, 20));
        lineEdit_Nom_projet = new QLineEdit(groupBox_projet);
        lineEdit_Nom_projet->setObjectName(QStringLiteral("lineEdit_Nom_projet"));
        lineEdit_Nom_projet->setGeometry(QRect(90, 80, 113, 20));
        lineEdit_Pr_projet = new QLineEdit(groupBox_projet);
        lineEdit_Pr_projet->setObjectName(QStringLiteral("lineEdit_Pr_projet"));
        lineEdit_Pr_projet->setGeometry(QRect(90, 130, 113, 20));
        label_projet_7 = new QLabel(groupBox_projet);
        label_projet_7->setObjectName(QStringLiteral("label_projet_7"));
        label_projet_7->setGeometry(QRect(350, 30, 81, 16));
        lineEdit_nl_projet = new QLineEdit(groupBox_projet);
        lineEdit_nl_projet->setObjectName(QStringLiteral("lineEdit_nl_projet"));
        lineEdit_nl_projet->setGeometry(QRect(440, 30, 113, 20));
        label_projet_8 = new QLabel(groupBox_projet);
        label_projet_8->setObjectName(QStringLiteral("label_projet_8"));
        label_projet_8->setGeometry(QRect(390, 90, 47, 13));
        lineEdit_mail_projet = new QLineEdit(groupBox_projet);
        lineEdit_mail_projet->setObjectName(QStringLiteral("lineEdit_mail_projet"));
        lineEdit_mail_projet->setGeometry(QRect(440, 90, 113, 20));
        pushButton_mod_projet = new QPushButton(groupBox_projet);
        pushButton_mod_projet->setObjectName(QStringLiteral("pushButton_mod_projet"));
        pushButton_mod_projet->setGeometry(QRect(420, 170, 211, 81));
        tabWidget_license_2->addTab(Ajouter_2, QString());

        retranslateUi(projet_button);

        tabWidget_license_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(projet_button);
    } // setupUi

    void retranslateUi(QDialog *projet_button)
    {
        projet_button->setWindowTitle(QApplication::translate("projet_button", "Dialog", Q_NULLPTR));
        label_23->setText(QApplication::translate("projet_button", ".", Q_NULLPTR));
        pushButton_quit_projet->setText(QApplication::translate("projet_button", "Quitter", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("projet_button", "Liste des licenses", Q_NULLPTR));
        pushButton_sup_projet->setText(QApplication::translate("projet_button", "Supprimer", Q_NULLPTR));
        label_projet->setText(QApplication::translate("projet_button", "CIN a supprimer:", Q_NULLPTR));
        pushButton_rec_projet->setText(QApplication::translate("projet_button", "Rechercher", Q_NULLPTR));
        label_projet_2->setText(QApplication::translate("projet_button", "Entrer CIN a rechercher:", Q_NULLPTR));
        tabWidget_license_2->setTabText(tabWidget_license_2->indexOf(Afficher_2), QApplication::translate("projet_button", "Afficher", Q_NULLPTR));
        groupBox_projet->setTitle(QApplication::translate("projet_button", "Ajouter une license", Q_NULLPTR));
        label_projet_4->setText(QApplication::translate("projet_button", "CIN", Q_NULLPTR));
        label_projet_5->setText(QApplication::translate("projet_button", "Nom", Q_NULLPTR));
        label_projet_6->setText(QApplication::translate("projet_button", "Prenom", Q_NULLPTR));
        pushButton_Ajouter_projet->setText(QApplication::translate("projet_button", "Ajouter", Q_NULLPTR));
        label_projet_7->setText(QApplication::translate("projet_button", "Nom du licenses:", Q_NULLPTR));
        label_projet_8->setText(QApplication::translate("projet_button", "E-mail:", Q_NULLPTR));
        pushButton_mod_projet->setText(QApplication::translate("projet_button", "Modifier", Q_NULLPTR));
        tabWidget_license_2->setTabText(tabWidget_license_2->indexOf(Ajouter_2), QApplication::translate("projet_button", "Ajouter/Modifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class projet_button: public Ui_projet_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJET_BUTTON_H
