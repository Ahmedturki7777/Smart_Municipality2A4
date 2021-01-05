#ifndef BOUTON_EVENEMENT_H
#define BOUTON_EVENEMENT_H

#include <QDialog>
#include <evenement.h>
//test
namespace Ui {
class bouton_evenement;
}

class bouton_evenement : public QDialog
{
    Q_OBJECT

public:
    explicit bouton_evenement(QWidget *parent = nullptr);
    ~bouton_evenement();

private slots:
    void on_pushButton_inserev_clicked();

    void on_pushButton_supprimerev_clicked();


    void on_lineEdit_nomev_2_windowIconTextChanged(const QString &iconText);

    void on_lineEdit_dateev_2_windowIconTextChanged(const QString &iconText);

    void on_lineEdit_sujetev_2_windowIconTextChanged(const QString &iconText);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_modifierev_2_clicked();

private:
    Ui::bouton_evenement *ui;
    Evenement E;
};

#endif // BOUTON_EVENEMENT_H
