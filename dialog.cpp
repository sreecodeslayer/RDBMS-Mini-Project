#include "dialog.h"
#include <QIcon>
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QString>

QString password;
QString username;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
     ui->setupUi(this);
     this->setWindowTitle("Log In");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_QuitButton_clicked()
{
    //Quit Button
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Quit","Do you really wan't to quit the application?",QMessageBox::Yes| QMessageBox::No);

    if(reply == QMessageBox::Yes)
    {
     close();
    }
}

void Dialog::on_UsernameField_returnPressed()
{
    //Get Username
     username = ui->UsernameField->text();
}

void Dialog::on_PasswordField_returnPressed()
{
    //Get Password

    password = ui->PasswordField->text();




}

void Dialog::on_LogInButton_clicked()
{
    //Log in check and Log in

}

void Dialog::on_NewAccountButton_clicked()
{
    NewAccount *dialog=new NewAccount();
    dialog->show();
}
