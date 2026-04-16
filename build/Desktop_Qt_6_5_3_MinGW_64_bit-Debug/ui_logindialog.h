/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_label;
    QLineEdit *user_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *pass_label;
    QLineEdit *pass_lineEdit;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *forget_pass;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(300, 500);
        LoginDialog->setMinimumSize(QSize(300, 500));
        LoginDialog->setMaximumSize(QSize(300, 500));
        horizontalLayout = new QHBoxLayout(LoginDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        widget = new QWidget(LoginDialog);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/2.png")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        user_label = new QLabel(LoginDialog);
        user_label->setObjectName("user_label");
        user_label->setMinimumSize(QSize(0, 25));
        user_label->setMaximumSize(QSize(16777215, 25));
        user_label->setSizeIncrement(QSize(0, 25));

        horizontalLayout_2->addWidget(user_label);

        user_lineEdit = new QLineEdit(LoginDialog);
        user_lineEdit->setObjectName("user_lineEdit");
        user_lineEdit->setMinimumSize(QSize(0, 25));
        user_lineEdit->setMaximumSize(QSize(16777215, 25));
        user_lineEdit->setSizeIncrement(QSize(0, 25));

        horizontalLayout_2->addWidget(user_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pass_label = new QLabel(LoginDialog);
        pass_label->setObjectName("pass_label");
        pass_label->setMinimumSize(QSize(0, 25));
        pass_label->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(pass_label);

        pass_lineEdit = new QLineEdit(LoginDialog);
        pass_lineEdit->setObjectName("pass_lineEdit");
        pass_lineEdit->setMinimumSize(QSize(0, 25));
        pass_lineEdit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(pass_lineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        forget_pass = new QPushButton(LoginDialog);
        forget_pass->setObjectName("forget_pass");

        horizontalLayout_10->addWidget(forget_pass);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(30, 10));

        horizontalLayout_14->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);

        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_15->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_15);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label_2->setText(QString());
        user_label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        pass_label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        forget_pass->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
