#ifndef NEWACCOUNT_H
#define NEWACCOUNT_H

#include <QDialog>

namespace Ui {
class NewAccount;
}

class NewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit NewAccount(QWidget *parent = 0);
    ~NewAccount();

private slots:
    void on_Register_Button_clicked();
    bool confirm_password_check();

    void on_ConfirmPass_Reg_returnPressed();

    void on_ConfirmPass_Reg_textEdited(const QString &arg1);

    void on_Password_Reg_textEdited(const QString &arg1);

private:
    Ui::NewAccount *ui;
};

#endif // NEWACCOUNT_H
