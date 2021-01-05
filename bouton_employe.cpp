#include "bouton_employe.h"
#include "ui_bouton_employe.h"
#include <QMessageBox>
#include <QApplication>

bouton_employe::bouton_employe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_employe)
{
    ui->setupUi(this);
    ui->tableView2->setModel(Etmp.afficher());
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
    ui->lineEdit_cin->setValidator(new QIntValidator(0,99999));
    ui->modifier_cin->setValidator(new QIntValidator(0,99999));
    ui->lineEdit_rcin->setValidator(new QIntValidator(0,99999));
    ui->lineEdit_rcin_2->setValidator(new QIntValidator(0,99999));
}

bouton_employe::~bouton_employe()
{
    delete ui;
}

bool bouton_employe::on_ajoutereButton_clicked()
{
    QString  nom= ui->lineEdit_nom->text();
    QString prenom =ui->lineEdit_prenom->text();
    QString  cin= ui->lineEdit_cin->text();
    QString date_de_naissance =ui->lineEdit_dn->text();
    QString  lieu_de_naissance= ui->lineEdit_ln->text();
    QString nationalite =ui->lineEdit_nationalite->text();
     QString rfid =ui->lineEdit_rfid->text();

   employe k(nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite,rfid);
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

bool bouton_employe::on_supprimereButton_clicked()
{QString  nom=ui->lineEdit_supprimere->text();
    bool test=Etmp.supprimer(nom);
    if(test)
    { ui->tableView2->setModel(Etmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                               QObject::tr("suppression effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

           }
            else
                  QMessageBox::critical(nullptr, QObject::tr("KO"),
                               QObject::tr("suppression non effectue\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

}










void bouton_employe::on_modifemployeButton_clicked()
{
    QString  nom= ui->modifier_nom->text();
    QString prenom =ui->modifier_prenom->text();
    QString  cin= ui->modifier_cin->text();
    QString date_de_naissance =ui->modifier_dn->text();
    QString  lieu_de_naissance= ui->modifier_ln->text();
    QString nationalite =ui->modifier_nationalite->text();
    QString rfid =ui->modifier_rfid->text();

    employe b(nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite,rfid);

            bool test=b.modifiere(nom);
            if(test)
            {
               ui->tableView2->setModel(Etmp.afficher());
                QMessageBox::information(nullptr, QObject::tr("modifié"),
                            QObject::tr("modifié avec succés.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
             else

                QMessageBox::critical(nullptr, QObject::tr("non modifié"),
                            QObject::tr("modification échouée.\n""Click Cancel to exit."), QMessageBox::Cancel);

}

void  bouton_employe::browse()
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
void   bouton_employe::sendMail()
{
    Smtp* smtp = new Smtp("wassim.hmouda@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("wassim.hmouda@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("wassim.hmouda@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   bouton_employe::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}






void bouton_employe::on_pushButton_pdf_2_clicked()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);
    ui->textEdit->print(&printer);
}


void bouton_employe::on_recherchernom_clicked()
{
    QString nom=ui->lineEdit_rechercher->text();
            ui->tableView2->setModel(Etmp.rechercher(nom));
}

void bouton_employe::on_rprenom_clicked()
{
    QString prenom=ui->lineEdit_rp->text();
            ui->tableView2->setModel(Etmp.rechercher_s(prenom));
}

void bouton_employe::on_rcin_clicked()
{

    QString cin=ui->lineEdit_rcin->text();
            ui->tableView2->setModel(Etmp.rechercher_s(cin));
}

void bouton_employe::on_recuButton_clicked()
{
    QString  nom= ui->lineEdit_n->text() ;
    QString prenom =ui->lineEdit_rcin_3->text();
   QString  CIN= ui->lineEdit_rcin_2->text();
    QString salaire =ui->lineEdit_s->text();

    ui->textEdit->setText("FICHE DE PAI") ;
    ui->textEdit->append("                         ") ;
    ui->textEdit->append("CIN :") ;
    ui->textEdit->append(CIN);
    ui->textEdit->append("==========================") ;
    ui->textEdit->append("Nom de l employe :") ;
    ui->textEdit->append(nom);
    ui->textEdit->append("Prenom de l employe :") ;
    ui->textEdit->append(prenom);
    ui->textEdit->append("==========================") ;
    ui->textEdit->append("**Salaire**") ;
    ui->textEdit->append(salaire);
}
