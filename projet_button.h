#ifndef PROJET_BUTTON_H
#define PROJET_BUTTON_H

#include <QDialog>
#include "projet.h"
namespace Ui {
class projet_button;
}

class projet_button : public QDialog
{
    Q_OBJECT

public:
    explicit projet_button(QWidget *parent = nullptr);
    ~projet_button();

private slots:

    void on_pushButton_Ajouter_projet_clicked();

    void on_pushButton_sup_projet_clicked();

    void on_pushButton_rec_projet_clicked();

    void on_pushButton_quit_projet_clicked();

    void on_pushButton_mod_projet_2_clicked();

private:
    Ui::projet_button *ui;
    Projet p;

};

#endif // PROJET_BUTTON_H
