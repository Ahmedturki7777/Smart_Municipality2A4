#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QString>


class Arduino
{
public:
       Arduino() ;
       int connnect_arduino() ;
       int close_arduino () ;
       int write_to_arduino (QByteArray) ;
       QString  read_from_arduino () ;
       QSerialPort* getserial () ;
       QString  getArduino_port_name() ;
private:
       QSerialPort * Serial  ;
       static const quint16 arduino_uno_vendor_id=6790 ;
       static const quint16 arduino_uno_product_id=29987 ;
       QString arduino_port_name ;
       bool arduino_is_available ;
       QByteArray data ;




};

