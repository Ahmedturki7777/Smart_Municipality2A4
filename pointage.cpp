#include "pointage.h"
#include<QSqlQuery>
#include <QSqlQueryModel>

pointage::pointage(QString nom , QString prenom , QString date_d_entree , QString date_de_sortie , QString retard,int id )
{
    this->nom=nom;
    this->prenom=prenom;
    this->date_d_entree=date_d_entree;
    this->date_de_sortie=date_de_sortie;
    this->retard=retard;
    this->id=id;
}
bool pointage::ajouter()
{
    QSqlQuery query;
    QString res =QString::number(id) ;
    query.prepare("insert into pointage (nom , prenom,date_d_entree,date_de_sortie,retard,id)"
                  " values(:nom, :prenom,:date_d_entree,:date_de_sortie,:retard,:id) ");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":date_d_entree",date_d_entree);
    query.bindValue(":date_de_sortie",date_de_sortie);
    query.bindValue(":retard",retard);
    query.bindValue(":id",res);
    return query.exec();
}
QSqlQueryModel * pointage::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("select * from pointage");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_D_ENTREE"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_DE_SORTIE"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("RETARD"));
          return model;

}
bool pointage::supprimer(int id)
{
    QSqlQuery query;
    QString res =QString::number(id) ;
    query.prepare("Delete from pointage where id =:id");
    query.bindValue(":id",res);

    return    query.exec();
}
bool pointage::modifier(QString nom, QString prenom, QString date_d_entree, QString date_de_sortie, QString retard,int id)
{

    QSqlQuery query;
    query.prepare("update pointage set  nom = :nom , prenom = :prenom , date_d_entree =:date_d_entree , date_de_sortie = :date_de_sortie , retard = :retard ,id =:id where id = :id ");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":date_d_entree", date_d_entree);
    query.bindValue("date_de_sortie",date_de_sortie);
    query.bindValue(":retard", retard);
    query.bindValue(":id", id);
    return query.exec();
}

