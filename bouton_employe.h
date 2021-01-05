#ifndef BOUTON_EMPLOYE_H
#define BOUTON_EMPLOYE_H
#include "envoi_mail.h"
#include "employe.h"
#include <QDialog>
#include <QFileDialog>
namespace Ui {
class bouton_employe;
}

class bouton_employe : public QDialog
{
    Q_OBJECT

public:
    explicit bouton_employe(QWidget *parent = nullptr);
    ~bouton_employe();
private slots:

    bool on_ajoutereButton_clicked();



    bool on_supprimereButton_clicked();



    void on_modifemployeButton_clicked();
    void sendMail();
       void mailSent(QString);
       void browse();


       void on_pushButton_pdf_2_clicked();

       void on_recherchernom_clicked();

       void on_rprenom_clicked();

       void on_rcin_clicked();
       void on_recuButton_clicked();

private:
    Ui::bouton_employe *ui;
    employe Etmp;
     QStringList files;
};

#endif // BOUTON_EMPLOYE_H
