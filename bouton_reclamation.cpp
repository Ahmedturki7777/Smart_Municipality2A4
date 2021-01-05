#include "bouton_reclamation.h"
#include "ui_bouton_reclamation.h"
#include "reclamation.h"
#include "QMessageBox"
//test
bouton_reclamation::bouton_reclamation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_reclamation)
{
    ui->setupUi(this);
    ui->tableView_9->setModel(R.afficher());

    ui->tableView_10->setModel(R.afficher());
}

bouton_reclamation::~bouton_reclamation()
{
    delete ui;
}





void bouton_reclamation::on_pushButton_inserrec_2_clicked()
{

    QString date =ui->lineEdit_daterec_3->text();
    QString titre =ui->lineEdit_titrerec_3->text();
    QString sujet =ui->lineEdit_sujetrec_3->text();
    Reclamation R (titre,sujet,date);
    bool test =R.ajouter();

    if (test){
        ui->tableView_9->setModel(R.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter effectuer"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
             }
        else
        QMessageBox::critical(nullptr, QObject::tr("Ajout effectuer"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


    }




void bouton_reclamation::on_pushButton_modifierev_5_clicked()
{
    Reclamation R;
       QString titre =ui->lineEdit_titrerec_4->text();

       QString date1 =ui->lineEdit_daterec_4->text();
       R.setDate(date1);
       QString sujet =ui->lineEdit_sujetrec_4->text();
       R.setSujet(sujet);


       bool test =R.modifier(titre);
       if(test)
       {

           ui->tableView_9->setModel(R.afficher());
            ui->tableView_10->setModel(R.afficher());
           QMessageBox::information(nullptr, QObject::tr("modification effectuer"),
                                    QObject::tr("OK \n" ""), QMessageBox::Cancel);
                             }
                        else
                        QMessageBox::critical(nullptr, QObject::tr("modification non effectuer"),
                                    QObject::tr("KO. \n" ""), QMessageBox::Cancel);
}

void bouton_reclamation::on_pushButton_supprimerrec_2_clicked()
{
    QString date =ui->lineEdit_eliminerrec_2->text();
    bool test =R.supprimer(date);
    if(test)
    {
        ui->tableView_9->setModel((R.afficher()));
        QMessageBox::information(nullptr, QObject::tr("suppression effectuer"),
                                 QObject::tr("OK \n" ""), QMessageBox::Cancel);
                          }
                     else
                     QMessageBox::critical(nullptr, QObject::tr("suppression non effectuer"),
                                 QObject::tr("KO. \n" ""), QMessageBox::Cancel);

}
