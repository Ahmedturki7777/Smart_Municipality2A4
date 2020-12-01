#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "license.h"
#include "projet.h"
#include "envoi_mail.h"
#include <QDialog>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:


    void on_pushButton_sup_clicked();


    void on_pushButton_mod_2_clicked();


    void on_pushButton_Ajouter_clicked();

    void on_pushButton_print_clicked();

    void on_pushButton_rec_clicked();

    void on_pushButton_Ajouter_2_clicked();

    void on_pushButton_sup_2_clicked();

    void on_pushButton_rec_2_clicked();

    void on_pushButton_mod_3_clicked();
    void sendMail();
    void mailSent(QString);
    void browse();


    void on_pushButton_quit_clicked();

private:
    Ui::MainWindow *ui;
    tables e;
    Projet p;
    QStringList files;


};
#endif // MAINWINDOW_H
