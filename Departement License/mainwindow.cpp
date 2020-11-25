#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "license.h"
#include "impression.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(e.afficher());

    ui->lineEdit_CIN->setValidator(new QIntValidator(0,999999999));
    ui->lineEdit_Nom->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_Pr->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::on_pushButton_Ajouter_clicked()
{
    int cin = ui->lineEdit_CIN->text().toInt();
    QString nom= ui->lineEdit_Nom->text();
    QString prenom= ui->lineEdit_Pr->text();
    QString nomlicense= ui->lineEdit_nl->text();
    QString email= ui->lineEdit_mail->text();

    tables e(nom,prenom,nomlicense,email,cin);
    bool test=e.ajouter();
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Ajout effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajout non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_sup_clicked()
{
    int cin= ui->lineEdit_CINsup->text().toInt();
    bool test=e.supprimer(cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }

    if(test)
    {
        ui->tableView->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Suppression effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Suppression non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


void MainWindow::on_pushButton_mod_2_clicked()
{
    int cin = ui->lineEdit_CIN->text().toInt();
    QString nom= ui->lineEdit_Nom->text();
    QString prenom= ui->lineEdit_Pr->text();
    QString nomlicense= ui->lineEdit_nl->text();
    QString email= ui->lineEdit_mail->text();

    tables e(nom,prenom,nomlicense,email,cin);
    bool test=e.modifier();
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Modification effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Modification non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



}

void MainWindow::on_pushButton_print_clicked()
{
    impression("example1.pdf");
}
