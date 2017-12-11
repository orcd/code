#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //去表框
    this->setWindowFlags(Qt::FramelessWindowHint);
    //this->setWindowFlags(Qt::CustomizeWindowHint); //定制化

    //设置背景透明
    this->setAttribute(Qt::WA_TranslucentBackground);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(this->rect(), QPixmap(":/new/prefix1/image/sunny.png"));
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::RightButton)
    {
        this->close();
    }
    else if(e->buttons() & Qt::LeftButton)
    {
         point = e->globalPos() - this->frameGeometry().topLeft();
    }
    qDebug() << "globalPos() = " << e->globalPos(); //相对于屏幕
    qDebug() <<"this->frameGeometry().topLeft() = " << this->frameGeometry().topLeft();

}

void Widget::mouseMoveEvent(QMouseEvent *e)
{
    qDebug() <<"topLeft() = " << this->frameGeometry().topLeft();
    if(e->buttons() & Qt::LeftButton)
    {
        move(e->globalPos() - point);
    }
}
