#ifndef ESTIMATION_H
#define ESTIMATION_H

#include <QDialog>
#include <QMessageBox>
#include <QPixmap>
namespace Ui {
class estimation;
}

class estimation : public QDialog
{
    Q_OBJECT


public:
    explicit estimation(QWidget *parent = nullptr);
    ~estimation();

           QString add_combo() const;

private slots:
           void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::estimation *ui;
};

#endif // ESTIMATION_H
