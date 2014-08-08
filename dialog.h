#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "newaccount.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_QuitButton_clicked();

    void on_LogInButton_clicked();

    void on_NewAccountButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
