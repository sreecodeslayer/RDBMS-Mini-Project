#include "newaccount.h"
#include "ui_newaccount.h"
#include <QString>

QString New_username;
QString New_password;


NewAccount::NewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAccount)
{
    ui->setupUi(this);
}

NewAccount::~NewAccount()
{
    delete ui;
}

void NewAccount::on_Register_Button_clicked()
{

}
