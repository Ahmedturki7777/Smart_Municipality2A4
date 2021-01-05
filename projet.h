#ifndef PROJET_H
#define PROJET_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Projet
{
    QString nom2,prenom2,nomprojet,email2,CIN2;
public:
    Projet(){};
    Projet(QString,QString,QString,QString,QString);
    QString getNom(){return nom2;}
    QString getPrenom(){return prenom2;}
    QString getNomProjet(){return nomprojet;}
    QString getEmail(){return email2;}
    QString getCIN(){return CIN2;}


    void setNom(QString nm){nom2=nm;}
    void setPrenom(QString pr){prenom2=pr;}
    void setNomLicense(QString np){nomprojet=np;}
    void setEmail(QString email){email=email2;}
    void setCIN(QString cin){CIN2=cin;}


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString,QString,QString,QString,QString);
    ~Projet(){}

};

#endif // PROJET_H
