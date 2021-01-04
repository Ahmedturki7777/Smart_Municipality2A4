#ifndef congee_H
#define congee_H
#include<QString>
#include<QSqlQueryModel>

class congee
{
    QString nom, prenom , vcongee ;
    int id , nb_abs ;
public:
    congee(){};
    congee(QString,QString,QString,int,int);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int) ;
    bool modifier(QString, QString, QString,int,int);
    ~congee(){}
};

#endif // congee_H
