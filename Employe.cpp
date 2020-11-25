#include "employe.h"

Employe::Employe()
{

}
Employe::Employe(QString a,QString b,QString c,QString d,QString e,QString f)
{
 this->nom=a;
 this->prenom=b;
 this->cin=c;
 this->date_de_naissance=d;
 this->lieu_de_naissance=e;
 this->nationalite=f;
}
bool Employe::ajouter()
{
return true ;
}
