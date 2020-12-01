#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QFileDialog>
#include <QMainWindow>
#include "profil.h"
#include "employe.h"
#include "smtp.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_print_clicked();

private slots:
    bool on_ajouterp_Button_clicked();

    bool on_ajoutereButton_clicked();

    bool on_supprimerpButton_clicked();

    bool on_supprimereButton_clicked();

    void on_recuButton_clicked();
    void on_rechercherButton_clicked();

    void on_rprenomButton_clicked();

    void on_rcinButton_clicked();

    void on_modifier_profil_clicked();

    void on_modifemployeButton_clicked();
    void sendMail();
       void mailSent(QString);
       void browse();



private:
    Ui::MainWindow *ui;
    Employe Etmp;
    Profil Etmb;
     QStringList files;
};

#endif // MAINWINDOW_H
