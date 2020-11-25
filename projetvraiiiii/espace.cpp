#include "espace.h"

espace::espace()
{

}

espace::espace(QString n,QString a,double s)
{
nom=n;
addr=a;
sup=s;
}

bool espace::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO ESPACE_PUBLIQUE (NOM,LOCALISATION,SUPERFICIE) "
                        "VALUES (:n, :l, :s)");
    query.bindValue(":n", nom);
    query.bindValue(":l",addr);
    query.bindValue(":s", sup);


    return    query.exec();

}

bool espace::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE ESPACE_PUBLIQUE SET NOM= :nom ,SUPERFICIE= :superficie where LOCALISATION= :localisation");
    query.bindValue(":localisation", selected);
    query.bindValue(":nom", nom);
    query.bindValue(":superficie", sup);


    return    query.exec();

}

QSqlQueryModel * espace::afficher(){

    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT LOCALISATION,NOM,SUPERFICIE FROM ESPACE_PUBLIQUE");

    return modal;

}

bool espace::supprimer(QString selected){

    QSqlQuery query;
    query.prepare("Delete from ESPACE_PUBLIQUE where LOCALISATION = :l ");
    query.bindValue(":l", selected);
    return    query.exec();


}
