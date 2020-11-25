#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include "profil.h"
#include "employe.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_2->setModel(Etmb.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::on_pushButton_clicked()
{
    QString  login= ui->lineEdit_login->text();
    QString password =ui->lineEdit_password->text();

   Profil p(login,password);
     bool test=p.ajouter();
    if(test)
    { ui->tableView->setModel(Etmb.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("ajout effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("ajout non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
                                                    }

bool MainWindow::on_pushButton_2_clicked()
{
    QString  nom= ui->lineEdit_nom->text();
    QString prenom =ui->lineEdit_prenom->text();
    QString  cin= ui->lineEdit_cin->text();
    QString date_de_naissance =ui->lineEdit_dn->text();
    QString  lieu_de_naissance= ui->lineEdit_ln->text();
    QString nationalite =ui->lineEdit_nationalite->text();

   Employe k(nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite);
     bool test=k.ajouter();
     if(test)
    { ui->tableView->setModel(Etmb.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("ajout effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("ajout non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_3_clicked()
{
    QString login=ui->lineEdit_login->text();
    bool test=Etmb.supprimer(login);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("suppression effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("suppression non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_4_clicked()
{QString  nom=ui->lineEdit_nom->text();
    bool test=Etmb.supprimer(nom);
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("suppression effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("suppression non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

}


void MainWindow::on_pushButton_5_clicked()
{
    QString  nom= ui->lineEdit_n->text() ;
    QString prenom =ui->lineEdit_p->text();
    QString  departement= ui->lineEdit_d->text();
    QString salaire =ui->lineEdit_s->text();

    ui->textEdit->setText("FICHE DE PAI") ;
     ui->textEdit->append("                         ") ;
    ui->textEdit->append("Departement :") ;
    ui->textEdit->append(departement);
    ui->textEdit->append("==========================") ;
    ui->textEdit->append("Nom de l employe :") ;
    ui->textEdit->append(nom);
    ui->textEdit->append("prenom :") ;
    ui->textEdit->append(prenom);
    ui->textEdit->append("==========================") ;
    ui->textEdit->append("**Salaire**") ;
    ui->textEdit->append(salaire);


}
