#ifndef AMENAGEMENT_H
#define AMENAGEMENT_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class amenagement;
}

class amenagement : public QDialog
{
    Q_OBJECT

public:
    explicit amenagement(QWidget *parent = nullptr);
    ~amenagement();

    QString line() const ;
    QString add_combo() const;
    void test();

private slots:

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::amenagement *ui;
};

#endif // AMENAGEMENT_H
