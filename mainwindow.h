#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include "espace.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    espace tmp;
    QSortFilterProxyModel *proxy;
QString nom() const ;
    QString adress() const ;
    double superficie() const;

    void fill_form(QString);
    void show_tables();

private slots:
    void on_quitter_clicked();

    void on_metier_clicked();



    void on_ajouter_clicked();


    void on_modifier_clicked();

    void on_tableau_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_supprimer_clicked();

private:
    Ui::MainWindow *ui;
    QString selected;
};
#endif // MAINWINDOW_H
