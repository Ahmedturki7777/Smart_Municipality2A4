#include "license.h"

license::license(QString nom,QString prenom ,QString nomlicense,QString email, QString cin)

{
    this->nom=nom;
    this->prenom=prenom;
    this->CIN=cin;
    this->nomlicense=nomlicense;
    this->email=email;
}
bool license::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO license (cin, nom, prenom, nomlicense, email) "
                  "VALUES (:cin, :nom, :prenom, :nomlicense, :email)");
    query.bindValue(":cin", CIN);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":nomlicense", nomlicense);
    query.bindValue(":email", email);
    return query.exec();
}
QSqlQueryModel * license::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from license");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du license"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));


    return model;

}
bool license::supprimer(QString cin)
{
    QSqlQuery query;
    QString res=cin;
    query.prepare("DELETE FROM license WHERE CIN= :cin");
    query.bindValue(":cin", res);
    return query.exec();
}

bool license::modifier(QString nom,QString prenom ,QString nomlicense ,QString email ,QString cinn)
{
    QSqlQuery query;
    query.prepare("UPDATE license SET nom='"+nom+"', prenom='"+prenom+"', nomlicense='"+nomlicense+"', email='"+email+"' WHERE CIN= '"+cinn+"' ");


    return query.exec();
}
