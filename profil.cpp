#include "profil.h"


Profil::Profil(QString login,QString password)
{
    this->login=login;
    this->password=password;
   }
bool Profil::ajouter()
{

    QSqlQuery query;
    query.prepare("insert into profil1 ( login,password) "
                  "values (:login, :password");

    query.bindValue(":login",login);
    query.bindValue(":password", password);
    return query.exec();

    }
