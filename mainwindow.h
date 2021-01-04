#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "pointage.h"
#include <QMainWindow>
#include <qdialog.h>
#include <qfiledialog.h>
#include "congee.h"
#include <QMediaPlayer>
#include <QtDebug>
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_15_clicked();
    void sendMail();
    void mailSent(QString);
    void browse();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void test();
    void  pointer();

private:
    Ui::MainWindow *ui;
    pointage tmp ;
    congee gtmp ;
    QStringList files;
    QMediaPlayer *player ;
    Arduino A ;
    QByteArray data  ;

};
#endif // MAINWINDOW_H
