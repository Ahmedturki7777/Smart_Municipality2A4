#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "license_button.h"
#include "ui_license_button.h"
#include "projet_button.h"
#include "bouton_evenement.h"
#include "bouton_reclamation.h"
#include "ui_bouton_reclamation.h"
#include "bouton_profil.h"
#include "ui_bouton_profil.h"
#include "bouton_employe.h"
#include"ui_bouton_employe.h"
#include "bouton_espace.h"
#include "ui_bouton_espace.h"
#include "bouton_monument.h"
#include "ui_bouton_monument.h"
#include "button_pointage.h"
#include "ui_button_pointage.h"
#include "button_congee.h"
#include "ui_button_congee.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/ASUS/Desktop/Mohamed slama/Ressource/ssaa.jpg");
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));


        ui->pushButton->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_9->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_8->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_2->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_3->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_5->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_6->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_10->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_license->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");
        ui->pushButton_evenement->setStyleSheet("border-image: url(C:/Users/ASUS/Desktop/Mohamed slama/Ressource/button_init.png)3 10 3 10; font: 10pt Bahnschrift;");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_license_clicked()
{
    license_button d;
    d.exec();
}



void MainWindow::on_pushButton_8_clicked()
{
    projet_button d;
    d.exec();
}








void MainWindow::on_pushButton_evenement_clicked()
{
    bouton_evenement d;
    d.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    bouton_reclamation d;
    d.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
bouton_profil a;
a.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
bouton_employe e;
e.exec();
}

void MainWindow::on_pushButton_clicked()
{
    bouton_espace r ;
    r.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    bouton_monument m;
    m.exec();

}

void MainWindow::on_pushButton_10_clicked()
{
    button_pointage p ;
    p.exec() ;
}

void MainWindow::on_pushButton_9_clicked()
{
    button_congee c  ;
    c.exec() ;
}
