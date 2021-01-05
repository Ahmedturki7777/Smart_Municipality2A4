#include "button_pointage.h"
#include "pointage.h"
#include "ui_button_pointage.h"
#include <QMessageBox>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPrinter>
#include <QPrintDialog>
#include<QTime>
#include <QTimer>
#include <qdebug.h>

button_pointage::button_pointage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::button_pointage)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmp.afficher());
    int ret = A.connnect_arduino() ;
    switch (ret) {
    case (0) : qDebug ()<<"arduinois available and connected to:"<<A.getArduino_port_name() ;
        break ;
    case(1) : qDebug () <<"arduino is available but not connected to : "<<A.getArduino_port_name() ;
        break ;
     case(-1) : qDebug ()<<"arduino is not available" ;

    }

    QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(pointer()));

    ui->lineEdit_2->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_6->setValidator(new QIntValidator(0,999));
    ui->lineEdit_3->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_13->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_14->setValidator(new QRegExpValidator(QRegExp("[A-Za-z_ ]{0,20}"),this));
    ui->lineEdit_18->setValidator(new QIntValidator(0,999));
    ui->lineEdit_20->setValidator(new QIntValidator(0,999));
}

button_pointage::~button_pointage()
{
    delete ui;
}

void button_pointage::on_pushButton_2_clicked()
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
void button_pointage::on_pushButton_3_clicked()
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
void button_pointage::on_pushButton_8_clicked()
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
        msgBox.setText("employee trouver");
        msgBox.exec();
        ui->lineEdit_20->clear();
        QSqlQuery qry;
        qry.prepare("select * from pointage where id='"+cod+"'  " );

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->lineEdit_13->setText(qry.value(1).toString());
                ui->lineEdit_14->setText(qry.value(2).toString());
                ui->lineEdit_15->setText(qry.value(3).toString());
                ui->lineEdit_16->setText(qry.value(4).toString());
                ui->lineEdit_17->setText(qry.value(5).toString());
                ui->lineEdit_18->setText(qry.value(0).toString());



            }
        }
}
void button_pointage::on_pushButton_7_clicked()
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
void button_pointage::on_pushButton_15_clicked()
{
    QPrinter printer ;
    printer.setPrinterName("epson printer");
    QPrintDialog dialog(&printer,this) ;
    if ( dialog.exec() == QDialog::Rejected ) return  ;
    ui->textEdit->print(&printer) ;
}
void button_pointage :: pointer(){

    QString rfid , rfid1 , nom , prenom ,final,cin,idd,retardd,dtsortie;
    QDateTime date_sortie,dt;

    rfid=A.read_from_arduino() ;
    rfid.lastIndexOf(",") ;
    rfid1 = rfid.left(rfid.lastIndexOf(",")) ;

    QSqlQuery qry;
    qry.prepare("select nom,prenom,cin from client where rfid=?" );
    qry.bindValue(0,rfid1);
    if(qry.exec())
    {
        qry.first();
        if(!qry.isNull(0)){
  nom= qry.value(0).toString() ;
  prenom=qry.value(1).toString() ;
  cin=qry.value(2).toString() ;
    }
    }

    final=nom+" "+prenom;
    if(final.length()>1){
    std::string str=final.toStdString();
   const char* p=str.c_str();
  A.getserial()->write(p);
    QSqlQuery qry1;
QString cin1,date;
   qry1.prepare("select date_d_entree,cin,date_de_sortie from pointage where (TRUNC(date_d_entree)=? and cin=?)" );
   qry1.bindValue(0,QDateTime::currentDateTime().date());
  qry1.bindValue(1,cin);

   if(qry1.exec())
   {
       qry1.first();

       cin1=qry1.value(1).toString();
       date=qry1.value(0).toString();
       dtsortie=qry1.value(2).toString();
}

       if(cin1.isNull()){
           qry.prepare("insert into pointage (id,nom,prenom,date_d_entree,cin,retard) values(?,?,?,?,?,?)" );

           idd=QString::number(rand() %1000+1);
           qry.bindValue(0,idd);
           qry.bindValue(1,nom);
           qry.bindValue(2,prenom);
           dt=QDateTime::currentDateTime();
           QTime time = QTime::fromString("09.00.00", "h.m.s");
           qry.bindValue(3,dt);
           qry.bindValue(4,cin);
           if(dt.time().operator>(time)){
               retardd="OUI";
           qry.bindValue(5,retardd);
           }else{
               retardd="NON";
           qry.bindValue(5,retardd);}
           qry.exec();
           ui->lineEdit->setText(nom);
           ui->lineEdit_2->setText   (prenom);
           ui->lineEdit_3->setText(dt.toString("dd/MM/yyyy hh:mm:ss"));
           ui->lineEdit_5->setText(retardd);
           ui->lineEdit_6->setText(idd);
      } else{

            if(dtsortie.isNull()){
          // qDebug () << "insertion "+date;
           qry.prepare("UPDATE pointage set date_de_sortie=? where (cin=? and TRUNC(date_d_entree)=?)" );
           date_sortie=QDateTime::currentDateTime();
           qry.bindValue(0,date_sortie);
          // qDebug () <<QDateTime::currentDateTime();
           qry.bindValue(1,cin1);
          qry.bindValue(2,QDate::currentDate());
           qry.exec();

           ui->lineEdit_4->setText(date_sortie.toString("dd/MM/yyyy hh:mm:ss"));
}

       }


    ui->tableView->setModel(tmp.afficher());






  final="";
  nom="";
  prenom="";
    }



}


