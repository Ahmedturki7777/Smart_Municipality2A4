#ifndef EVENEMENT_H
#define EVENEMENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

//test
class Evenement
{ QString nom,sujet;
    QString date;
public:
    Evenement(){}
    Evenement(QString,QString,QString);
    QString getNom(){return nom;}
    QString getSujet(){return sujet;}
    QString getDate(){return date;}

    void setNom(QString nm){nom=nm;}
    void setSujet(QString suj){sujet=suj;}
     void setDate(QString Date){date=Date;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
     bool modifier(QString,QString,QString);
     QSqlQueryModel * recherche(QString nom);
 QSqlQueryModel * recherche1(QString date);
 QSqlQueryModel * afficherselonnom();
 QSqlQueryModel * afficherselondate();
 QSqlQueryModel * afficherselonsujet();






};

#endif // EVENEMENT_H

