/********************************************************************************
** Form generated from reading UI file 'license_button.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSE_BUTTON_H
#define UI_LICENSE_BUTTON_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_license_button
{
public:
    QLabel *label_23;
    QTabWidget *tabWidget_license;
    QWidget *Afficher;
    QPushButton *pushButton_quit;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_sup;
    QTableView *tableView_license;
    QLabel *label_11_license;
    QLineEdit *lineEdit_CINsup_license;
    QLineEdit *lineEdit_CINrec_license;
    QPushButton *pushButton_rec_license;
    QLabel *label_4_license;
    QPushButton *export_excel;
    QWidget *Ajouter;
    QGroupBox *groupBox;
    QLabel *label_license;
    QLabel *label_2_license;
    QLabel *label_3_license;
    QPushButton *pushButton_Ajouter_license;
    QLineEdit *lineEdit_CIN_license;
    QLineEdit *lineEdit_Nom_license;
    QLineEdit *lineEdit_Pr_license;
    QLabel *label_6_license;
    QLineEdit *lineEdit_nl_license;
    QLabel *label_14_license;
    QLineEdit *lineEdit_mail_license;
    QPushButton *pushButton_mod_license;
    QWidget *Email;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *Attachement;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QLineEdit *file;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QLineEdit *mail_pass;
    QLabel *label_24;
    QPushButton *browseBtn;

    void setupUi(QDialog *license_button)
    {
        if (license_button->objectName().isEmpty())
            license_button->setObjectName(QStringLiteral("license_button"));
        license_button->resize(697, 415);
        label_23 = new QLabel(license_button);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 360, 61, 121));
        label_23->setFrameShadow(QFrame::Plain);
        tabWidget_license = new QTabWidget(license_button);
        tabWidget_license->setObjectName(QStringLiteral("tabWidget_license"));
        tabWidget_license->setGeometry(QRect(0, 0, 701, 421));
        tabWidget_license->setAutoFillBackground(true);
        Afficher = new QWidget();
        Afficher->setObjectName(QStringLiteral("Afficher"));
        Afficher->setAutoFillBackground(true);
        pushButton_quit = new QPushButton(Afficher);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(570, 340, 75, 51));
        groupBox_2 = new QGroupBox(Afficher);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 691, 341));
        groupBox_2->setAutoFillBackground(true);
        pushButton_sup = new QPushButton(groupBox_2);
        pushButton_sup->setObjectName(QStringLiteral("pushButton_sup"));
        pushButton_sup->setGeometry(QRect(600, 60, 75, 41));
        tableView_license = new QTableView(groupBox_2);
        tableView_license->setObjectName(QStringLiteral("tableView_license"));
        tableView_license->setGeometry(QRect(10, 60, 401, 192));
        label_11_license = new QLabel(groupBox_2);
        label_11_license->setObjectName(QStringLiteral("label_11_license"));
        label_11_license->setGeometry(QRect(440, 50, 91, 16));
        lineEdit_CINsup_license = new QLineEdit(groupBox_2);
        lineEdit_CINsup_license->setObjectName(QStringLiteral("lineEdit_CINsup_license"));
        lineEdit_CINsup_license->setGeometry(QRect(470, 70, 113, 20));
        lineEdit_CINrec_license = new QLineEdit(groupBox_2);
        lineEdit_CINrec_license->setObjectName(QStringLiteral("lineEdit_CINrec_license"));
        lineEdit_CINrec_license->setGeometry(QRect(470, 160, 113, 20));
        pushButton_rec_license = new QPushButton(groupBox_2);
        pushButton_rec_license->setObjectName(QStringLiteral("pushButton_rec_license"));
        pushButton_rec_license->setGeometry(QRect(600, 150, 81, 41));
        label_4_license = new QLabel(groupBox_2);
        label_4_license->setObjectName(QStringLiteral("label_4_license"));
        label_4_license->setGeometry(QRect(440, 140, 131, 16));
        export_excel = new QPushButton(groupBox_2);
        export_excel->setObjectName(QStringLiteral("export_excel"));
        export_excel->setGeometry(QRect(510, 220, 81, 61));
        tabWidget_license->addTab(Afficher, QString());
        Ajouter = new QWidget();
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setAutoFillBackground(true);
        groupBox = new QGroupBox(Ajouter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 691, 391));
        label_license = new QLabel(groupBox);
        label_license->setObjectName(QStringLiteral("label_license"));
        label_license->setGeometry(QRect(30, 30, 47, 13));
        label_2_license = new QLabel(groupBox);
        label_2_license->setObjectName(QStringLiteral("label_2_license"));
        label_2_license->setGeometry(QRect(30, 80, 47, 13));
        label_3_license = new QLabel(groupBox);
        label_3_license->setObjectName(QStringLiteral("label_3_license"));
        label_3_license->setGeometry(QRect(30, 130, 47, 13));
        pushButton_Ajouter_license = new QPushButton(groupBox);
        pushButton_Ajouter_license->setObjectName(QStringLiteral("pushButton_Ajouter_license"));
        pushButton_Ajouter_license->setGeometry(QRect(120, 170, 211, 81));
        lineEdit_CIN_license = new QLineEdit(groupBox);
        lineEdit_CIN_license->setObjectName(QStringLiteral("lineEdit_CIN_license"));
        lineEdit_CIN_license->setGeometry(QRect(90, 30, 113, 20));
        lineEdit_Nom_license = new QLineEdit(groupBox);
        lineEdit_Nom_license->setObjectName(QStringLiteral("lineEdit_Nom_license"));
        lineEdit_Nom_license->setGeometry(QRect(90, 80, 113, 20));
        lineEdit_Pr_license = new QLineEdit(groupBox);
        lineEdit_Pr_license->setObjectName(QStringLiteral("lineEdit_Pr_license"));
        lineEdit_Pr_license->setGeometry(QRect(90, 130, 113, 20));
        label_6_license = new QLabel(groupBox);
        label_6_license->setObjectName(QStringLiteral("label_6_license"));
        label_6_license->setGeometry(QRect(350, 30, 81, 16));
        lineEdit_nl_license = new QLineEdit(groupBox);
        lineEdit_nl_license->setObjectName(QStringLiteral("lineEdit_nl_license"));
        lineEdit_nl_license->setGeometry(QRect(440, 30, 113, 20));
        label_14_license = new QLabel(groupBox);
        label_14_license->setObjectName(QStringLiteral("label_14_license"));
        label_14_license->setGeometry(QRect(390, 90, 47, 13));
        lineEdit_mail_license = new QLineEdit(groupBox);
        lineEdit_mail_license->setObjectName(QStringLiteral("lineEdit_mail_license"));
        lineEdit_mail_license->setGeometry(QRect(440, 90, 113, 20));
        pushButton_mod_license = new QPushButton(groupBox);
        pushButton_mod_license->setObjectName(QStringLiteral("pushButton_mod_license"));
        pushButton_mod_license->setGeometry(QRect(420, 170, 211, 81));
        tabWidget_license->addTab(Ajouter, QString());
        Email = new QWidget();
        Email->setObjectName(QStringLiteral("Email"));
        Email->setAutoFillBackground(true);
        label_8 = new QLabel(Email);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 20, 16, 16));
        label_9 = new QLabel(Email);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 50, 47, 13));
        Attachement = new QLabel(Email);
        Attachement->setObjectName(QStringLiteral("Attachement"));
        Attachement->setGeometry(QRect(20, 80, 71, 16));
        rcpt = new QLineEdit(Email);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(60, 20, 371, 21));
        subject = new QLineEdit(Email);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(60, 50, 371, 21));
        file = new QLineEdit(Email);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(90, 80, 421, 21));
        msg = new QTextEdit(Email);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(20, 120, 441, 221));
        sendBtn = new QPushButton(Email);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(470, 190, 211, 81));
        mail_pass = new QLineEdit(Email);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(560, 20, 113, 20));
        mail_pass->setEchoMode(QLineEdit::Password);
        label_24 = new QLabel(Email);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(450, 20, 101, 16));
        browseBtn = new QPushButton(Email);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(550, 80, 75, 23));
        tabWidget_license->addTab(Email, QString());

        retranslateUi(license_button);

        tabWidget_license->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(license_button);
    } // setupUi

    void retranslateUi(QDialog *license_button)
    {
        license_button->setWindowTitle(QApplication::translate("license_button", "Dialog", Q_NULLPTR));
        label_23->setText(QApplication::translate("license_button", ".", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("license_button", "Quitter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("license_button", "Liste des licenses", Q_NULLPTR));
        pushButton_sup->setText(QApplication::translate("license_button", "Supprimer", Q_NULLPTR));
        label_11_license->setText(QApplication::translate("license_button", "CIN a supprimer:", Q_NULLPTR));
        pushButton_rec_license->setText(QApplication::translate("license_button", "Rechercher", Q_NULLPTR));
        label_4_license->setText(QApplication::translate("license_button", "Entrer CIN a rechercher:", Q_NULLPTR));
        export_excel->setText(QApplication::translate("license_button", "Export", Q_NULLPTR));
        tabWidget_license->setTabText(tabWidget_license->indexOf(Afficher), QApplication::translate("license_button", "Afficher", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("license_button", "Ajouter une license", Q_NULLPTR));
        label_license->setText(QApplication::translate("license_button", "CIN", Q_NULLPTR));
        label_2_license->setText(QApplication::translate("license_button", "Nom", Q_NULLPTR));
        label_3_license->setText(QApplication::translate("license_button", "Prenom", Q_NULLPTR));
        pushButton_Ajouter_license->setText(QApplication::translate("license_button", "Ajouter", Q_NULLPTR));
        label_6_license->setText(QApplication::translate("license_button", "Nom du licenses:", Q_NULLPTR));
        label_14_license->setText(QApplication::translate("license_button", "E-mail:", Q_NULLPTR));
        pushButton_mod_license->setText(QApplication::translate("license_button", "Modifier", Q_NULLPTR));
        tabWidget_license->setTabText(tabWidget_license->indexOf(Ajouter), QApplication::translate("license_button", "Ajouter/Modifier", Q_NULLPTR));
        label_8->setText(QApplication::translate("license_button", "\303\200:", Q_NULLPTR));
        label_9->setText(QApplication::translate("license_button", "Sujet:", Q_NULLPTR));
        Attachement->setText(QApplication::translate("license_button", "Attachement:", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("license_button", "Envoyer", Q_NULLPTR));
        label_24->setText(QApplication::translate("license_button", "Votre mot de passe:", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("license_button", "Parcour...", Q_NULLPTR));
        tabWidget_license->setTabText(tabWidget_license->indexOf(Email), QApplication::translate("license_button", "Envoi E-mail", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class license_button: public Ui_license_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSE_BUTTON_H
