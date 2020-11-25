#ifndef IMPRESSION_H
#define IMPRESSION_H
#include <QApplication>
#include <QtCore>
#include <QPrinter>
#include <QPdfWriter>
#include <QPainter>

class impression
{
public:
    impression(QString);
    QString currDate();
};

#endif // IMPRESSION_H
