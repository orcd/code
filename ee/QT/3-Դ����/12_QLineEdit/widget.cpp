#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lineEdit->setText("2222222222222"); //设置内容
    //ui->lineEdit->setReadOnly(true);   //只读
    qDebug() << ui->lineEdit->text(); //获取内容

    //设置显示模式，密码模式
    ui->lineEdit->setEchoMode(QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}

//行编辑，按回车后自动调用
void Widget::on_lineEdit_returnPressed()
{
    qDebug() << "str = " << ui->lineEdit->text(); //获取内容
}
