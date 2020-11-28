#include "amenagement.h"
#include "ui_amenagement.h"

amenagement::amenagement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::amenagement)
{
    ui->setupUi(this);
}

amenagement::~amenagement()
{
    delete ui;
}

QString amenagement::line() const { //text edit
    return ui->lineEdit->text();
}

QString amenagement::add_combo() const { //combo box

    return ui->comboBox->currentText();
}
void amenagement::on_buttonBox_accepted()
{
    accept();
}

void amenagement::on_buttonBox_rejected()
{
    reject();
}

void amenagement::test(){

    QString message2015="etat du park "+line()+ " est bon mais il faut entretenir";
    QString messagenon2015="etat du park "+line()+ " n'est bon et il faut le restaurer";
   if (add_combo()=="2015")
    QMessageBox::warning(this, tr("Amengement"),
                                   message2015,
                                   QMessageBox::Ok);
   else

       QMessageBox::critical(this, tr("Amengement"),
                                      messagenon2015,
                                      QMessageBox::Ok);
}
