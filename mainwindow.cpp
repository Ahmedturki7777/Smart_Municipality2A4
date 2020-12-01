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
    ui->tableView2->setModel(Etmp.afficher());
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::on_ajouterp_Button_clicked()
{
    QString  login= ui->lineEdit_login->text();
    QString password =ui->lineEdit_password->text();

   Profil p(login,password);
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

bool MainWindow::on_ajoutereButton_clicked()
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
    { ui->tableView2->setModel(Etmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("ajout effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("ajout non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);


}
bool MainWindow::on_supprimerpButton_clicked()
{

   QString login=ui->lineEdit_supprimerp->text();
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

bool MainWindow::on_supprimereButton_clicked()
{QString  nom=ui->lineEdit_supprimere->text();
    bool test=Etmp.supprimer(nom);
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


void MainWindow::on_recuButton_clicked()
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

void MainWindow::on_rechercherButton_clicked()
{
    QString nom=ui->lineEdit_rechercher->text();
            ui->tableView2->setModel(Etmp.rechercher(nom));


}

void MainWindow::on_rprenomButton_clicked()
{
    QString prenom=ui->lineEdit_rp->text();
            ui->tableView2->setModel(Etmp.rechercher_s(prenom));


}

void MainWindow::on_rcinButton_clicked()
{
    QString cin=ui->lineEdit_rc->text();
            ui->tableView2->setModel(Etmp.rechercher_s(cin));
}

void MainWindow::on_modifier_profil_clicked()
{
    QString login= ui->modifier_login->text();
      QString password= ui->modifier_pasword->text();

      Profil a(login,password);

              bool test=a.modifierp(login);
              if(test)
              {
                 ui->tableView_2->setModel(Etmb.afficher());
                  QMessageBox::information(nullptr, QObject::tr("modifié"),
                              QObject::tr("modifié avec succés.\n" "Click Cancel to exit."), QMessageBox::Cancel);

              }
               else

                  QMessageBox::critical(nullptr, QObject::tr("modifié"),
                              QObject::tr("modification échouée.\n""Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_modifemployeButton_clicked()
{
    QString  nom= ui->lineEdit_mn->text();
    QString prenom =ui->lineEdit_mp->text();
    QString  cin= ui->lineEdit_mc->text();
    QString date_de_naissance =ui->lineEdit_md->text();
    QString  lieu_de_naissance= ui->lineEdit_ml->text();
    QString nationalite =ui->lineEdit_mn_2->text();

    Employe b(nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite);

            bool test=b.modifiere(nom);
            if(test)
            {
               ui->tableView2->setModel(Etmp.afficher());
                QMessageBox::information(nullptr, QObject::tr("modifié"),
                            QObject::tr("modifié avec succés.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
             else

                QMessageBox::critical(nullptr, QObject::tr("modifié"),
                            QObject::tr("modification échouée.\n""Click Cancel to exit."), QMessageBox::Cancel);


}
void  MainWindow::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   MainWindow::sendMail()
{
    Smtp* smtp = new Smtp("wassim.hmouda@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("wassim.hmouda@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("wassim.hmouda@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   MainWindow::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

