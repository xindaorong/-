#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    // 创建 Qt 应用程序对象，负责管理应用生命周期和事件循环。
    QApplication a(argc, argv);

    // ========== 加载并应用 QSS 样式 ==========
    // 从 Qt 资源系统中读取样式文件（:/ 前缀表示资源路径）。
    QFile qss(":/style/stylesheet.qss");
    //以只读模式打开QSS样式文件，并判断是否成功
    if (qss.open(QFile::ReadOnly))
    {
        //qDebug才是日志函数
        qDebug("Reading qss file");
        // 读取 QSS 内容并转换为 QString。
        QString styleSheet = QLatin1String(qss.readAll());
        // 将样式表设置到整个应用程序，使所有窗口控件生效。
        a.setStyleSheet(styleSheet);
        qss.close();
    }
    else
    {
        //qDebug才是日志函数
        qDebug() << "Failed to read qss file:" << qss.errorString() << ", path =" << qss.fileName();
    }

    // 创建并显示主窗口。
    MainWindow w;
    w.show();

    // 进入 Qt 事件循环，等待用户交互并处理事件。
    return QCoreApplication::exec();
}
