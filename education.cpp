#include "education.h"
#include "ui_education.h"

education::education(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::education)
{
    ui->setupUi(this);
}

education::~education()
{
    delete ui;
}


void education::on_pushButton_clicked()
{
    QString message="la mairie va construire une ecole ";

    QMessageBox::information(this, tr("Amengement"),
                                   message,
                                   QMessageBox::Ok);

}

void education::on_pushButton_2_clicked()
{
    QString message="la mairie va construire une bibliotheque ";

    QMessageBox::information(this, tr("Amengement"),
                                   message,
                                   QMessageBox::Ok);
}
