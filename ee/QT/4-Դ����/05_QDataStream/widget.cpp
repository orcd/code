#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFile>
#include <QDataStream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //调用
    writeFile(); //写文件
    readFile();  //读文件
}

Widget::~Widget()
{
    delete ui;
}

void Widget::writeFile() //写文件
{
    QFile file("../data.txt");  //创建文件对象，同时指定路径

    //只写方式打开文件
    bool isOk = file.open(QIODevice::WriteOnly);
    if(false == isOk)
    {
        qDebug() << "false == isOk";
        return;
    }

    //stream和文件指针关联上
    //往stream写内容，实际上是给文件写内容
    QDataStream stream(&file);

    int a = 250;
    QString str = "你过来啊";
    stream << a << str;

    file.close();

}

void Widget::readFile() //读文件
{
    QFile file("../data.txt");  //创建文件对象，同时指定路径

    //只写方式打开文件
    bool isOk = file.open(QIODevice::ReadOnly);
    if(false == isOk)
    {
        qDebug() << "false == isOk";
        return;
    }

    //stream和文件指针关联上
    //往stream写内容，实际上是给文件写内容
    QDataStream stream(&file);

    int a;
    QString str;
    stream >> a >> str;
    qDebug() << a << ", str = " << str.toUtf8().data();

    file.close();

}
