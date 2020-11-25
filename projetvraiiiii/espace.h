#ifndef ESPACE_H
#define ESPACE_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class espace
{
public:
    espace();
    espace(QString,QString,double);
    bool modifier(QString selected);
    QSqlQueryModel * afficher();

bool supprimer(QString);
    bool ajouter();

    QString nom,addr;
    double sup;
};

#endif // ESPACE_H
