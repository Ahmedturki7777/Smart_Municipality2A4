#include "bouton_espace.h"
#include "ui_bouton_espace.h"
#include"espace.h"

bouton_espace::bouton_espace(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_espace)
{
    ui->setupUi(this);
    show_tables();
    QPixmap pix3("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
        int w3 = ui->label_3->width();
        int h3 = ui->label_3->height();
        ui->label_3->setPixmap(pix3.scaled(w3,h3,Qt::IgnoreAspectRatio));

}

bouton_espace::~bouton_espace()
{
    delete ui;

}
QString bouton_espace::nom() const { //line edit

    return ui->lineEdit_nom->text();
}
QString bouton_espace::adress() const { //line edit

    return ui->lineEdit_adresse->text();
}
double bouton_espace::superficie() const{ //float

    return ui->doubleSpinBox_superficie->value();
}







void bouton_espace::on_ajouter_clicked()
{
    //ajout
    espace e(nom(),adress(),superficie());
    e.ajouter();
    show_tables();
}
void bouton_espace::show_tables(){

    //espace
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxy->setSourceModel(tmp.afficher());

 //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tableau->setModel(proxy);

    //monument

    //creation model (masque du tableau) : permet recherche et tri
        proxym = new QSortFilterProxyModel();

     //definir la source (tableau original)
     //   proxym->setSourceModel(tmpm.afficher());

     //pour la recherche
        proxym->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
        proxym->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
       //remplissage tableau avec le masque
      //  ui->tableView->setModel(proxym);

}




void bouton_espace::on_modifier_clicked()
{

    //mofication
  espace e(nom(),adress(),superficie());
  e.modifier(selected);
show_tables();
}

void bouton_espace::on_tableau_clicked(const QModelIndex &index)
{
    selected=ui->tableau->model()->data(index).toString();
}

void bouton_espace::on_supprimer_clicked()
{
    espace e;
  e.supprimer(selected);

   show_tables();
}

