#ifndef PROFIL_H
#define PROFIL_H
#include<iostream>
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
using namespace std;

class Profil
    {private:
        QString login,password;


    public:
        Profil(){};

       Profil(QString,QString);
        void setlogin(QString a){login=a;}
        QString getlogin(){return login;}
        void setpassword(QString b){password=b;}
        QString getpassword(){return password;}
         bool ajouter();
QSqlQueryModel * afficher();
 bool supprimer(QString login);

};

#endif // PROFIL_H
