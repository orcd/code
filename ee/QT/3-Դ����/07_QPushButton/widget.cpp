#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //=============QPushButton
    ui->buttonText->setText("^_@"); //设置文本内容
    QString str = ui->buttonText->text(); //获取按钮内容
    qDebug() << "str = " << str;

    b.setParent(this); //指定父对象，变量在.h中定义
    b.resize(100, 100); //设置大小
    b.setIcon(QIcon(":/new/prefix1/image/face.png")); //设置图标
    b.setIconSize(QSize(100, 100));     //设置图标大小
    b.setFlat(true); //设置背景透明

    b.setEnabled(false); //不能工作，变灰色


}

Widget::~Widget()
{
    delete ui;
}
