#include "Employe.h"


Employe::Employe(QString a,QString b,QString c/*,QString d,QString e,QString f,QString g,QString l,QString p*/)
{
 this->prenom=a;
    this->nom=b;
    this->cin=c;
   /* this->date_de_naissance=d;
    this->lieu_de_naissance=e;
    this->fonction=f;
    this->nationalite=g;
    this->login=l;
    this->password=p;*/
}
bool Employe::ajouter()
{

    QSqlQuery query;
    query.prepare("INSERT INTO person ( nom, prenom,cin) "
                  "VALUES (:nom, :prenom, :cin)");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin", cin);
    query.exec();
return query.exec();
}
//QSqlQueryModel *Etudiant::afficher();
