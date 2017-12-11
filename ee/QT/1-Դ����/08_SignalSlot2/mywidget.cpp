#include "mywidget.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    //设置内容，同时指定父对象
    p = new QPushButton("关闭窗口", this);

    //槽函数也是函数，都是没有返回值
    //如果信号没有参数，那么槽函数就没有参数
    //qt5, 可以是普通任意函数
    //connect(p, &QPushButton::released, this, &MyWidget::myClose);
    //qt 4, 槽函数，必须有slot声明
    connect(p, SIGNAL(pressed()), this, SLOT( myClose() )    );//取自定义的函数

}

MyWidget::~MyWidget()
{

}

void MyWidget::myClose()
{
    qDebug() << "关闭窗口";
    close();
}
