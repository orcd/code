#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <stdlib.h>
#include <time.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置种子
    srand((unsigned int)time(NULL));

    qDebug() << rand();
}

Widget::~Widget()
{
    delete ui;
}
