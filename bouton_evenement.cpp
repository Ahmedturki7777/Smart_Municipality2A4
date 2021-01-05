#include "bouton_evenement.h"
#include "ui_bouton_evenement.h"
#include "evenement.h"
#include "QMessageBox"

//test
bouton_evenement::bouton_evenement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_evenement)
{
    ui->setupUi(this);
     ui->tableView_2->setModel(E.afficher());
     ui->tableView_3->setModel((E.afficher()));
    ui->tableView_4->setModel((E.afficher()));
    QPixmap pix3("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
        int w3 = ui->label->width();
        int h3 = ui->label->height();
        ui->label->setPixmap(pix3.scaled(w3,h3,Qt::IgnoreAspectRatio));




}

bouton_evenement::~bouton_evenement()
{
    delete ui;
}

void bouton_evenement::on_pushButton_inserev_clicked()
{
    //recuperer les informations saisis dans l'interface
    QString date =ui->lineEdit_dateev->text();
    QString nom =ui->lineEdit_nomev->text();
    QString sujet =ui->lineEdit_sujetev->text();
    Evenement E (nom,sujet,date);
    bool test =E.ajouter();

    if (test){
        ui->tableView_2->setModel(E.afficher());
        QMessageBox::information(nullptr, QObject::tr("Ajouter effectuer"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
             }
        else
        QMessageBox::critical(nullptr, QObject::tr("Ajout effectuer"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }













void bouton_evenement::on_pushButton_supprimerev_clicked()
{

     QString date =ui->lineEdit->text();
        bool test =E.supprimer(date);
        if(test)
        {
            ui->tableView_2->setModel((E.afficher()));
            QMessageBox::information(nullptr, QObject::tr("suppression effectuer"),
                                     QObject::tr("OK \n" ""), QMessageBox::Cancel);
                              }
                         else
                         QMessageBox::critical(nullptr, QObject::tr("suppression non effectuer"),
                                     QObject::tr("KO. \n" ""), QMessageBox::Cancel);


    }


void bouton_evenement::on_lineEdit_nomev_2_windowIconTextChanged(const QString &iconText)
{
    Evenement E;
    QString nom =ui->lineEdit_nomev_3->text();
    ui->tableView_4->setModel(E.recherche(nom));

}


void bouton_evenement::on_lineEdit_dateev_2_windowIconTextChanged(const QString &iconText)
{
    Evenement E;
    QString date =ui->lineEdit_nomev_4->text();
    ui->tableView_4->setModel(E.recherche1(date));
}

void bouton_evenement::on_lineEdit_sujetev_2_windowIconTextChanged(const QString &iconText)
{
    Evenement E;
    QString sujet =ui->lineEdit_nomev_4->text();
    ui->tableView_4->setModel(E.recherche(sujet));
}

void bouton_evenement::on_pushButton_clicked()
{
    ui->tableView_2->setModel(E.afficherselonnom());

}

void bouton_evenement::on_pushButton_2_clicked()
{
      ui->tableView_2->setModel(E.afficherselondate());
}

void bouton_evenement::on_pushButton_3_clicked()
{
    ui->tableView_2->setModel(E.afficherselonsujet());
}

void bouton_evenement::on_pushButton_modifierev_2_clicked()
{
    Evenement E;
       QString nom =ui->lineEdit_nomev_2->text();

       QString date =ui->lineEdit_dateev_2->text();
       QString sujet =ui->lineEdit_sujetev_2->text();


       bool test =E.modifier(nom,sujet,date);
       if(test)
       { ui->tableView_2->setModel(E.afficher());
           ui->tableView_4->setModel(E.afficher());

           QMessageBox::information(nullptr, QObject::tr("modification effectuer"),
                                    QObject::tr("OK \n" ""), QMessageBox::Cancel);
                             }
                        else
                        QMessageBox::critical(nullptr, QObject::tr("modification non effectuer"),
                                    QObject::tr("KO. \n" ""), QMessageBox::Cancel);


}
