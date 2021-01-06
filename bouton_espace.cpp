#include "bouton_espace.h"
#include "ui_bouton_espace.h"
#include"espace.h"
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>
#include "ui_dialog.h"
#include "dialog.h"
bouton_espace::bouton_espace(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_espace)
{
    ui->setupUi(this);
    show_tables();
    check=false ;
    QPixmap pix3("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
    ui->label_arduino->setText("empty");
        int w3 = ui->label_3->width();
        int h3 = ui->label_3->height();
        ui->label_3->setPixmap(pix3.scaled(w3,h3,Qt::IgnoreAspectRatio));
        int ret=A.connect_arduino();
            switch(ret){
            case(0):qDebug()<< "arduino is availble and connected to :"<< A.getarduino_port_name();
                break;
            case(1):qDebug()<< "arduino is availble but not connected to :"<< A.getarduino_port_name();
                break;
            case(-1):qDebug()<< "arduino is not availble";
            }
            QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));






}
void bouton_espace::update_label()
{
    data=A.read_from_arduino();
    QString DataAsString = QString(data);
   qDebug()<< data;
    if(data=="1"){
        check=!check;
    }

    if(check==false){
        ui->label_arduino->setText("IL Y A MOVEMENT");
    }else if (check==true){
        ui->label_arduino->setText("CLAIRE");
    }
    if(data=="1"){
        A.write_to_arduino("1");
    }else{
        A.write_to_arduino("0");
    }
}
bouton_espace::~bouton_espace()
{

    delete ui;

}
QString bouton_espace::nom() const { //line edit

    return ui->lineEdit_nom->text();
}
QString bouton_espace::adress() const { //line edit

    return ui->lineEdit_adresse->text();
}
double bouton_espace::superficie() const{ //float

    return ui->doubleSpinBox_superficie->value();
}
void bouton_espace::on_ajouter_clicked()
{
    //ajout
    espace e(nom(),adress(),superficie());
    e.ajouter();
    show_tables();
}
void bouton_espace::show_tables(){

    //espace
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxy->setSourceModel(tmp.afficher());

 //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tableau->setModel(proxy);

    //monument

    //creation model (masque du tableau) : permet recherche et tri
        proxym = new QSortFilterProxyModel();

     //definir la source (tableau original)
     //   proxym->setSourceModel(tmpm.afficher());

     //pour la recherche
        proxym->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
        proxym->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
       //remplissage tableau avec le masque
      //  ui->tableView->setModel(proxym);

}




void bouton_espace::on_modifier_clicked()
{

    //mofication
  espace e(nom(),adress(),superficie());
  e.modifier(selected);
show_tables();
}

void bouton_espace::on_tableau_clicked(const QModelIndex &index)
{
    selected=ui->tableau->model()->data(index).toString();
}

void bouton_espace::on_supprimer_clicked()
{
    espace e;
  e.supprimer(selected);

   show_tables();
}

void bouton_espace::on_pushButton_clicked()
{
    dialog x;
    x.exec();

}
