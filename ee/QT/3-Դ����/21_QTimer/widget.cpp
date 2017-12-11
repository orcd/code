#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    num = 0;

    //定时器的信号和槽, 每隔一段时间，自动调用回调函数
    connect(&timer, &QTimer::timeout, this,
    [&]()
    {
        num++;
        ui->lcdNumber->display(num);
    }
    );
}

Widget::~Widget()
{
    delete ui;
}

//开始
void Widget::on_pushButton_clicked()
{
    if(timer.isActive() == false)
    { //定时器，没有启动，才操作
         timer.start(300); //以毫秒为单位
    }

}

//停止
void Widget::on_pushButton_2_clicked()
{
    if(timer.isActive() == true)
    {
         timer.stop();
    }

}
