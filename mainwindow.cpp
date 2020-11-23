#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this,"la valeur de votre objet ","cette apple watch date de moins de 20 ans et n'a pas de grande valeur ");

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this , "la valeur de votre objet "," la cassette avec la signature de steve jobs date de 40 ans et a de la valeur  ");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::about(this, "la valeur de votre objet", "cette bentley qui date de 1932 date au moins 100 ans et a une valeur inestimable ");
}
