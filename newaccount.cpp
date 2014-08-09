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


}

void NewAccount::on_ConfirmPass_Reg_textEdited(const QString &arg1)
{
    confirm_password_check();
}
bool NewAccount::confirm_password_check()
{
    //Password Entry Confirm, Re-Confirm
    if(ui->Password_Reg->text() == ui->ConfirmPass_Reg->text())
    {

        //connect(ui->ConfirmPass_Reg, SIGNAL(returnPressed()),ui->Register_Button,SLOT(click()));
        ui->re_confirm->setText(""); //Set label back to empty
        return true;
    }
    else
    {

        //connect(ui->ConfirmPass_Reg, SIGNAL(returnPressed()),ui->ConfirmPass_Reg,SLOT(setFocus()));
        ui->re_confirm->setText("<font color = red> Password do not match!</font>");
        return false;
    }

}

void NewAccount::on_Password_Reg_textEdited(const QString &arg1)
{
    confirm_password_check();
}
