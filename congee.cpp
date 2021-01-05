#include "congee.h"
#include<QSqlQuery>
#include <QSqlQueryModel>

congee::congee(QString nom , QString prenom , QString vcongee ,int id,int nb_abs )
{
    this->nom=nom;
    this->prenom=prenom;
    this->vcongee=vcongee;
    this->nb_abs=nb_abs;
    this->id=id;
}
bool congee::ajouter()
{
    QSqlQuery query;
    QString res =QString::number(id) ;
    query.prepare("insert into congee (nom , prenom,vcongee,nb_abs,id)"
                  " values(:nom, :prenom,:vcongee,:nb_abs,:id) ");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":vcongee",vcongee) ;
    query.bindValue(":nb_abs",nb_abs);
    query.bindValue(":id",res);
    return query.exec();
}
QSqlQueryModel * congee::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("select * from congee");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("vcongee"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("nb_abs"));
          return model;

}
bool congee::supprimer(int id)
{
    QSqlQuery query;
    QString res =QString::number(id) ;
    query.prepare("Delete from congee where id =:id");
    query.bindValue(":id",res);

    return    query.exec();
}
bool congee::modifier(QString nom, QString prenom, QString vcongee,int id, int nb_abs)
{

    QSqlQuery query;
    query.prepare("update congee set  nom = :nom , prenom = :prenom , vcongee =:vcongee , nb_abs = :nb_abs ,id =:id where id = :id ");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":vcongee", vcongee);
    query.bindValue(":nb_abs", nb_abs);
    query.bindValue(":id", id);
    return query.exec();
}

