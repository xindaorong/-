/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *topBarLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacerTop;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *use_label;
    QLineEdit *use_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *emali_label_2;
    QLineEdit *email_edit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_label_3;
    QLineEdit *pass_edit_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *confirm_label_4;
    QLineEdit *confirm_edit_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *verify_label_5;
    QLineEdit *verify_edit_5;
    QPushButton *getButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *ConfirmButton_2;
    QPushButton *cancelButton_3;
    QSpacerItem *verticalSpacerBottom;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(300, 500);
        RegisterDialog->setMinimumSize(QSize(300, 500));
        RegisterDialog->setMaximumSize(QSize(300, 500));
        RegisterDialog->setStyleSheet(QString::fromUtf8("QDialog { background-color: #f2f2f2; }\n"
"QLabel { color: #1f1f1f; font: 16px \"Microsoft YaHei UI\"; }\n"
"QLineEdit {\n"
"    background-color: #2f333a;\n"
"    color: #f4f4f4;\n"
"    border: 1px solid #20242a;\n"
"    border-radius: 6px;\n"
"    padding: 6px 10px;\n"
"    min-height: 24px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #2f333a;\n"
"    color: #f4f4f4;\n"
"    border: 1px solid #20242a;\n"
"    border-radius: 6px;\n"
"    padding: 6px 14px;\n"
"    min-height: 28px;\n"
"}\n"
"QPushButton:hover { background-color: #3a3f48; }\n"
"QPushButton:pressed { background-color: #242831; }"));
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(18, 18, 18, 18);
        topBarLayout = new QHBoxLayout();
        topBarLayout->setObjectName("topBarLayout");
        titleLabel = new QLabel(RegisterDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #22263f;\n"
"    color: #f3f4f8;\n"
"    border-radius: 12px;\n"
"    font: 700 18px \"Microsoft YaHei UI\";\n"
"    padding: 10px 16px;\n"
"}"));

        topBarLayout->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        topBarLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(topBarLayout);

        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(14);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacerTop = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacerTop);

        widget = new QWidget(page);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        err_tip = new QLabel(widget);
        err_tip->setObjectName("err_tip");
        err_tip->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(err_tip);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        use_label = new QLabel(page);
        use_label->setObjectName("use_label");
        use_label->setMinimumSize(QSize(70, 0));

        horizontalLayout_2->addWidget(use_label);

        use_edit = new QLineEdit(page);
        use_edit->setObjectName("use_edit");

        horizontalLayout_2->addWidget(use_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        emali_label_2 = new QLabel(page);
        emali_label_2->setObjectName("emali_label_2");
        emali_label_2->setMinimumSize(QSize(70, 0));

        horizontalLayout_3->addWidget(emali_label_2);

        email_edit_2 = new QLineEdit(page);
        email_edit_2->setObjectName("email_edit_2");

        horizontalLayout_3->addWidget(email_edit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pass_label_3 = new QLabel(page);
        pass_label_3->setObjectName("pass_label_3");
        pass_label_3->setMinimumSize(QSize(70, 0));

        horizontalLayout_4->addWidget(pass_label_3);

        pass_edit_3 = new QLineEdit(page);
        pass_edit_3->setObjectName("pass_edit_3");

        horizontalLayout_4->addWidget(pass_edit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        confirm_label_4 = new QLabel(page);
        confirm_label_4->setObjectName("confirm_label_4");
        confirm_label_4->setMinimumSize(QSize(70, 0));

        horizontalLayout_5->addWidget(confirm_label_4);

        confirm_edit_4 = new QLineEdit(page);
        confirm_edit_4->setObjectName("confirm_edit_4");

        horizontalLayout_5->addWidget(confirm_edit_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verify_label_5 = new QLabel(page);
        verify_label_5->setObjectName("verify_label_5");
        verify_label_5->setMinimumSize(QSize(80, 0));

        horizontalLayout_7->addWidget(verify_label_5);

        verify_edit_5 = new QLineEdit(page);
        verify_edit_5->setObjectName("verify_edit_5");

        horizontalLayout_7->addWidget(verify_edit_5);

        getButton = new QPushButton(page);
        getButton->setObjectName("getButton");
        getButton->setMinimumSize(QSize(92, 42));

        horizontalLayout_7->addWidget(getButton);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        ConfirmButton_2 = new QPushButton(page);
        ConfirmButton_2->setObjectName("ConfirmButton_2");

        horizontalLayout_8->addWidget(ConfirmButton_2);

        cancelButton_3 = new QPushButton(page);
        cancelButton_3->setObjectName("cancelButton_3");
        cancelButton_3->setMinimumSize(QSize(0, 42));

        horizontalLayout_8->addWidget(cancelButton_3);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacerBottom = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacerBottom);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Register", nullptr));
        titleLabel->setText(QCoreApplication::translate("RegisterDialog", "AI \345\267\245\345\205\267", nullptr));
        err_tip->setText(QCoreApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        use_label->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267:", nullptr));
        emali_label_2->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261:", nullptr));
        pass_label_3->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201:", nullptr));
        confirm_label_4->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244:", nullptr));
        verify_label_5->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201:", nullptr));
        getButton->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        ConfirmButton_2->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\345\256\232", nullptr));
        cancelButton_3->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
