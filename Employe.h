#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQueryModel>

class Employe
{private:
    QString nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite;
public:
    Employe();
    Employe(QString,QString,QString,QString,QString,QString);
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
    bool ajouter() ;
    QSqlQueryModel *afficher() ;
    bool supprimer(QString login);
};

#endif // EMPLOYE_H
