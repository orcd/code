#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPainter> //画家
#include <QPen>    //画笔

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

void Widget::paintEvent(QPaintEvent *e)
{
    qDebug() << " e->rect() = " << e->rect(); //打印绘图区域

    //#include <QPainter> //画家
    QPainter p(this); //不是指定父对象，指定绘图设备，必须指定绘图设备

    //给窗口画背景图
    p.drawPixmap(this->rect(), QPixmap("../Image/bk.jpg"));


    //画笔, #include <QPen>    //画笔
    QPen pen;
    pen.setWidth(10); //设置线宽
    pen.setStyle(Qt::DashLine); //设置线的风格
    //pen.setColor(Qt::red);      //设置为红色
    pen.setColor(QColor(255, 255, 255));
    p.setPen(pen);    //画笔交给画家


    //画直线
    p.drawLine(50, 50, 450, 50);
    p.drawLine(50, 50, 50, 450);


    //画矩形
    p.setPen(QPen());
    p.drawRect(100, 100, 100, 100);

    p.drawEllipse(100, 100, 100, 100);

}
