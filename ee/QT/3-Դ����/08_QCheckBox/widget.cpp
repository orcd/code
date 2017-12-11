#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //================== QCheckBox
    ui->checkBox->setChecked(true); //设置默认选中的
    ui->checkBox->setCheckable(false); //设置不能选择
    ui->checkBox->setEnabled(false); //设置灰色

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_checkBox_2_clicked()
{
    qDebug() << ui->checkBox_2->isChecked(); //打印是否被选中
}
