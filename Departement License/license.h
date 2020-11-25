#ifndef TABLES_H
#define TABLES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class tables
{
    QString nom,prenom,nomlicense,email;
    int CIN;
public:
    tables(){};
    tables(QString,QString,QString,QString,int);
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getNomLicense(){return nomlicense;}
    QString getEmail(){return email;}
    int getCIN(){return CIN;}


    void setNom(QString nm){nom=nm;}
    void setPrenom(QString pr){prenom=pr;}
    void setNomLicense(QString nl){nomlicense=nl;}
    void setEmail(QString mail){mail=email;}
    void setCIN(int cin){CIN=cin;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier();

};

#endif // TABLES_H
