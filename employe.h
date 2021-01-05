#ifndef EMPLOYE_H
#define EMPLOYE_H

#include<QString>
#include<QSqlQueryModel>
#include<iostream>
#include<QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
using namespace std;
class employe
{private:
    QString nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite,rfid;
public:
    employe();
    employe(QString,QString,QString,QString,QString,QString,QString);
    void setnom(QString b){nom=b;}
    QString getnom(){return nom;}
    void setprenom(QString a){prenom=a;}
    QString getprenom(){return prenom;}

    void setcin(QString d){cin=d;}
    QString getcin(){return cin;}
    void setdate_de_naissance(QString c){date_de_naissance=c;}
    QString getdate_de_naissance(){return date_de_naissance;}
    void setlieu_de_naissance(QString c){lieu_de_naissance=c;}
    QString getlieu_de_naissance(){return lieu_de_naissance;}
    void setnationalite(QString c){nationalite=c;}
    QString getnationalite(){return nationalite;}
    void setrfid(QString c){rfid=c;}
    QString getrfid(){return rfid;}
    bool ajouter() ;
    QSqlQueryModel *afficher() ;
    bool supprimer(QString nom);
QSqlQueryModel *rechercher(QString name);
QSqlQueryModel *rechercher_s(QString surname);
QSqlQueryModel *rechercher_c(QString id);
bool modifiere(QString nm);

};

#endif // EMPLOYE_H
