#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString path = QFileDialog::getOpenFileName(this);
    if(path.isEmpty())
    {
        qDebug() << "path.isEmpty()";
        return;
    }

    QFile file(path);  //创建文件对象，同时指定路径
    file.setFileName(path); //指定路径

    //只读方式打开文件
    bool isOk = file.open(QIODevice::ReadOnly);
    if(false == isOk)
    {
        qDebug() << "false == isOk";
        return;
    }

    //读取文件内容，返回值为字节数组类型
    QByteArray  array = file.readAll();
    ui->textEdit->setText(array); //给编辑区设置内容

    //关闭文件
    file.close();

}

void Widget::on_pushButton_2_clicked()
{
    QString path = QFileDialog::getSaveFileName(this);
    if(path.isEmpty())
    {
        qDebug() << "path.isEmpty()";
        return;
    }

    QFile file(path);  //创建文件对象，同时指定路径

    //只写方式打开文件
    bool isOk = file.open(QIODevice::WriteOnly);
    if(false == isOk)
    {
        qDebug() << "false == isOk";
        return;
    }

    //获取编辑区内容
    QString str = ui->textEdit->toPlainText();
    //file.write(str.toUtf8());//以utf-8编码写
    file.write(str.toLocal8Bit()); //转换为本地编码， win gbk, linux utf-8

    //关闭文件
    file.close();

}
