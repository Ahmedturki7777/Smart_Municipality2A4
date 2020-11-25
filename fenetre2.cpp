#include "fenetre2.h"
#include "ui_fenetre2.h"

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
