#include "widget.h"
#include "ui_widget.h"
#include <QFileInfo>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QFileInfo info("../Image/face.png");
    qDebug() << "info.exists() = " << info.exists(); //文件是否存在
    qDebug() << info.fileName();
    qDebug() << info.filePath();     //指定的路径
    qDebug() << info.absolutePath(); //绝对路径
    qDebug() << info.size(); //以字节为单位
    qDebug() << info.suffix();


}

Widget::~Widget()
{
    delete ui;
}
