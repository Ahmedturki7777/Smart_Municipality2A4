#ifndef BOUTON_PROFIL_H
#define BOUTON_PROFIL_H
#include "profil.h"
#include <QDialog>
#include <QFileDialog>

namespace Ui {
class bouton_profil;
}

class bouton_profil : public QDialog
{
    Q_OBJECT

public:
    explicit bouton_profil(QWidget *parent = nullptr);
    ~bouton_profil();

private slots:


    bool on_supprimerpButton_clicked();



    void on_modifier_profil_clicked();


       void on_ajouterp_Button_clicked();





private:
    Ui::bouton_profil *ui;
    profil Etmb;
     QStringList files;
};

#endif // BOUTON_PROFIL_H
