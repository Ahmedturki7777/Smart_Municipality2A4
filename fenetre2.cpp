#include "fenetre2.h"
#include "ui_fenetre2.h"
#include "amenagement.h"
#include"estimation.h"
#include"education.h"

fenetre2::fenetre2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fenetre2)
{
    ui->setupUi(this);
}

fenetre2::~fenetre2()
{
    delete ui;
}

void fenetre2::on_pushButton_clicked()
{
    //creation instance
        amenagement ac(this);

        //ouvrir dialog
        int res=ac.exec();


       ac.test();

}

void fenetre2::on_pushButton_2_clicked()
{
    estimation e(this);

    e.exec();


}

void fenetre2::on_pushButton_3_clicked()
{
    //creation instance
        education ac(this);

        //ouvrir dialog
        int res=ac.exec();
}
