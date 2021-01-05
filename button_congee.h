#ifndef BUTTON_CONGEE_H
#define BUTTON_CONGEE_H

#include <QDialog>
#include "congee.h"
#include "envoi_mail.h"

namespace Ui {
class button_congee;
}

class button_congee : public QDialog
{
    Q_OBJECT

public:
    explicit button_congee(QWidget *parent = nullptr);
    ~button_congee();
private slots :
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();
    void sendMail();
    void mailSent(QString);
    void browse();

private:
    Ui::button_congee *ui;
    congee gtmp ;
     QStringList files;
};

#endif // BUTTON_CONGEE_H
