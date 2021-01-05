#ifndef EDUCATION_H
#define EDUCATION_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class education;
}

class education : public QDialog
{
    Q_OBJECT

public:
    explicit education(QWidget *parent = nullptr);
    ~education();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::education *ui;
};

#endif // EDUCATION_H
