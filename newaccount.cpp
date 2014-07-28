#include "newaccount.h"
#include "ui_newaccount.h"
#include <QString>
#include <QDebug>

QString New_username;
QString New_password;
QString Confirm_password;


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
    New_username = ui->Username_Reg->text();
    New_password = ui->Password_Reg->text();
    Confirm_password = ui->ConfirmPass_Reg->text();

    if(New_password == Confirm_password)
    {
        //Create Account
    }
    else
    {
        //Re-Confirm
    }
}
