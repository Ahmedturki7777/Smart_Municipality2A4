#include "license_button.h"
#include "ui_license_button.h"
#include <QMessageBox>
#include "exportexcelobject.h"

license_button::license_button(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::license_button)
{
    ui->setupUi(this);
    ui->tableView_license->setModel(e.afficher());
    ui->lineEdit_CIN_license->setValidator(new QIntValidator(0,999999999));
    ui->lineEdit_Nom_license->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_Pr_license->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
}

license_button::~license_button()
{
    delete ui;

}

void license_button::on_pushButton_Ajouter_license_clicked()
{
    QString cin = ui->lineEdit_CIN_license->text();
    QString nom= ui->lineEdit_Nom_license->text();
    QString prenom= ui->lineEdit_Pr_license->text();
    QString nomlicense= ui->lineEdit_nl_license->text();
    QString email= ui->lineEdit_mail_license->text();

    license e(nom,prenom,nomlicense,email,cin);
    bool test=e.ajouter();
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView_license->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Ajout effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajout non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}



void license_button::on_pushButton_sup_clicked()
{
    QString cin= ui->lineEdit_CINsup_license->text();
    bool test=e.supprimer(cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }

    if(test)
    {
        ui->tableView_license->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Suppression effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Suppression non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void license_button::on_pushButton_rec_license_clicked()
{
    QMessageBox msgBox ;
    QSqlQueryModel *model = new QSqlQueryModel();
    QString cod;
    cod = ui->lineEdit_CINrec_license->text();
    model->setQuery("Select * from license where CIN = '"+cod+"' ");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du license"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));
    ui->tableView_license->setModel(model);
    ui->tableView_license->show();
    msgBox.setText("Dossier trouvé.");
    msgBox.exec();
    ui->lineEdit_CINrec_license->clear();
    QSqlQuery qry;
    qry.prepare("select * from license where CIN='"+cod+"'  " );
    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_CIN_license->setText(qry.value(0).toString());
            ui->lineEdit_Nom_license->setText(qry.value(1).toString());
            ui->lineEdit_Pr_license->setText(qry.value(2).toString());
            ui->lineEdit_nl_license->setText(qry.value(3).toString());
            ui->lineEdit_mail_license->setText(qry.value(4).toString());


        }
    }
}

void  license_button::browse()
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
void   license_button::sendMail()
{
    Smtp* smtp = new Smtp("hassen.ba.1997@gmail.com",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("hassen.ba.1997@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("hassen.ba.1997@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}

void   license_button::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void license_button::on_pushButton_quit_clicked()
{
    close();
}

void license_button::on_export_excel_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "license", ui->tableView_license);

    //colums to export
    obj.addField(0, "CIN", "char(20)");
    obj.addField(1, "nom", "char(20)");
    obj.addField(2, "prenom", "char(20)");
    obj.addField(3, "nomduprojet", "char(20)");
    obj.addField(4, "email", "char(20)");


    int retVal = obj.export2Excel();
    if( retVal > 0)
    {
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)
                                 );
    }
}

void license_button::on_pushButton_mod_license_2_clicked()
{
    QString cin = ui->lineEdit_CIN_license_2->text();
    QString nom= ui->lineEdit_Nom_license_2->text();
    QString prenom= ui->lineEdit_Pr_license_2->text();
    QString nomlicense= ui->lineEdit_nl_license_2->text();
    QString email= ui->lineEdit_mail_license_2->text();

    license e;
    bool test=e.modifier(nom,prenom,nomlicense,email,cin);
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    if(test)
    {
        ui->tableView_license->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Modification effectue"),
                    QObject::tr("OK.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Modification non effectue"),
                    QObject::tr("KO.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
