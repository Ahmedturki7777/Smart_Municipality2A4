#ifndef FENETRE2_H
#define FENETRE2_H

#include <QDialog>

namespace Ui {
class fenetre2;
}

class fenetre2 : public QDialog
{
    Q_OBJECT

public:
    explicit fenetre2(QWidget *parent = nullptr);
    ~fenetre2();

private:
    Ui::fenetre2 *ui;
};

#endif // FENETRE2_H
