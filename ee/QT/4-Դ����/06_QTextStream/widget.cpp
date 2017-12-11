#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QFile>
#include <QDataStream>
#include <QTextStream>
#include <QTextCodec>

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
    QTextStream stream(&file);
    stream.setCodec(QTextCodec::codecForName("UTF-8")); //指定编码

    int a = 250;
    QString str = "你过来啊";
    stream << str << a; //a转换为字符串后，再写入文件

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
    QTextStream stream(&file);
    stream.setCodec(QTextCodec::codecForName("UTF-8")); //指定编码

//    int a = 111;
//    QString str;
//    stream >> str >> a;
//    qDebug() << "a = " << a;
//    qDebug() << "str = " << str.toUtf8().data();
    QString str = stream.readAll();
    qDebug() << "str = " << str.toUtf8().data();

    file.close();

}
