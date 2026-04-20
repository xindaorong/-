#include "httpmgr.h"

#include <QDebug>

HttpMgr::HttpMgr()
{
    // 修正：这里不是“signal 连接自己的 signal”，而是把统一回调接到分发函数上
    connect(this, &HttpMgr::sig_http_finish, this, &HttpMgr::slot_http_finish);
}

HttpMgr::~HttpMgr() = default;

void HttpMgr::PostHttpReq(const QUrl &url, const QJsonObject &json, ReqId req_id, Modules mod)
{
    QByteArray data = QJsonDocument(json).toJson(QJsonDocument::Compact);
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setHeader(QNetworkRequest::ContentLengthHeader, QByteArray::number(data.length()));

    auto self = shared_from_this();
    QNetworkReply *reply = _manager.post(request, data);

    QObject::connect(reply, &QNetworkReply::finished, [reply, self, req_id, mod]() {
        if (reply->error() != QNetworkReply::NoError)
        {
            qDebug() << "error:" << reply->errorString();
            emit self->sig_http_finish(req_id, "", ErrorCode::ERR_NETWORK, mod);
            reply->deleteLater();
            return;
        }

        // 修正：readAll() 返回 QByteArray，原代码写成了 Qstring 会直接编译失败
        QString res = QString::fromUtf8(reply->readAll());
        emit self->sig_http_finish(req_id, res, ErrorCode::Success, mod);
        reply->deleteLater();
    });
}

void HttpMgr::slot_http_finish(ReqId id, QString res, ErrorCode err, Modules mod)
{
    if (mod == Modules::REGISTERMOD)
    {
        // 修正：原来这里写的是不存在的 sig_reg_finish
        emit sig_reg_mod_finish(id, res, err);
    }
}
