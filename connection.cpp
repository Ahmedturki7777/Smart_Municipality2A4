#include "connection.h"

Connection::Connection()
{
}

bool Connection::createconnect()
{bool test=false;
db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet");//inserer le nom de la source de données ODBC
db.setUserName("wassimm");//inserer nom de l'utilisateur
db.setPassword("5000");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
return  test;
}


void Connection::closeconnection()
{db.close();}



