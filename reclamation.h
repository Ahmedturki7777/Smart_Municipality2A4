#ifndef RECLAMATION_H
#define RECLAMATION_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

//test
class Reclamation
{ QString titre,sujet;
    QString date;
public:
    Reclamation(){}
    Reclamation(QString,QString,QString);
    QString getTitre(){return titre;}
    QString getSujet(){return sujet;}
    QString getDate(){return date;}

    void setNom(QString tit){titre=tit;}
    void setSujet(QString suj){sujet=suj;}
     void setDate(QString dte){date=dte;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString );
};



#endif // RECLAMATION_H
