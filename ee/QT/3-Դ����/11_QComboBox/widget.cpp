#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->comboBox->setCurrentIndex(1); //默认显示第几个，从0开始
    ui->comboBox->setEditable(false); //不允许编辑

    ui->comboBox->insertItem(0, "aaaaaaaaaa"); //从第几个插入内容

    //获取当前选中的内容
    QString str = ui->comboBox->currentText();
    qDebug() << "str = " << str;

}

Widget::~Widget()
{
    delete ui;
}

//选择了，自动调用
void Widget::on_comboBox_currentIndexChanged(int index)
{
    QString str = ui->comboBox->itemText(index); //根据标号，获取内容
    qDebug() << "str111 = " << str;
}








