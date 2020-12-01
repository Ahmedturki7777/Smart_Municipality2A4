#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QTime>
#include "pointage.h"
#include<QSqlQuery>
#include <QPrinter>
#include <QPrintDialog>
#include "smtp.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) ,
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmp.afficher());
    QPixmap pix("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ss.png");
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));
        QPixmap pixa("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/job.png");
            int wa = ui->label_39->width();
            int ha= ui->label_39->height();
            ui->label_39->setPixmap(pixa.scaled(wa,ha,Qt::IgnoreAspectRatio));
            QPixmap pixe("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/job.png");
                int we = ui->label_40->width();
                int he= ui->label_40->height();
                ui->label_40->setPixmap(pixe.scaled(we,he,Qt::IgnoreAspectRatio));

            QPixmap pix2("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/icon_add.png");
                int w2 = ui->label_3->width();
                int h2 = ui->label_3->height();
                ui->label_3->setPixmap(pix2.scaled(w2,h2,Qt::IgnoreAspectRatio));
                QPixmap pix3("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/icon_add.png");
                    int w3 = ui->label_6->width();
                    int h3 = ui->label_6->height();
                    ui->label_6->setPixmap(pix3.scaled(w3,h3,Qt::IgnoreAspectRatio));
                QPixmap pix30("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/more.png");
                    int w30 = ui->label_4->width();
                    int h30 = ui->label_4->height();
                    ui->label_4->setPixmap(pix30.scaled(w30,h30,Qt::IgnoreAspectRatio));
ui->pushButton->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_9->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_8->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_11->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_12->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_13->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_14->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
ui->pushButton_15->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");


QPixmap pix4("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ss.png");
    int w4 = ui->label_5->width();
    int h4 = ui->label_5->height();
    ui->label_5->setPixmap(pix4.scaled(w4,h4,Qt::IgnoreAspectRatio));
    ui->pushButton_2->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_3->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_7->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_10->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");


 ui->lineEdit_19->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 20pt Bahnschrift;");
 ui->lineEdit_22->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 20pt Bahnschrift;");


     QPixmap pix7("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/icon_edit.png");
         int w7 = ui->label_19->width();
         int h7 = ui->label_19->height();
         ui->label_19->setPixmap(pix7.scaled(w7,h7,Qt::IgnoreAspectRatio));
         QPixmap pix77("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/checked.png");
             int w77 = ui->label_2->width();
             int h77 = ui->label_2->height();
             ui->label_2->setPixmap(pix77.scaled(w77,h77,Qt::IgnoreAspectRatio));

         QPixmap pix70("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/icon_edit.png");
             int w70 = ui->label_27->width();
             int h70 = ui->label_27->height();
             ui->label_27->setPixmap(pix70.scaled(w70,h70,Qt::IgnoreAspectRatio));

         QPixmap pix8("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/checked.png");
             int w8 = ui->label_20->width();
             int h8 = ui->label_20->height();
             ui->label_20->setPixmap(pix8.scaled(w8,h8,Qt::IgnoreAspectRatio));
             QPixmap pix9("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/cancel.png");
                 int w9 = ui->label_21->width();
                 int h9 = ui->label_21->height();
                 ui->label_21->setPixmap(pix9.scaled(w9,h9,Qt::IgnoreAspectRatio));
                 QPixmap pix90("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/cancel.png");
                     int w90 = ui->label_28->width();
                     int h90 = ui->label_28->height();
                     ui->label_28->setPixmap(pix90.scaled(w90,h90,Qt::IgnoreAspectRatio));
                 QPixmap pix10("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ss.png");
                     int w10 = ui->label_22->width();
                     int h10 = ui->label_22->height();
                     ui->label_22->setPixmap(pix10.scaled(w10,h10,Qt::IgnoreAspectRatio));

                     ui->pushButton_4->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
                     QPixmap pix11("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/more.png");
                         int w11 = ui->label_26->width();
                         int h11 = ui->label_26->height();
                         ui->label_26->setPixmap(pix11.scaled(w11,h11,Qt::IgnoreAspectRatio));



                                     ui->pushButton_5->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
                                     ui->pushButton_6->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");

                                             QPixmap pix17("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ss.png");
                                                 int w17 = ui->label_34->width();
                                                 int h17 = ui->label_34->height();
                                                 ui->label_34->setPixmap(pix17.scaled(w17,h17,Qt::IgnoreAspectRatio));


       //QSound::play("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/الهادي جويني   حبي يتبدل يتجدد.wav") ;
ui->lineEdit_19->setText(QTime::currentTime().toString());
ui->lineEdit_22->setText(QTime::currentTime().toString());

connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QString nom=ui->lineEdit->text();
    QString prenom=ui->lineEdit_2->text();
    QString date_d_entree=ui->lineEdit_3->text();
    QString date_de_sortie=ui->lineEdit_4->text();
    QString retard=ui->lineEdit_5->text() ;
    int id=ui->lineEdit_6->text().toInt() ;

    pointage p (nom,prenom,date_d_entree,date_de_sortie,retard,id) ;

    bool test=p.ajouter() ;
    if(test)
    {
        ui->tableView->setModel(tmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("ajouter"),
                    QObject::tr("ajout avec succes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("ajouter"),
                    QObject::tr("erreur d'ajout.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_3_clicked()
{
    int id=ui->lineEdit_18->text().toInt() ;
    bool test=tmp.supprimer(id) ;
    if(test)
    {
        ui->tableView->setModel(tmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("suprimer"),
                    QObject::tr("supression effectue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("supprimer"),
                    QObject::tr("suppression non effectue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pushButton_2_clicked()
{
    QString nom=ui->lineEdit_13->text();
    QString prenom=ui->lineEdit_14->text();
    QString date_d_entree=ui->lineEdit_15->text();
    QString date_de_sortie=ui->lineEdit_16->text();
    QString retard=ui->lineEdit_17->text() ;
    int id=ui->lineEdit_18->text().toInt() ;

    pointage po ;
    bool test=po.modifier(nom,prenom,date_d_entree,date_de_sortie,retard,id) ;
    QMessageBox msBox;
    if(test)
    {
        ui->tableView->setModel(po.afficher());
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        msBox.setText("modification reussite");
        msBox.exec();
    }
    else
    {
        msBox.setText("ERREUR");
        msBox.exec();}
    ui->lineEdit_13->clear();
    ui->lineEdit_14->clear();
    ui->lineEdit_15->clear();
    ui->lineEdit_16->clear();
    ui->lineEdit_17->clear();
    ui->lineEdit_18->clear();


}

void MainWindow::on_pushButton_8_clicked()
{
    QMessageBox msgBox ;
        ui->pushButton_8->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
        QSqlQueryModel *model = new QSqlQueryModel();
        QString cod;
        cod = ui->lineEdit_20->text();
        model->setQuery("Select * from pointage where id = '"+cod+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_d_entree"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_sortie"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("retard"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("id"));
        ui->tableView->setModel(model);
        ui->tableView->show();
        msgBox.setText("Dossier trouvé.");
        msgBox.exec();
        ui->lineEdit_20->clear();
        QSqlQuery qry;
        qry.prepare("select * from pointage where id='"+cod+"'  " );

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->lineEdit_13->setText(qry.value(0).toString());
                ui->lineEdit_14->setText(qry.value(1).toString());
                ui->lineEdit_15->setText(qry.value(2).toString());
                ui->lineEdit_16->setText(qry.value(3).toString());
                ui->lineEdit_17->setText(qry.value(4).toString());
                ui->lineEdit_18->setText(qry.value(5).toString());



            }
        }
}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox msgBox ;
        ui->pushButton_7->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
         QSqlQueryModel *model = new QSqlQueryModel();
               model->setQuery("select * from pointage order by id ASC,nom");
               model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
               model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_d_entree"));
               model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_sortie"));
               model->setHeaderData(4, Qt::Horizontal, QObject::tr("retard"));
               model->setHeaderData(5, Qt::Horizontal, QObject::tr("id"));
               ui->tableView->setModel(model);
               ui->tableView->show();
                msgBox.setText("Tri avec succés.");
                msgBox.exec();
}

void MainWindow::on_pushButton_15_clicked()
{
    QPrinter printer ;
    printer.setPrinterName("epson printer");
    QPrintDialog dialog(&printer,this) ;
    if ( dialog.exec() == QDialog::Rejected ) return  ;

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
    Smtp* smtp = new Smtp("mohamed.slama1@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("mohamed.slama1@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("mohamed.slama1@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
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
