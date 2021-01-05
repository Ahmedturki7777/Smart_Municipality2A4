#include "button_congee.h"
#include "ui_button_congee.h"
#include <QMessageBox>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <qdebug.h>
#include "congee.h"





button_congee::button_congee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::button_congee)
{
    ui->setupUi(this);
    ui->tableView_3->setModel(gtmp.afficher());


    QPixmap pix("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
        int w = ui->label_3->width();
        int h = ui->label_3->height();
        ui->label_5->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));
        QPixmap pix1("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
            int w1 = ui->label_4->width();
            int h1 = ui->label_4->height();
            ui->label_4->setPixmap(pix.scaled(w1,h1,Qt::IgnoreAspectRatio));
            QPixmap pix2("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
                int w2 = ui->label->width();
                int h2 = ui->label->height();
                ui->label->setPixmap(pix.scaled(w2,h2,Qt::IgnoreAspectRatio));

    connect(ui->sendBtn_2, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn_2, SIGNAL(clicked()), this, SLOT(browse()));
    ui->lineEdit_nc ->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_idc->setValidator(new QIntValidator(0,999));
    ui->lineEdit_pc->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_vc->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_nbc->setValidator(new QIntValidator(0,999));
    ui->lineEdit_nm ->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_idm->setValidator(new QIntValidator(0,999));
    ui->lineEdit_pm->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_vm->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_nbm->setValidator(new QIntValidator(0,999));
    ui->lineEdit_idmc->setValidator(new QIntValidator(0,999));
}

button_congee::~button_congee()
{
    delete ui;
}
void button_congee::on_pushButton_7_clicked()
{

    QString nom=ui->lineEdit_nc->text();
    QString prenom=ui->lineEdit_pc->text();
    QString vcongee=ui->lineEdit_vc->text();
    int nbr_abs=ui->lineEdit_nbc->text().toInt() ;
    int id=ui->lineEdit_idc->text().toInt() ;

    congee c (nom,prenom,vcongee,id,nbr_abs) ;

    bool test=c.ajouter() ;
    if(test)
    {
        ui->tableView_3->setModel(gtmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("ajouter"),
                    QObject::tr("ajout avec succes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("ajouter"),
                    QObject::tr("erreur d'ajout.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
void button_congee::on_pushButton_8_clicked()
{
    QString nom=ui->lineEdit_nm->text();
    QString prenom=ui->lineEdit_pm->text();
    QString vcongee=ui->lineEdit_vm->text();
    int nbr_abs=ui->lineEdit_nbm->text().toInt() ;
    int id=ui->lineEdit_idm->text().toInt() ;

    congee co ;

    bool test=co.modifier(nom,prenom,vcongee,id,nbr_abs) ;
    QMessageBox msBox;
    if(test)
    {
        ui->tableView_3->setModel(co.afficher());
        ui->tableView_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        msBox.setText("modification reussite");
        msBox.exec();
    }
    else
    {
        msBox.setText("ERREUR");
        msBox.exec();}
    ui->lineEdit_idm->clear();
    ui->lineEdit_nc->clear();
    ui->lineEdit_pc->clear();
    ui->lineEdit_vc->clear();
    ui->lineEdit_nbm->clear();

}

void button_congee::on_pushButton_9_clicked()
{
    int id=ui->lineEdit_idm->text().toInt() ;
    bool test=gtmp.supprimer(id) ;
    if(test)
    {
        ui->tableView_3->setModel(gtmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("suprimer"),
                    QObject::tr("supression effectue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("supprimer"),
                    QObject::tr("suppression non effectue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void button_congee::on_pushButton_17_clicked()
{
    QMessageBox msgBox ;
        QSqlQueryModel *model = new QSqlQueryModel();
        QString cod;
        cod = ui->lineEdit_idmc->text();
        model->setQuery("Select * from congee where id = '"+cod+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("vcongee"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("nb_abs"));
        ui->tableView_3->setModel(model);
        ui->tableView_3->show();
        msgBox.setText("employéé trouver ");
        msgBox.exec();
        ui->lineEdit_idmc->clear();
        QSqlQuery qry;
        qry.prepare("select * from congee where id='"+cod+"'  " );

        if(qry.exec())
        {
            while(qry.next())
            {
               ui->lineEdit_idm->setText(qry.value(0).toString());
               ui->lineEdit_nm->setText(qry.value(1).toString());
               ui->lineEdit_pm->setText(qry.value(2).toString());
               ui->lineEdit_vm->setText(qry.value(3).toString());
               ui->lineEdit_nbm->setText(qry.value(4).toString());



            }
        }
}

void button_congee::on_pushButton_11_clicked()
{
    QMessageBox msgBox ;
         QSqlQueryModel *model = new QSqlQueryModel();
               model->setQuery("select * from congee order by id ASC,nom");
               model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
               model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
               model->setHeaderData(3, Qt::Horizontal, QObject::tr("vcongee"));
               model->setHeaderData(4, Qt::Horizontal, QObject::tr("nb_abs"));
               ui->tableView_3->setModel(model);
               ui->tableView_3->show();
                msgBox.setText("Tri avec succés.");
                msgBox.exec();
}
void  button_congee::browse()
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

    ui->file_2->setText( fileListString );

}
void   button_congee::sendMail()
{
    Smtp* smtp = new Smtp("medslama.1945@gmail.com",ui->mail_pass_2->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("medslama.1945@gmail.com", ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->toPlainText(), files );
    else
        smtp->sendMail("medslama.1945@gmail.com", ui->rcpt_2->text() , ui->subject_2->text(),ui->msg_2->toPlainText());
}
void   button_congee::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt_2->clear();
    ui->subject_2->clear();
    ui->file_2->clear();
    ui->msg_2->clear();
    ui->mail_pass_2->clear();
}
