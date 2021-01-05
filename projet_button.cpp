#include "projet_button.h"
#include "ui_projet_button.h"
#include <QMessageBox>
projet_button::projet_button(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::projet_button)
{
    ui->setupUi(this);
    ui->tableView_projet->setModel(p.afficher());
    ui->lineEdit_CIN_projet->setValidator(new QIntValidator(0,999999999));
    ui->lineEdit_Nom_projet->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_Pr_projet->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));

}

projet_button::~projet_button()
{
    delete ui;
}



void projet_button::on_pushButton_Ajouter_projet_clicked()
{
    QString cin = ui->lineEdit_CIN_projet->text();
    QString nom= ui->lineEdit_Nom_projet->text();
    QString prenom= ui->lineEdit_Pr_projet->text();
    QString nomlicense= ui->lineEdit_nl_projet->text();
    QString email= ui->lineEdit_mail_projet->text();

    Projet p(nom,prenom,nomlicense,email,cin);
    bool test=p.ajouter();
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView_projet->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("Ajout effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajout non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void projet_button::on_pushButton_sup_projet_clicked()
{
    QString cin= ui->lineEdit_CINsup_projet->text();
    bool test=p.supprimer(cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }

    if(test)
    {
        ui->tableView_projet->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("Suppression effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Suppression non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void projet_button::on_pushButton_rec_projet_clicked()
{
    QMessageBox msgBox ;
    QSqlQueryModel *model = new QSqlQueryModel();
    QString cod;
    cod = ui->lineEdit_CINrec_projet->text();
    model->setQuery("Select * from projet where CIN = '"+cod+"' ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du projet"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));
    ui->tableView_projet->setModel(model);
    ui->tableView_projet->show();
    msgBox.setText("Dossier trouvé.");
    msgBox.exec();
    ui->lineEdit_CINrec_projet->clear();
    QSqlQuery qry;
    qry.prepare("select * from projet where CIN='"+cod+"'  " );
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_CIN_projet->setText(qry.value(0).toString());
            ui->lineEdit_Nom_projet->setText(qry.value(1).toString());
            ui->lineEdit_Pr_projet->setText(qry.value(2).toString());
            ui->lineEdit_nl_projet->setText(qry.value(3).toString());
            ui->lineEdit_mail_projet->setText(qry.value(4).toString());


        }
    }
}

void projet_button::on_pushButton_quit_projet_clicked()
{
    close();
}

void projet_button::on_pushButton_mod_projet_2_clicked()
{
    QString cin = ui->lineEdit_CIN_projet_2->text();
    QString nom= ui->lineEdit_Nom_projet_2->text();
    QString prenom= ui->lineEdit_Pr_projet_2->text();
    QString nomlicense= ui->lineEdit_nl_projet_2->text();
    QString email= ui->lineEdit_mail_projet_2->text();

    Projet p;
    bool test=p.modifier(nom,prenom,nomlicense,email,cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView_projet->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("Modification effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Modification non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}
