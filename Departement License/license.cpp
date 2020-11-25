#include "license.h"

tables::tables(QString nom,QString prenom ,QString nomlicense,QString email, int cin)

{
    this->nom=nom;
    this->prenom=prenom;
    CIN=cin;
    this->nomlicense=nomlicense;
    this->email=email;
}
bool tables::ajouter()
{
    QSqlQuery query;

    query.prepare("INSERT INTO CLIENT (cin, nom, prenom, nomlicense, email) "
                  "VALUES (:cin, :nom, :prenom, :nomlicense, :email)");
    query.bindValue(":cin", CIN);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":nomlicense", nomlicense);
    query.bindValue(":email", email);
    return query.exec();
}
QSqlQueryModel * tables::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select * from CLIENT");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("cin"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nom du license"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("mail"));


    return model;

}
bool tables::supprimer(int cin)
{
    QSqlQuery query;
    QString res=QString::number(cin);
    query.prepare("DELETE FROM CLIENT WHERE CIN= :cin");
    query.bindValue(":cin", res);
    return query.exec();
}

bool tables::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE CLIENT SET nom:=nom, prenom:=prenom, nomlicense:nomlicense, email:email WHERE CIN= :cin");
    query.bindValue(":cin", CIN);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":nomlicense", nomlicense);
    query.bindValue(":email", email);

    return query.exec();
}

