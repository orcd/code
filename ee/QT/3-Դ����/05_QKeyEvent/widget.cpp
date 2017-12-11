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

void Widget::keyPressEvent(QKeyEvent *e)
{
    QString str;
    //修饰键
    if(e->modifiers() == Qt::ShiftModifier)
    {
        str = "Shift+";
    }
    else if(e->modifiers() == Qt::ControlModifier)
    {
        str = "Ctrl+";
    }
    else if(e->modifiers() == Qt::AltModifier)
    {
        str = "Alt+";
    }

    //普通键
    switch (e->key())
    {
    case Qt::Key_Up:
        str += "up";
        break;
    case Qt::Key_Down:
        str += "down";
        break;
    case Qt::Key_Left:
        str += "left";
        break;
    case Qt::Key_Right:
        str += "right";
        break;
    default:
        break;
    }

    ui->label->setText(str);
}

void Widget::resizeEvent(QResizeEvent *e)//大小改变事件
{
    qDebug() << "e->oldSize() = " << e->oldSize();
    qDebug() << "e->size() = " << e->size();
}

void Widget::enterEvent(QEvent *)
{
    qDebug() << "进入";
}

void Widget::leaveEvent(QEvent *)
{
    qDebug() << "离开";
}




















