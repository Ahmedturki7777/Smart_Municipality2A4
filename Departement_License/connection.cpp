#include "connection.h"

Connection::Connection()
{
}

bool Connection::createconnect()
{
    db = QSqlDatabase::addDatabase("QODBC");

    bool test=false;
db.setDatabaseName("Source_projet2A");
db.setUserName("SEHS");//inserer nom de l'utilisateur
db.setPassword("051197");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
void Connection::closeconnection(){db.close();}
