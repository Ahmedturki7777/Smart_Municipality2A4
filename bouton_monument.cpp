
#include "bouton_monument.h"
#include "ui_bouton_monument.h"
#include "fenetre2.h"
//ahmed turki


bouton_monument::bouton_monument(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bouton_monument)
{
    ui->setupUi(this);
    show_tables();
    QPixmap pix3("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
        int w3 = ui->label->width();
        int h3 = ui->label->height();
        ui->label->setPixmap(pix3.scaled(w3,h3,Qt::IgnoreAspectRatio));
}

bouton_monument::~bouton_monument()
{
    delete ui;
}
QString bouton_monument::date() const { //line edit

    return ui->dateEdit->date().toString("dd.MM.yyyy");
}
double bouton_monument::prix() const{ //float

    return ui->doubleSpinBox->value();
}
int bouton_monument::valeur() const { //int

    return ui->spinBox->value();
}

void bouton_monument::on_ajouter_2_clicked()
{
    //ajout
    monument e(valeur(),date(),prix());
    e.ajouter();
    show_tables();
    ui->spinBox->clear();
    ui->doubleSpinBox->clear();
    ui->dateEdit->clear();

}
void bouton_monument::show_tables(){

    //espace
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

 //definir la source (tableau original)
  //  proxy->setSourceModel(tmp.afficher());

 //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
  //  ui->tableau->setModel(proxy);

    //monument

    //creation model (masque du tableau) : permet recherche et tri
        proxym = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxym->setSourceModel(tmpm.afficher());

     //pour la recherche
        proxym->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
        proxym->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
       //remplissage tableau avec le masque
        ui->tableView->setModel(proxym);

}



void bouton_monument::on_modifer_2_clicked()
{
    //mofication
      monument m(valeur(),date(),prix());
      m.modifier(selectedm);
    show_tables();
}

void bouton_monument::on_supprimer_2_clicked()
{
    monument e;
  e.supprimer(selectedm);

   show_tables();
}

void bouton_monument::on_tableView_clicked(const QModelIndex &index)
{
   selectedm=ui->tableView->model()->data(index).toInt();

}

void bouton_monument::on_metier_clicked()
{
    fenetre2  f ;
       f.exec();

}
