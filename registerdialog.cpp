#include "registerdialog.h"
#include "ui_registerdialog.h"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    // 设置密码不可见
    ui->confirm_edit_4->setEchoMode(QLineEdit::Password);
    ui->pass_edit_3->setEchoMode(QLineEdit::Password);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}
