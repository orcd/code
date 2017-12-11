#include "runbutton.h"
#include <QDebug>
#include <QTime>
#include <stdlib.h>
#include <time.h>

RunButton::RunButton()
{
    this->setText("你过来啊");

    //this->setMouseTracking(true); //设置根据鼠标

    //随机种子
    qsrand((unsigned int)time(NULL));
    //srand((unsigned int)time(NULL)); //随机种子，放在构造函数

    qDebug() << (unsigned int)time(NULL);
    qDebug() << QTime(0,0,0).secsTo(QTime::currentTime());

}

//void RunButton::mouseMoveEvent(QMouseEvent *)
void RunButton::enterEvent(QEvent *)
{

    qDebug() << "mouseMoveEvent";

    QWidget *p = this->parentWidget(); //获取父窗口的控件
    if(p == NULL)
    {
        qDebug() << "p == NULL";
        return;
    }
    //父窗口的宽高
    int w = p->width();
    int h = p->height();

    //按钮的宽高
    int bw = this->width();
    int bh = this->height();

    int x, y;
    if(w-bw != 0)
    {
        x = qrand() % (w-bw);
    }

    if(h-bh != 0)
    {
        y = qrand() % (h-bh);
    }

    qDebug() << "x = " << x << ", y = " << y;


    move(x, y);


}

