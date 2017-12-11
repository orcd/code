#include "widget.h"
#include "ui_widget.h"
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

void Widget::mousePressEvent(QMouseEvent *e) //鼠标点击事件
{
    qDebug() << "e->x() = " << e->x();
    qDebug() << "e->y() = " << e->y();
    QString str;

    if( e->button() == Qt::LeftButton)
    {
       str = "LeftButton";
    }
    else if(e->buttons() & Qt::RightButton)
    {
         str = "RightButton";
    }
    else if(e->buttons() & Qt::MidButton)
    {
         str = "MidButton";
    }

    QString tmp = QString("[%1](%2, %3)").arg(str).arg(e->x()).arg(e->y());
    ui->label->setText(tmp);

}

void Widget::mouseMoveEvent(QMouseEvent *e)//鼠标移动
{
    qDebug() << "e->x() = " << e->x();
    qDebug() << "e->y() = " << e->y();

    QString str;
    if(e->buttons() & Qt::LeftButton)
    {
         str = "LeftButton";
    }
    else if(e->buttons() & Qt::RightButton)
    {
         str = "RightButton";
    }
     else if(e->buttons() & Qt::MidButton)
    {
         str = "MidButton";
    }


    ui->label->setText( QString("move[%1](%2,%3)").arg(str).arg(e->x()).arg(e->y()) );
}

void Widget::wheelEvent(QWheelEvent *e) //滚轮事件
{
    QString str;
    if(e->orientation() == Qt::Vertical) //方向为垂直方向
    {
        qDebug() << e->angleDelta();
        if(e->angleDelta().y() > 0)
        {
            str = "向上";
        }
        else if(e->angleDelta().y() < 0)
        {
            str = "向下";
        }
    }

    ui->label->setText(str);
}









