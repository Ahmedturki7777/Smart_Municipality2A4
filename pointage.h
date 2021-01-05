#ifndef pointage_H
#define pointage_H
#include<QString>
#include<QSqlQueryModel>

class pointage
{
    QString nom, prenom , date_d_entree , date_de_sortie , retard ;
    int id ;
public:
    pointage(){};
    pointage(QString,QString,QString,QString,QString,int);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int) ;
    bool modifier(QString, QString, QString, QString, QString,int);
    ~pointage(){}
};

#endif // pointage_H
