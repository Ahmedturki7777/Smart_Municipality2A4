#include "projet.h"

Projet::Projet(QString nom2,QString prenom2 ,QString nomprojet,QString email2, QString cin2)

{
    this->nom2=nom2;
    this->prenom2=prenom2;
    this->CIN2=cin2;
    this->nomprojet=nomprojet;
    this->email2=email2;
}
bool Projet::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO projet (cin, nom, prenom, nomprojet, email) "
                  "VALUES (:cin, :nom, :prenom, :nomprojet, :email)");
    query.bindValue(":cin", CIN2);
    query.bindValue(":nom", nom2);
    query.bindValue(":prenom", prenom2);
    query.bindValue(":nomprojet", nomprojet);
    query.bindValue(":email", email2);
    return query.exec();
}
QSqlQueryModel * Projet::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from projet");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du projet"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));


    return model;

}
bool Projet::supprimer(QString cin)
{
    QSqlQuery query;
    QString res=cin;
    query.prepare("DELETE FROM projet WHERE CIN= :cin");
    query.bindValue(":cin", res);
    return query.exec();
}
bool Projet::modifier(QString nom,QString prenom ,QString nomprojet ,QString email ,QString cinn)
{
    QSqlQuery query;
    query.prepare("UPDATE projet SET nom='"+nom+"', prenom='"+prenom+"', nomprojet='"+nomprojet+"', email='"+email+"' WHERE CIN= '"+cinn+"' ");


    return query.exec();
}
