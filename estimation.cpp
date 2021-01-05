#include "estimation.h"
#include "ui_estimation.h"
//ahmed turki

estimation::estimation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estimation)
{
    ui->setupUi(this);
}

estimation::~estimation()
{
    delete ui;
}

QString estimation::add_combo() const { //combo box

    return ui->comboBox->currentText();
}


void estimation::on_comboBox_currentTextChanged(const QString &arg1)
{   QString aw="prix < 3000 € ,  -20 ans , pas de grande valeure ";
    QString sj="9000€ , 30 ans , de valeur ";
    QString b="1 M€ , 60 ans , valeure inestimable ";
   if (add_combo()=="apple watch"){
       QPixmap pix(":/new/prefix1/ressource/apple watch hermes 1300 dollar.png");
       ui->label->setPixmap(pix.scaled(200,200));
    QMessageBox::information(this, tr("estimation"),
                                   aw,
                                   QMessageBox::Ok);

   }

 if (add_combo()=="steve jobs"){
     QPixmap pix(":/new/prefix1/ressource/steve jobs.png");
     ui->label->setPixmap(pix.scaled(200,200));
       QMessageBox::information(this, tr("estimation"),
                                      sj,
                                      QMessageBox::Ok);}

 if (add_combo()=="bently"){
     QPixmap pix(":/new/prefix1/ressource/bentley 4 millions dollar . 1932.png");
     ui->label->setPixmap(pix.scaled(200,200));
       QMessageBox::information(this, tr("estimation"),
                                      b,
                                      QMessageBox::Ok);}
}
