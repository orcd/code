#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    b1.setText("关闭窗口");
    b1.setParent(this);

    //QPushButton信号pressed
    //QWidget槽函数是close
    //Qt5
    connect(&b1, &QPushButton::pressed, this, &Widget::close);
    //Qt4, 了解，不推荐，不会做错误检查
    //connect(&b1, SIGNAL(pressed()), this, SLOT(close()) );

    b2.setText("最小化窗口");
    b2.setParent(this);
    b2.move(150, 0);
    connect(&b2, &QPushButton::pressed, this, &Widget::showMinimized);

    b3.setText("^_^");
    b3.setParent(this);
    b3.move(100, 100);

    b4.setText("显示");
    b4.setParent(this);
    b4.move(0, 200);
    connect(&b4, &QPushButton::pressed, &b3, &Widget::show);


    b5.setText("隐藏");
    b5.setParent(this);
    b5.move(200, 200);
    connect(&b5, &QPushButton::pressed, &b3, &Widget::hide);
}

Widget::~Widget()
{

}
