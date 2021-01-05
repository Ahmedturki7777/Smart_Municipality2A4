#ifndef ESPACE_H
#define ESPACE_H

#include <QSqlQuery>
#include <QSqlQueryModel>
//ahmed turki

class espace
{
public:
    espace();
    espace(QString,QString,double);
    bool modifier(QString);
    QSqlQueryModel * afficher();

bool supprimer(QString);
    bool ajouter();

    QString nom,addr;
    double sup;
};

#endif // ESPACE_H


