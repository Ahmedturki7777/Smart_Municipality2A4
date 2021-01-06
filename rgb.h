#ifndef rgb_H
#define rgb_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class rgb;
}

class rgb : public QDialog
{
    Q_OBJECT

public:
    explicit rgb(QWidget *parent = 0);
    ~rgb();

private slots:
    void on_red_slider_valueChanged(int value);
    void updateRGB(QString);

private:
    Ui::rgb *ui;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 6790;
    static const quint16 arduino_uno_product_id = 29987;
    QString arduino_port_name;
    bool arduino_is_available;
};

#endif // rgb_H
