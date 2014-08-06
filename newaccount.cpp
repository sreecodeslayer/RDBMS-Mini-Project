#include "newaccount.h"
#include "ui_newaccount.h"
#include <QString>
#include <QDebug>
#include <QLabel>

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
{   //Get the Inputs
    New_username = ui->Username_Reg->text();
    New_password = ui->Password_Reg->text();
    Confirm_password = ui->ConfirmPass_Reg->text();
}


void NewAccount::on_ConfirmPass_Reg_returnPressed()
{
    //Password Entry Confirm, Re-Confirm
    if(New_password == Confirm_password)
    {

        connect(ui->ConfirmPass_Reg, SIGNAL(returnPressed()),ui->Register_Button,SLOT(click()));
        ui->re_confirm->setText(""); //Set label back to empty
    }
    else
    {

        connect(ui->ConfirmPass_Reg, SIGNAL(returnPressed()),ui->ConfirmPass_Reg,SLOT(setFocus()));
        ui->re_confirm->setText("<font color = red> Please re-enter the password correctly!</font>");
    }


}
