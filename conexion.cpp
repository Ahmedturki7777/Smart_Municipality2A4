
#include "conexion.h"

#include <QMessageBox>




conexion::conexion()
{

}

bool conexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet");//inserer le nom de la source de données ODBC
db.setUserName("wassimm");//inserer nom de l'utilisateur
db.setPassword("5000");//inserer mot de passe de cet utilisateur

if (db.open())/*kkkk*/
test=true;





    return  test;
}

