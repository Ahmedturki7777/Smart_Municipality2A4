
#include "employe.h"



employe::employe()
{

}
employe::employe(QString a,QString b,QString c,QString d,QString e,QString f,QString g)
{
 this->nom=a;
 this->prenom=b;
 this->cin=c;
 this->date_de_naissance=d;
 this->lieu_de_naissance=e;
 this->nationalite=f;
 this->rfid=g;
}
bool employe::ajouter()
{ QSqlQuery query;
    query.prepare("INSERT INTO employe (nom,prenom,cin,date_de_naissance,lieu_de_naissance,nationalite,rfid) VALUES (:nom, :prenom,:cin,:date_de_naissance,:lieu_de_naissance,:nationalite,:rfid)");

    query.bindValue(":nom",nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin",cin);
    query.bindValue(":date_de_naissance", date_de_naissance);
    query.bindValue(":lieu_de_naissance",lieu_de_naissance);
    query.bindValue(":nationalite", nationalite);
     query.bindValue(":rfid",rfid);
    query.exec();

}
QSqlQueryModel * employe::afficher()
{
QSqlQueryModel *model = new QSqlQueryModel () ;
model->setQuery("select * from employe ") ;
model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom")) ;
model->setHeaderData(1,Qt::Horizontal,QObject::tr("prenom")) ;
model->setHeaderData(2,Qt::Horizontal,QObject::tr("cin")) ;
model->setHeaderData(3,Qt::Horizontal,QObject::tr("date_de_naissance")) ;
model->setHeaderData(4,Qt::Horizontal,QObject::tr("lieu_de_naissance")) ;
model->setHeaderData(5,Qt::Horizontal,QObject::tr("nationalite"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("rfid")) ;
return model;
}
bool employe::supprimer(QString nom)
{
 QSqlQuery query;
 query.prepare("DELETE from employe where nom=:nom");
 query.bindValue(":nom",nom);
 query.exec();
}
QSqlQueryModel *employe::rechercher(QString name)
{
    QSqlQuery query;
    QSqlQueryModel * model1=new QSqlQueryModel();


    model1->setQuery("select * from employe where nom LIKE '"+name+"%'");
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_naissance"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("lieu_de_naissance"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("nationalite"));


       return model1;

}


QSqlQueryModel *employe::rechercher_s(QString surname)
{
    QSqlQuery query;
    QSqlQueryModel * model2=new QSqlQueryModel();


    model2->setQuery("select * from employe where prenom LIKE '"+surname+"%'");
    model2->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model2->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model2->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model2->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_naissance"));
    model2->setHeaderData(4, Qt::Horizontal, QObject::tr("lieu_de_naissance"));
    model2->setHeaderData(5, Qt::Horizontal, QObject::tr("nationalite"));


       return model2;

}

QSqlQueryModel *employe::rechercher_c(QString id)
{
    QSqlQuery query;
    QSqlQueryModel * model3=new QSqlQueryModel();


    model3->setQuery("select * from employe where cin LIKE '"+id+"%'");
    model3->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model3->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model3->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model3->setHeaderData(3, Qt::Horizontal, QObject::tr("date_de_naissance"));
    model3->setHeaderData(4, Qt::Horizontal, QObject::tr("lieu_de_naissance"));
    model3->setHeaderData(5, Qt::Horizontal, QObject::tr("nationalite"));


       return model3;

}
bool employe::modifiere(QString nm)
{
    QSqlQuery  query;

     query.prepare("update employe set nom = :nm,prenom =:prenom,cin=:cin,date_de_naissance=:date_de_naissance,lieu_de_naissance=:lieu_de_naissance,nationalite=:nationalite,rfid=:rfid where nom = :nm") ;
     query.bindValue(":nm",nm);
     query.bindValue(":prenom",prenom);
     query.bindValue(":cin",cin);
     query.bindValue(":date_de_naissance",date_de_naissance);
     query.bindValue(":lieu_de_naissance",lieu_de_naissance);
     query.bindValue(":nationalite",nationalite);
      query.bindValue(":rfid",rfid);


      query.exec();
}


