
#include "conexion.h"

#include <QMessageBox>




conexion::conexion()
{

}

bool conexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_de_donne");//inserer le nom de la source de données ODBC
db.setUserName("mohamed");//inserer nom de l'utilisateur
db.setPassword("123456.");//inserer mot de passe de cet utilisateur

if (db.open())/*kkkk*/
test=true;





    return  test;
}

