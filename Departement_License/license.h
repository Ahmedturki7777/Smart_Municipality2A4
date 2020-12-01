#ifndef TABLES_H
#define TABLES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class tables
{
    QString nom,prenom,nomlicense,email,CIN;
public:
    tables(){};
    tables(QString,QString,QString,QString,QString);
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getNomLicense(){return nomlicense;}
    QString getEmail(){return email;}
    QString getCIN(){return CIN;}


    void setNom(QString nm){nom=nm;}
    void setPrenom(QString pr){prenom=pr;}
    void setNomLicense(QString nl){nomlicense=nl;}
    void setEmail(QString mail){mail=email;}
    void setCIN(QString cin){CIN=cin;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString,QString,QString,QString,QString);
    ~tables(){}

};

#endif // TABLES_H
