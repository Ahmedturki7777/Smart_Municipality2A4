#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "license.h"
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
    void on_pushButton_clicked();


    void on_pushButton_sup_clicked();


    void on_pushButton_mod_2_clicked();


    void on_pushButton_Ajouter_clicked();

    void on_pushButton_print_clicked();

private:
    Ui::MainWindow *ui;
    tables e;

};
#endif // MAINWINDOW_H
