#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //显示选中第几个页面
    ui->tabWidget->setCurrentIndex(1);
    //ui->tabWidget->setCurrentWidget(ui->tab_2);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_tabWidget_currentChanged(int index)
{
    qDebug() << "index = " << index;
}
