#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "pointage.h"
#include <QMainWindow>
#include <qdialog.h>
#include <qfiledialog.h>


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

private:
    Ui::MainWindow *ui;
    pointage tmp ;
    QStringList files;

};
#endif // MAINWINDOW_H
