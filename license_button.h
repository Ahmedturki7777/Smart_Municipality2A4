#ifndef LICENSE_BUTTON_H
#define LICENSE_BUTTON_H

#include <QDialog>
#include "license.h"
#include "envoi_mail.h"
#include <QFileDialog>

namespace Ui {
class license_button;
}

class license_button : public QDialog
{
    Q_OBJECT

public:
    explicit license_button(QWidget *parent = nullptr);
    ~license_button();

private slots:


    void on_pushButton_Ajouter_license_clicked();

    void on_pushButton_mod_license_clicked();

    void on_pushButton_sup_clicked();

    void on_pushButton_rec_license_clicked();
    void sendMail();
    void mailSent(QString);
    void browse();

    void on_pushButton_quit_clicked();

    void on_export_excel_clicked();

private:
    Ui::license_button *ui;
    license e;
    QStringList files;


};

#endif // LICENSE_BUTTON_H
