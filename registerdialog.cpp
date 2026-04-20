#include "registerdialog.h"
#include "ui_registerdialog.h"

#include "global.h"
#include "httpmgr.h"

#include <QJsonDocument>
#include <QLineEdit>
#include <QRegularExpression>
#include <QDebug>

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->err_tip->setStyleSheet(
        "#err_tip[state='normal']{ color: green; }"
        "#err_tip[state='err']{ color: red; }"
    );
    ui->err_tip->setProperty("state", "normal");
    repolish(ui->err_tip);
    ui->stackedWidget->setCurrentIndex(0);
    ui->confirm_edit_4->setEchoMode(QLineEdit::Password);
    ui->pass_edit_3->setEchoMode(QLineEdit::Password);

    // 修正：原来这里只是连了信号，但没有初始化处理表；这样回包后不会知道该怎么处理
    initHttpHandlers();
    connect(HttpMgr::GetInstance().get(), &HttpMgr::sig_reg_mod_finish,
            this, &RegisterDialog::slot_reg_mod_finish);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

// 显示提示信息，并切换样式
void RegisterDialog::showTip(const QString &str, bool b_ok)
{
    ui->err_tip->setText(str);
    ui->err_tip->setProperty("state", b_ok ? "normal" : "err"); // 修正：成功/失败状态要根据 b_ok 切换
    repolish(ui->err_tip);
}

void RegisterDialog::on_get_code_clicked()
{
    auto email = ui->email_edit->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    bool is_match = regex.match(email).hasMatch();
    if (!is_match)
    {
        showTip(tr("请输入正确的邮箱格式"), false);
        return;
    }

    ui->err_tip->setText(tr("邮箱格式正确"));
    ui->err_tip->setProperty("state", "normal");
    repolish(ui->err_tip);
}

void RegisterDialog::slot_reg_mod_finish(ReqId id, QString res, ErrorCode err)
{
    if (err != ErrorCode::Success)
    {
        showTip(tr("获取验证码失败，请检查网络"), false);
        return;
    }

    // 修正：服务端返回的是 JSON 字符串，必须先解析再取字段
    QJsonDocument jsonDoc = QJsonDocument::fromJson(res.toUtf8());
    if (jsonDoc.isNull())
    {
        showTip(tr("服务器返回数据异常"), false);
        return;
    }
    if (!jsonDoc.isObject())
    {
        showTip(tr("JSON 解析错误"), false);
        return;
    }

    QJsonObject jsonObj = jsonDoc.object();
    if (_handlers.contains(id))
    {
        _handlers[id](jsonObj);
    }
}

void RegisterDialog::initHttpHandlers()
{
    // 注册“获取验证码”回包逻辑
    _handlers.insert(ReqId::ID_GET_VERIFY_CODE, [this](const QJsonObject &jsonObj) {
        const int error = jsonObj["error"].toInt();
        if (error != static_cast<int>(ErrorCode::Success))
        {
            showTip(tr("参数错误"), false);
            return;
        }

        const auto email = jsonObj["email"].toString();
        showTip(tr("验证码已发送到邮箱，请注意查收"), true);
        qDebug() << "email is" << email;
    });
}
