/********************************************************************************
** Form generated from reading UI file 'bouton_reclamation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTON_RECLAMATION_H
#define UI_BOUTON_RECLAMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bouton_reclamation
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_16;
    QTabWidget *tabWidget_5;
    QWidget *tab_17;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLineEdit *lineEdit_titrerec_3;
    QLineEdit *lineEdit_daterec_3;
    QLineEdit *lineEdit_sujetrec_3;
    QPushButton *pushButton_inserrec_2;
    QWidget *tab_18;
    QTableView *tableView_9;
    QWidget *tab_19;
    QTableView *tableView_10;
    QPushButton *pushButton_modifierev_5;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *lineEdit_titrerec_4;
    QLineEdit *lineEdit_daterec_4;
    QLineEdit *lineEdit_sujetrec_4;
    QWidget *tab_20;
    QLabel *label_eliminerrec_2;
    QLineEdit *lineEdit_eliminerrec_2;
    QPushButton *pushButton_supprimerrec_2;
    QWidget *widget_2;

    void setupUi(QDialog *bouton_reclamation)
    {
        if (bouton_reclamation->objectName().isEmpty())
            bouton_reclamation->setObjectName(QStringLiteral("bouton_reclamation"));
        bouton_reclamation->resize(623, 402);
        tabWidget = new QTabWidget(bouton_reclamation);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 571, 361));
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        tabWidget_5 = new QTabWidget(tab_16);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 581, 341));
        tabWidget_5->setStyleSheet(QLatin1String("#mainFrame {\n"
"border: 3px solid red;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}\n"
" #MyLoginForm {\n"
"background: red;\n"
"}\n"
"\n"
"#mainFrame {\n"
"border: 3px solid red;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid red;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: white;\n"
"  background: bleu;\n"
"\n"
"border-width: 6px;\n"
"border-color: grey;\n"
"border-style: solid;\n"
"border-radius: 10;\n"
"padding: 3px;\n"
"font-size: 12px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 150px;\n"
"max-width: 150px;\n"
"min-height: 35px;\n"
"max-height: 35px;\n"
"}\n"
"QLabel {\n"
"     border: 4px solid black;\n"
"     border-radius: 12px;\n"
"     padding: 0 12px;\n"
"     background: red;\n"
"     selection-background-color: black;\n"
" }\n"
"QPushButton:hover { background-color: #FF0101; }\n"
" \n"
"  \n"
"\n"
"  \n"
"\n"
" \n"
" "));
        tab_17 = new QWidget();
        tab_17->setObjectName(QStringLiteral("tab_17"));
        label_27 = new QLabel(tab_17);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 30, 111, 51));
        label_28 = new QLabel(tab_17);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 110, 111, 51));
        label_29 = new QLabel(tab_17);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 190, 111, 51));
        lineEdit_titrerec_3 = new QLineEdit(tab_17);
        lineEdit_titrerec_3->setObjectName(QStringLiteral("lineEdit_titrerec_3"));
        lineEdit_titrerec_3->setGeometry(QRect(180, 40, 131, 41));
        lineEdit_daterec_3 = new QLineEdit(tab_17);
        lineEdit_daterec_3->setObjectName(QStringLiteral("lineEdit_daterec_3"));
        lineEdit_daterec_3->setGeometry(QRect(180, 110, 131, 41));
        lineEdit_sujetrec_3 = new QLineEdit(tab_17);
        lineEdit_sujetrec_3->setObjectName(QStringLiteral("lineEdit_sujetrec_3"));
        lineEdit_sujetrec_3->setGeometry(QRect(180, 190, 131, 41));
        pushButton_inserrec_2 = new QPushButton(tab_17);
        pushButton_inserrec_2->setObjectName(QStringLiteral("pushButton_inserrec_2"));
        pushButton_inserrec_2->setGeometry(QRect(360, 100, 172, 53));
        tabWidget_5->addTab(tab_17, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName(QStringLiteral("tab_18"));
        tableView_9 = new QTableView(tab_18);
        tableView_9->setObjectName(QStringLiteral("tableView_9"));
        tableView_9->setGeometry(QRect(0, 0, 551, 281));
        tabWidget_5->addTab(tab_18, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QStringLiteral("tab_19"));
        tableView_10 = new QTableView(tab_19);
        tableView_10->setObjectName(QStringLiteral("tableView_10"));
        tableView_10->setGeometry(QRect(10, 20, 311, 251));
        pushButton_modifierev_5 = new QPushButton(tab_19);
        pushButton_modifierev_5->setObjectName(QStringLiteral("pushButton_modifierev_5"));
        pushButton_modifierev_5->setGeometry(QRect(350, 210, 172, 53));
        formLayoutWidget_4 = new QWidget(tab_19);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(360, 20, 160, 194));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setVerticalSpacing(40);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(formLayoutWidget_4);
        label_30->setObjectName(QStringLiteral("label_30"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_30);

        label_31 = new QLabel(formLayoutWidget_4);
        label_31->setObjectName(QStringLiteral("label_31"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_31);

        label_32 = new QLabel(formLayoutWidget_4);
        label_32->setObjectName(QStringLiteral("label_32"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_32);

        lineEdit_titrerec_4 = new QLineEdit(formLayoutWidget_4);
        lineEdit_titrerec_4->setObjectName(QStringLiteral("lineEdit_titrerec_4"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_titrerec_4);

        lineEdit_daterec_4 = new QLineEdit(formLayoutWidget_4);
        lineEdit_daterec_4->setObjectName(QStringLiteral("lineEdit_daterec_4"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_daterec_4);

        lineEdit_sujetrec_4 = new QLineEdit(formLayoutWidget_4);
        lineEdit_sujetrec_4->setObjectName(QStringLiteral("lineEdit_sujetrec_4"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, lineEdit_sujetrec_4);

        tabWidget_5->addTab(tab_19, QString());
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        label_eliminerrec_2 = new QLabel(tab_20);
        label_eliminerrec_2->setObjectName(QStringLiteral("label_eliminerrec_2"));
        label_eliminerrec_2->setGeometry(QRect(0, 90, 161, 71));
        lineEdit_eliminerrec_2 = new QLineEdit(tab_20);
        lineEdit_eliminerrec_2->setObjectName(QStringLiteral("lineEdit_eliminerrec_2"));
        lineEdit_eliminerrec_2->setGeometry(QRect(200, 100, 131, 61));
        pushButton_supprimerrec_2 = new QPushButton(tab_20);
        pushButton_supprimerrec_2->setObjectName(QStringLiteral("pushButton_supprimerrec_2"));
        pushButton_supprimerrec_2->setGeometry(QRect(370, 100, 172, 53));
        tabWidget_5->addTab(tab_20, QString());
        tabWidget->addTab(tab_16, QString());
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        tabWidget->addTab(widget_2, QString());

        retranslateUi(bouton_reclamation);

        tabWidget->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(bouton_reclamation);
    } // setupUi

    void retranslateUi(QDialog *bouton_reclamation)
    {
        bouton_reclamation->setWindowTitle(QApplication::translate("bouton_reclamation", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget_5->setToolTip(QApplication::translate("bouton_reclamation", "<html><head/><body><p><span style=\" font-weight:600;\">kjknjj</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_27->setText(QApplication::translate("bouton_reclamation", "titre", Q_NULLPTR));
        label_28->setText(QApplication::translate("bouton_reclamation", "date", Q_NULLPTR));
        label_29->setText(QApplication::translate("bouton_reclamation", "sujet", Q_NULLPTR));
        lineEdit_titrerec_3->setText(QString());
        pushButton_inserrec_2->setText(QApplication::translate("bouton_reclamation", "Ins\303\251rer", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_17), QApplication::translate("bouton_reclamation", "Cr\303\251er", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_18), QApplication::translate("bouton_reclamation", "Consulter", Q_NULLPTR));
        pushButton_modifierev_5->setText(QApplication::translate("bouton_reclamation", "modifier", Q_NULLPTR));
        label_30->setText(QApplication::translate("bouton_reclamation", "titre", Q_NULLPTR));
        label_31->setText(QApplication::translate("bouton_reclamation", "sujet", Q_NULLPTR));
        label_32->setText(QApplication::translate("bouton_reclamation", "date", Q_NULLPTR));
        lineEdit_titrerec_4->setText(QString());
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_19), QApplication::translate("bouton_reclamation", "modifier", Q_NULLPTR));
        label_eliminerrec_2->setText(QApplication::translate("bouton_reclamation", "date", Q_NULLPTR));
        pushButton_supprimerrec_2->setText(QApplication::translate("bouton_reclamation", "supprimer", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_20), QApplication::translate("bouton_reclamation", "Eliminer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_16), QApplication::translate("bouton_reclamation", "R\303\251clamation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget_2), QApplication::translate("bouton_reclamation", "Evenement", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bouton_reclamation: public Ui_bouton_reclamation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTON_RECLAMATION_H
