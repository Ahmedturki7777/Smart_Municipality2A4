#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
class Employe
{QString nom,prenom,cin,date_de_naissance,lieu_de_naissance,fonction,nationalite,login,password;

public:
    Employe(){};
    Employe(QString,QString,QString/*,QString,QString,QString,QString,QString,QString*/);
    void setprenom(QString a){prenom=a;}
    QString getprenom(){return prenom;}
    void setnom(QString b){nom=b;}
    QString getnom(){return nom;}
    void setcin(QString d){cin=d;}
    QString getcin(){return cin;}
    /*void setdate_de_naissance(QString a){date_de_naissance=a;}
    QString getdate_de_naissance(){return date_de_naissance;}
    void setlieu_de_naissance(QString b){lieu_de_naissance=b;}
    QString getlieu_de_naissance(){return lieu_de_naissance;}
    void setfonctionn(QString c){fonction=c;}
    QString getfonction(){return fonction;}
    void setnationalite(QString d){nationalite=d;}
    QString getnationalite(){return nationalite;}
    void setlogin(QString c){login=c;}
    QString getlogin(){return login;}
    QString getpassword(){return password;}
    void setpassword(QString d){password=d;}*/

bool ajouter();
QSqlQueryModel * afficher();
};

#endif // EMPLOYE_H
