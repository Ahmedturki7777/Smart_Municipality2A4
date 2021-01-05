#include "monument.h"

monument::monument()
{

}

monument::monument(int v,QString d,double p)
{
date=d;
prix=p;
valeur=v;
}

bool monument::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO MONUMENT_HISTORIQUE (DATE3,VALEUR,PRIX) "
                        "VALUES (:d, :v, :p)");
    query.bindValue(":d", date);
    query.bindValue(":v",valeur);
    query.bindValue(":p", prix);


    return    query.exec();

}

bool monument::modifier(int selected){

    QSqlQuery query;


    query.prepare(" UPDATE MONUMENT_HISTORIQUE SET DATE3= :date ,PRIX= :prix where VALEUR= :val");
    query.bindValue(":val", selected);
    query.bindValue(":date", date);
    query.bindValue(":prix", prix);


    return    query.exec();

}

QSqlQueryModel * monument::afficher(){

    QSqlQueryModel * modal=new QSqlQueryModel();
    modal->setQuery("SELECT VALEUR,DATE3,PRIX FROM MONUMENT_HISTORIQUE");

    return modal;

}

bool monument::supprimer(int selected){

    QSqlQuery query;
    query.prepare("Delete from MONUMENT_HISTORIQUE where VALEUR = :l ");
    query.bindValue(":l", selected);
    return    query.exec();


}
