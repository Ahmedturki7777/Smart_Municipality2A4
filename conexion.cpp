
#include "conexion.h"

#include <QMessageBox>




conexion::conexion()
{

}

bool conexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_projet2A");//inserer le nom de la source de données ODBC
db.setUserName("SEHS");//inserer nom de l'utilisateur
db.setPassword("051197");//inserer mot de passe de cet utilisateur

if (db.open())/*kkkk*/
test=true;





    return  test;
}

