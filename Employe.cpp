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
{ QSqlQuery query;
    query.prepare("INSERT INTO tablee (nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite) VALUES (:nom, :prenom,:cin,:date_de_naissance,:lieu_de_naissance,:nationalite)");

    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin",cin);
    query.bindValue(":date_de_naissance", date_de_naissance);
    query.bindValue(":lieu_de_naissance",lieu_de_naissance);
    query.bindValue(":nationalite", nationalite);
    query.exec();

}
QSqlQueryModel * Employe::afficher()
{
QSqlQueryModel *model = new QSqlQueryModel () ;
model->setQuery("select * from tablee ") ;
model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom")) ;
model->setHeaderData(1,Qt::Horizontal,QObject::tr("prenom")) ;
model->setHeaderData(2,Qt::Horizontal,QObject::tr("cin")) ;
model->setHeaderData(3,Qt::Horizontal,QObject::tr("date_de_naissance")) ;
model->setHeaderData(4,Qt::Horizontal,QObject::tr("lieu_de_naissance")) ;
model->setHeaderData(5,Qt::Horizontal,QObject::tr("nationalite")) ;
return model;
}
bool Employe::supprimer(QString nom)
{
 QSqlQuery query;
 query.prepare("DELETE from tablee where nom=:nom");
 query.bindValue(":nom",nom);
 query.exec();
}
QSqlQueryModel *Employe::rechercher(QString name)
{
    QSqlQuery query;
    QSqlQueryModel * model1=new QSqlQueryModel();


    model1->setQuery("select * from tablee where nom LIKE '"+name+"%'");
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_naissance"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("lieu_de_naissance"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("nationalite"));


       return model1;

}


QSqlQueryModel *Employe::rechercher_s(QString surname)
{
    QSqlQuery query;
    QSqlQueryModel * model2=new QSqlQueryModel();


    model2->setQuery("select * from tablee where prenom LIKE '"+surname+"%'");
    model2->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model2->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model2->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model2->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_naissance"));
    model2->setHeaderData(4, Qt::Horizontal, QObject::tr("lieu_de_naissance"));
    model2->setHeaderData(5, Qt::Horizontal, QObject::tr("nationalite"));


       return model2;

}

QSqlQueryModel *Employe::rechercher_c(QString id)
{
    QSqlQuery query;
    QSqlQueryModel * model3=new QSqlQueryModel();


    model3->setQuery("select * from tablee where cin LIKE '"+id+"%'");
    model3->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model3->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model3->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model3->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_naissance"));
    model3->setHeaderData(4, Qt::Horizontal, QObject::tr("lieu_de_naissance"));
    model3->setHeaderData(5, Qt::Horizontal, QObject::tr("nationalite"));


       return model3;

}
bool Employe::modifiere(QString nm)
{
    QSqlQuery  query;

     query.prepare("update tablee set nom = :nm,prenom =:prenom,cin=:cin,date_de_naissance=:date_de_naissance,lieu_de_naissance=:lieu_de_naissance,nationalite=:nationalite where nom = :nm") ;
     query.bindValue(":nm",nm);
     query.bindValue(":prenom",prenom);
     query.bindValue(":cin",cin);
     query.bindValue(":date_de_naissance",date_de_naissance);
     query.bindValue(":lieu_de_naissance",lieu_de_naissance);
     query.bindValue(":nationalite",nationalite);


      query.exec();
}

