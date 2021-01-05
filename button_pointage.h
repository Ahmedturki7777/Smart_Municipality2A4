#ifndef BUTTON_POINTAGE_H
#define BUTTON_POINTAGE_H

#include <QDialog>
#include "pointage.h"
#include "rfid.h"
namespace Ui {
class button_pointage;
}

class button_pointage : public QDialog
{
    Q_OBJECT

public:
    explicit button_pointage(QWidget *parent = nullptr);
    ~button_pointage();
private slots :
     void on_pushButton_2_clicked();
     void on_pushButton_3_clicked();
     void on_pushButton_8_clicked();
     void on_pushButton_7_clicked();

     void on_pushButton_15_clicked();
      void  pointer();


private:
    Ui::button_pointage *ui;
    pointage tmp ;
    Arduino A ;
};

#endif // BUTTON_POINTAGE_H
