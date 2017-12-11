#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    //初始化
    QApplication a(argc, argv);

    //创建一个对象，调用构造函数
    //MainWindow是一个窗口类型
    MainWindow w;
    w.show(); //窗口创建后，默认是隐藏的，需要人为显示

    //此函数会阻塞
    //1、让程序一直运行
    //2、等待用户的操作，检测到用户的操作
    a.exec();
    qDebug() << "xxxxxxxxxxxxxx";

    return 0;
}
