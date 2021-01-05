#ifndef BOUTON_RECLAMATION_H
#define BOUTON_RECLAMATION_H

#include <QDialog>
#include <reclamation.h>
//test
namespace Ui {
class bouton_reclamation;
}

class bouton_reclamation : public QDialog
{
    Q_OBJECT

public:
    explicit bouton_reclamation(QWidget *parent = nullptr);
    ~bouton_reclamation();

private slots:


    void on_pushButton_inserrec_2_clicked();

    void on_pushButton_modifierev_5_clicked();

    void on_pushButton_supprimerrec_2_clicked();

private:
    Ui::bouton_reclamation *ui;
    Reclamation R;
};

#endif // BOUTON_RECLAMATION_H
