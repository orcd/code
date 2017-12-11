#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //================》QWidget操作，主窗口
    this->setWindowTitle("你过来啊"); //设置标题

    //设置起点和宽度高度
    this->setGeometry(0, 0, 400, 300);
    this->move(100, 100);   //设置起点
    this->resize(500, 400); //设置大小

    //获取宽高
    int w = this->width();
    int h = this->height();
    qDebug() << "w = " << w << ", h = " <<h;

    int i = this->x();  //获取位置
    int j = this->y();
    qDebug() << i << ", " << j;
    qDebug() << this->geometry();


    QString str = this->objectName(); //获取对象名称
    qDebug() << "str = " << str;


}

Widget::~Widget()
{
    delete ui;
}
