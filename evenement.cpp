#include "evenement.h"
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
//test
Evenement::Evenement(QString nom,QString sujet,QString date)
{ this->nom=nom;
    this->date=date;

    this->sujet=sujet;


}
bool Evenement::ajouter()
{
    QSqlQuery query;
          query.prepare("INSERT INTO evenement (nom, date1, sujet) "
                        "VALUES (:nom, :date1, :sujet)");
          query.bindValue(":nom", nom);
          query.bindValue(":date1",date);
          query.bindValue(":sujet", sujet);
       return   query.exec();



}


QSqlQueryModel * Evenement::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from evenement");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("sujet"));
     return model;
    }

bool Evenement::supprimer(QString date)
{
    QSqlQuery query;

    query.prepare("Delete from evenement where DATE1=:date1");
    query.bindValue(":date1",date);
    return query.exec();


}

bool Evenement::modifier(QString nom,QString sujet,QString date)
{
    QSqlQuery query;
   query.prepare("UPDATE EVENEMENT set date1='"+date+"', SUJET='"+sujet+"' where NOM='"+nom+"'");

     return   query.exec();


}

QSqlQueryModel * Evenement::recherche(QString nom)

{
    QSqlQueryModel *model=new QSqlQueryModel();

    model->setQuery("select * from evenement where NOM = '"+nom+"' ");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("sujet"));
     return model;
    }

QSqlQueryModel * Evenement::recherche1(QString date)

{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from evenement where DATE1 = date ");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("date"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("sujet"));
     return model;
    }
QSqlQueryModel* Evenement::afficherselonnom()// triii
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
   QSqlQuery *query=new QSqlQuery;
   query->prepare("select * from evenement ORDER BY NOM") ;
   query->exec() ;
   model->setQuery(*query) ;



return model;

}
QSqlQueryModel* Evenement::afficherselondate()// triii
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
   QSqlQuery *query=new QSqlQuery;
   query->prepare("select * from evenement ORDER BY DATE1") ;
   query->exec() ;
   model->setQuery(*query) ;



return model;

}

QSqlQueryModel* Evenement::afficherselonsujet()// triii
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
   QSqlQuery *query=new QSqlQuery;
   query->prepare("select * from evenement ORDER BY SUJET") ;
   query->exec() ;
   model->setQuery(*query) ;



return model;

}

