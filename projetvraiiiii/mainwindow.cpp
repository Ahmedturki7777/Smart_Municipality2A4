#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fenetre2.h"
#include "conexion.h"
#include "espace.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    conexion c;
c.createconnect();

    ui->setupUi(this);
    show_tables();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_quitter_clicked()
{
   close ();
}

void MainWindow::on_metier_clicked()
{
 fenetre2  f ;
    f.exec();

}

QString MainWindow::nom() const { //line edit

    return ui->lineEdit_nom->text();
}

QString MainWindow::adress() const { //line edit

    return ui->lineEdit_adresse->text();
}

double MainWindow::superficie() const{ //float

    return ui->doubleSpinBox_superficie->value();
}

void MainWindow::on_ajouter_clicked()
{
    //ajout
    espace e(nom(),adress(),superficie());
    e.ajouter();
    show_tables();

}

void MainWindow::on_modifier_clicked()
{




      //mofication
    espace e(nom(),adress(),superficie());
    e.modifier(selected);
show_tables();


}

void MainWindow::show_tables(){
//creation model (masque du tableau) : permet recherche et tri
    proxy = new QSortFilterProxyModel();

 //definir la source (tableau original)
    proxy->setSourceModel(tmp.afficher());

 //pour la recherche
    proxy->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)
    proxy->setFilterKeyColumn(-1); // chercher dans tout le tableau (-1) ou donner le numero de la colone
   //remplissage tableau avec le masque
    ui->tableau->setModel(proxy);

}

void MainWindow::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from ESPACE_PUBLIQUE where LOCALISATION= :i");
    query.bindValue(":i", selected);
    query.exec();
    while(query.next()){
         ui->lineEdit_adresse->setText(query.value(0).toString()); //line edit
         ui->lineEdit_nom->setText(query.value(1).toString()); //line edit
     ui->doubleSpinBox_superficie->setValue(query.value(2).toReal()); // reel

    }

}



void MainWindow::on_tableau_clicked(const QModelIndex &index)
{
    selected=ui->tableau->model()->data(index).toString();
}

void MainWindow::on_pushButton_clicked()
{
        fill_form(selected);
}

void MainWindow::on_supprimer_clicked()
{
    espace e;
  e.supprimer(selected);

   show_tables();
}
