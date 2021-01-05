#include "reclamation.h"
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
//test

Reclamation::Reclamation(QString titre,QString sujet,QString date)
{ this->titre=titre;
 this->date=date;
    this->sujet=sujet;


}
bool Reclamation::ajouter()
{
    QSqlQuery query;

          query.prepare("INSERT INTO reclamation (titre, date1, sujet1) "
                        "VALUES (:titre, :date1, :sujet1)");
          query.bindValue(":titre", titre);
          query.bindValue(":date1", date);
          query.bindValue(":sujet1", sujet);
       return   query.exec();



}
QSqlQueryModel * Reclamation::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from reclamation");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("titre"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("sujet"));
     return model;
    }
bool Reclamation::supprimer(QString date)
{
    QSqlQuery query;

    query.prepare("Delete from reclamation where DATE1=:date1");
    query.bindValue(":date1",date);
    return query.exec();


}
bool Reclamation ::modifier (QString titre)
{
    QSqlQuery query;
   query.prepare("UPDATE reclamation set TITRE='"+titre+"', DATE1='"+date+"' where SUJET1='"+sujet+"'");
    query.bindValue(":titre",titre);
    query.bindValue(":date1",date);
    query.bindValue(":sujet1",sujet);
     return   query.exec();


}


