#ifndef BOUTON_ESPACE_H
#define BOUTON_ESPACE_H
#include "espace.h"
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>

#include <QDialog>
#include "arduino.h"
namespace Ui {
class bouton_espace;
}

class bouton_espace : public QDialog
{
    Q_OBJECT

public:
    explicit bouton_espace(QWidget *parent = nullptr);
    ~bouton_espace();
    espace tmp;
    QSortFilterProxyModel *proxy,*proxym;
QString nom() const ;
    QString adress() const ;
    double superficie() const;

    QString date() const ;
       int valeur() const ;
        double prix() const;

    void fill_form(QString);
    void fill_form(int);
    void show_tables();


private slots:
    void on_ajouter_clicked();

    void on_modifier_clicked();

    void on_tableau_clicked(const QModelIndex &index);

    void on_supprimer_clicked();
    void update_label();

    void on_pushButton_clicked();

private:
    Ui::bouton_espace *ui;
    QString selected;
    int selectedm;
    arduino A;
     bool check;
     QByteArray data;

};

#endif // BOUTON_ESPACE_H
