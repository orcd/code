#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#define cout qDebug() //没有分号

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QString s1 = "abc";
    QString s2("hello");
    cout << "s1 = " << s1 << ", s2 = " << s2;

    QString s = s1+s2;
    cout << "s = " << s;

    //组包, 类似于sprintf
    s = QString("a=%1,b=%2,c=%3").arg(250).arg("mike").arg(22.22);
    cout << "s = " << s;

    int a;
    //从第0段开始，到第0段结束，所以取第0段
    QString tmp = s.section(",", 0, 0); //tmp = "a=20"
    cout << "tmp = " << tmp;

    tmp = tmp.section("=", 1, 1);
    cout << "tmp = " << tmp;
    a = tmp.toInt(); //QString转int
    cout << "a = " << a;

    //int转QString
    tmp = QString("%1").arg(123);
    cout << "tmp = " << tmp;

    tmp = QString::number(234);
    cout << "tmp = " << tmp;

    //char *转QString
    const char * buf = "are u ok?";
    QString ss = buf;
    cout << "ss = " << ss;

    char buf2[100] = "hello mike";
    ss = buf2;
    cout << "ss = " << ss;

    //QString ----> char *
    ss = "你过来啊";
    //char *buf3 = ss.toLocal8Bit().data(); //转换为本地编码
    char *buf3 = ss.toUtf8().data(); //以utf-8操作
    cout << "buf = " << buf3;

}

Widget::~Widget()
{
    delete ui;
}
