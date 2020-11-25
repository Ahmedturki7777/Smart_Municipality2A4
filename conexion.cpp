#include "conexion.h"
#include "ui_conexion.h"
#include <QMessageBox>




conexion::conexion()
{

}

bool conexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_projet2A");//inserer le nom de la source de données ODBC
db.setUserName("ahmed");//inserer nom de l'utilisateur
db.setPassword("ahmedaicha");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
