/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_evenement;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_license;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(868, 660);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 220, 151, 91));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 320, 131, 141));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 480, 181, 111));
        pushButton_evenement = new QPushButton(centralwidget);
        pushButton_evenement->setObjectName(QStringLiteral("pushButton_evenement"));
        pushButton_evenement->setGeometry(QRect(10, 470, 171, 121));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 360, 171, 101));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(410, 240, 171, 101));
        pushButton_license = new QPushButton(centralwidget);
        pushButton_license->setObjectName(QStringLiteral("pushButton_license"));
        pushButton_license->setGeometry(QRect(0, 130, 141, 81));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(410, 150, 181, 71));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 10, 131, 81));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(410, 20, 161, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 868, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "S-Municipality", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "D\303\251partement Espace", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "D\303\251partement profil", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "D\303\251partement r\303\251clamation", Q_NULLPTR));
        pushButton_evenement->setText(QApplication::translate("MainWindow", "D\303\251partement Evenement", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "D\303\251partement Employ\303\251", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "D\303\251partement Monument", Q_NULLPTR));
        pushButton_license->setText(QApplication::translate("MainWindow", "D\303\251partement Licence", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "D\303\251partement Projet", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "D\303\251partement cong\303\251", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "D\303\251partement Pointage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
