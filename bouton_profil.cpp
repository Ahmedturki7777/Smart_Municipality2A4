#include "bouton_profil.h"
#include "ui_bouton_profil.h"
#include <QMessageBox>
#include <QApplication>
bouton_profil::bouton_profil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_profil)
{
    ui->setupUi(this);
    ui->tableView_2->setModel(Etmb.afficher());

}

bouton_profil::~bouton_profil()
{
    delete ui;
}


bool bouton_profil::on_supprimerpButton_clicked()
{

   QString login=ui->lineEdit_supprimerp->text();
    bool test=Etmb.supprimer(login);
    if(test)
    { ui->tableView_2->setModel(Etmb.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("suppression effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("suppression non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


}

void bouton_profil::on_modifier_profil_clicked()
{
    QString login= ui->modifier_login->text();
      QString password= ui->modifier_pasword->text();

      profil a(login,password);

              bool test=a.modifierp(login);
              if(test)
              {
                 ui->tableView_2->setModel(Etmb.afficher());
                  QMessageBox::information(nullptr, QObject::tr("modifié"),
                              QObject::tr("modifié avec succés.\n" "Click Cancel to exit."), QMessageBox::Cancel);

              }
               else

                  QMessageBox::critical(nullptr, QObject::tr("non modifié"),
                              QObject::tr("modification échouée.\n""Click Cancel to exit."), QMessageBox::Cancel);
}


void bouton_profil::on_ajouterp_Button_clicked()
{
    QString  login= ui->lineEdit_login->text();
    QString password =ui->lineEdit_password->text();

   profil p(login,password);
     bool test=p.ajouter();
    if(test)
    { ui->tableView_2->setModel(Etmb.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("ajout effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("ajout non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

}




