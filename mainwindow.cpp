#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include "profil.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString  login= ui->lineEdit_login->text();
    QString password =ui->lineEdit_password->text();

   Profil p(login,password);
     bool test=p.ajouter();
    if(test)
    { QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("ajout effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("ajout non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
}
