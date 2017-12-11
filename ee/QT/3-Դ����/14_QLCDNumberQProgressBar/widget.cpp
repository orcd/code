#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lcdNumber->display(6666);

    ui->progressBar->setMinimum(0);     //最小值
    ui->progressBar->setMaximum(200);   //最大值
    ui->progressBar->setValue(100);     //当前值
}

Widget::~Widget()
{
    delete ui;
}
