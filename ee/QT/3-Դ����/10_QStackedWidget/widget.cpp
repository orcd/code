#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0); //显示第几个页面
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_3_clicked()
{
    static int i = 0;
    ++i;
    if(i == 3)
    {
        i = 0;
    }
    ui->stackedWidget->setCurrentIndex(i); //显示第几个页面
}
