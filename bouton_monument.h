#ifndef BOUTON_MONUMENT_H
#define BOUTON_MONUMENT_H
#include"monument.h"
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>


#include <QDialog>

namespace Ui {
class bouton_monument;
}

class bouton_monument : public QDialog
{
    Q_OBJECT

public:
    explicit bouton_monument(QWidget *parent = nullptr);
    ~bouton_monument();
    monument tmpm;
    QSortFilterProxyModel *proxy,*proxym;
    QString date() const ;
       int valeur() const ;
        double prix() const;


    void show_tables();

private slots:
    void on_ajouter_2_clicked();

    void on_modifer_2_clicked();


    void on_supprimer_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_metier_clicked();

private:
    Ui::bouton_monument *ui;
     int selectedm;
};

#endif // BOUTON_MONUMENT_H
