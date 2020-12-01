#include "impression.h"

impression::impression(QString filename)
{
    QPdfWriter writer(filename);
        writer.setPageSize(QPagedPaintDevice::A4);
        writer.setPageMargins(QMargins(30, 30, 30, 30));

        QPainter painter(&writer);
        painter.setPen(Qt::black);
        painter.setFont(QFont("Times", 10));

        QRect r = painter.viewport();

        QString citydate = "City, ";
        citydate += currDate();

        painter.drawText(r, Qt::AlignRight, citydate);

        quint32 iYPos = 10;
        QPixmap pxPic;
        pxPic.load("E:/logo.png", "PNG");
        pxPic = pxPic.scaled(10000,1000);


    QString sender = "S-Municipality\n";
    sender += "Adress\n";
    QString data = "Donner ici"; 


    painter.drawText(r, Qt::AlignLeft, sender);
    painter.drawText(1000, 1000, data);


    painter.drawPixmap(200, iYPos, pxPic.width(), pxPic.height(), pxPic);//logo pos
       iYPos += pxPic.height() + 250;
        painter.end();
}
QString impression::currDate()
{
    QDate date = QDate::currentDate();
    return date.toString("dd.MM.yyyy");
}
