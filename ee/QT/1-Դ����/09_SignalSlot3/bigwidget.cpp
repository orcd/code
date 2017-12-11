#include "bigwidget.h"
#include <QDebug>

BigWidget::BigWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("我是老大");//主窗口

    b.setText("显示子窗口");//制定父对象
    b.setParent(this);
    b.move(100, 100);

    //信号和槽链接
    //connect(&b, &QPushButton::pressed, this, &BigWidget::showSmallWidget);
    connect(&b, &QPushButton::pressed, this,
    [&]()
    {
        this->hide();
        sw.show();
        sw.resize(300, 300);

    }

    );

    b1.setText("和子窗口交互");//获取small的数据
    b1.setParent(this);
    //b1.move(10, 10);
    connect(&b1, &QPushButton::pressed, this, &BigWidget::getSmallWidgetData);


    connect(&sw, &SmallWidget::smallSignal, this, &BigWidget::dealSmallSiganl);

}

BigWidget::~BigWidget()
{

}

void BigWidget::showSmallWidget()//
{
this->hide();//调用槽函数【&}
    sw.show();
    sw.resize(300, 300);
}

void BigWidget::getSmallWidgetData()//获取small的数据函数
{
    int a;
    sw.testFunc(a);
    qDebug() << "a = " << a;

}

void BigWidget::dealSmallSiganl(int a, QString b)//接收信号
{
    qDebug() << "a = " << a;
    qDebug() << "b = " << b.toUtf8().data();
    this->show();
    this->resize(300, 300);
    sw.hide();
}


