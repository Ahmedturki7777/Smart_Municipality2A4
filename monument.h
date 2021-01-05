#ifndef MONUMENT_H
#define MONUMENT_H

#include <QSqlQuery>
#include <QSqlQueryModel>
//ahmed turki

class monument
{
public:
    monument();
     monument(int,QString,double);

    bool modifier(int);
    QSqlQueryModel * afficher();

bool supprimer(int);
    bool ajouter();

private:
    double prix;
    int valeur;
    QString date;
};

#endif // MONUMENT_H
