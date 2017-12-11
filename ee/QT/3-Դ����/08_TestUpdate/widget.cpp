#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    x = 0;//鼠标点击，x坐标位置自动加20；

    i = -1;//图片的大小
    j = -1;
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(x, 0, 100, 100, QPixmap(":/new/prefix1/image/face.png"));

    if(i != -1 && j != -1)
    {
        p.drawPixmap(i, j, 50, 50, QPixmap(":/new/prefix1/image/face.png"));
    }

}

void Widget::on_pushButton_clicked()
{
    x+=20;

    if(x >= this->width())
    {
        x = 0;
    }

    ui->label->setText(QString::number(x));

    this->update(); //人为刷新，刷新整个窗口
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    ui->label->setText(QString("%1, %2").arg(e->x()).arg(e->y()));
    i = e->x();//图片的位置为子窗口鼠标点击为起点
    j = e->y();

    this->update(); //人为刷新，刷新整个窗口
}











