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
    ui->tableView_2->setModel(p.afficher());
    QPixmap pixmap;
    pixmap.load("E:/qt/Departement_License/Departement_License/Resources/Background.jpg");

    //scaling the image, optional. See the documentation for more options
    pixmap = pixmap.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, pixmap);
    this->setPalette(palette);

    ui->pushButton_Ajouter->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_mod_2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_Ajouter_2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_sup->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_rec->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_print->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_quit->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_sup_2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_rec_2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_print_2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_quit2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 11pt Bahnschrift;");
    ui->pushButton_mod_3->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_Ajouter_2->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_3->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_4->setStyleSheet("border-image: url(:/new/prefix1/Resources/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");







    ui->lineEdit_CIN->setValidator(new QIntValidator(0,999999999));
    ui->lineEdit_Nom->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_Pr->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_CIN_2->setValidator(new QIntValidator(0,999999999));
    ui->lineEdit_Nom_2->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_Pr_2->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));




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
    QString cin = ui->lineEdit_CIN->text();
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
    QString cin= ui->lineEdit_CINsup->text();
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
    QString cin = ui->lineEdit_CIN->text();
    QString nom= ui->lineEdit_Nom->text();
    QString prenom= ui->lineEdit_Pr->text();
    QString nomlicense= ui->lineEdit_nl->text();
    QString email= ui->lineEdit_mail->text();

    tables e;
    bool test=e.modifier(nom,prenom,nomlicense,email,cin);
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

void MainWindow::on_pushButton_rec_clicked()
{
    QMessageBox msgBox ;
    QSqlQueryModel *model = new QSqlQueryModel();
    QString cod;
    cod = ui->lineEdit_CINrec->text();
    model->setQuery("Select * from CLIENT where CIN = '"+cod+"' ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du license"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));
    ui->tableView->setModel(model);
    ui->tableView->show();
    msgBox.setText("Dossier trouvé.");
    msgBox.exec();
    ui->lineEdit_CINrec->clear();
    QSqlQuery qry;
    qry.prepare("select * from CLIENT where CIN='"+cod+"'  " );
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_CIN->setText(qry.value(0).toString());
            ui->lineEdit_Nom->setText(qry.value(1).toString());
            ui->lineEdit_Pr->setText(qry.value(2).toString());
            ui->lineEdit_nl->setText(qry.value(3).toString());
            ui->lineEdit_mail->setText(qry.value(4).toString());


        }
    }
}

void MainWindow::on_pushButton_Ajouter_2_clicked()
{
    QString cin = ui->lineEdit_CIN_2->text();
    QString nom= ui->lineEdit_Nom_2->text();
    QString prenom= ui->lineEdit_Pr_2->text();
    QString nomlicense= ui->lineEdit_nl_2->text();
    QString email= ui->lineEdit_mail_2->text();

    Projet p(nom,prenom,nomlicense,email,cin);
    bool test=p.ajouter();
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView_2->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("Ajout effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajout non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}



void MainWindow::on_pushButton_sup_2_clicked()
{
    QString cin= ui->lineEdit_CINsup_2->text();
    bool test=p.supprimer(cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }

    if(test)
    {
        ui->tableView_2->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("Suppression effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Suppression non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_rec_2_clicked()
{
    QMessageBox msgBox ;
    QSqlQueryModel *model = new QSqlQueryModel();
    QString cod;
    cod = ui->lineEdit_CINrec_2->text();
    model->setQuery("Select * from projet where CIN = '"+cod+"' ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du projet"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));
    ui->tableView_2->setModel(model);
    ui->tableView_2->show();
    msgBox.setText("Dossier trouvé.");
    msgBox.exec();
    ui->lineEdit_CINrec->clear();
    QSqlQuery qry;
    qry.prepare("select * from projet where CIN='"+cod+"'  " );
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_CIN_2->setText(qry.value(0).toString());
            ui->lineEdit_Nom_2->setText(qry.value(1).toString());
            ui->lineEdit_Pr_2->setText(qry.value(2).toString());
            ui->lineEdit_nl_2->setText(qry.value(3).toString());
            ui->lineEdit_mail_2->setText(qry.value(4).toString());


        }
    }
}

void MainWindow::on_pushButton_mod_3_clicked()
{
    QString cin = ui->lineEdit_CIN_2->text();
    QString nom= ui->lineEdit_Nom_2->text();
    QString prenom= ui->lineEdit_Pr_2->text();
    QString nomlicense= ui->lineEdit_nl_2->text();
    QString email= ui->lineEdit_mail_2->text();

    tables e;
    bool test=p.modifier(nom,prenom,nomlicense,email,cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView->setModel(p.afficher());

        QMessageBox::information(nullptr, QObject::tr("Modification effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Modification non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

