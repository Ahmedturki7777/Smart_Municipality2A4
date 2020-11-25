#include "profil.h"


Profil::Profil(QString login,QString password)
{
    this->login=login;
    this->password=password;
   }
bool Profil::ajouter()
{

    QSqlQuery query;
    query.prepare("INSERT INTO profil (login,password) "
                  "VALUES (:login, :password");

    query.bindValue(":login",login);
    query.bindValue(":password", password);
    query.exec();

    }
QSqlQueryModel * Profil::afficher()
{
QSqlQueryModel *model = new QSqlQueryModel () ;
model->setQuery("*select from profil") ;
model->setHeaderData(0,Qt::Horizontal,QObject::tr("login")) ;
model->setHeaderData(1,Qt::Horizontal,QObject::tr("password")) ;
return model;
}
bool Profil::supprimer(QString login)
{
/* query.prepare("Delete from Profil where login=:login");
 query.bindValue(:login);
 return query.exec();*/
}
