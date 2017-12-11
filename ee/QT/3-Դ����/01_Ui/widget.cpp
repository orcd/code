#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent)/*,
    ui(new Ui::Widget)*/
{
    ui = new Ui::MyWidget;

    //这种情况只是为了验证，无需掌握
    b = new QPushButton("&~@", this);
    b->setObjectName("b");

    ui->setupUi(this); //根据这些内容，新建控件

    ui->xxxx->setText("^_@");

    connect(ui->pushButton_3, &QPushButton::pressed, this,
        [&]()
        {
            qDebug() << "bbbbbbbbbb";
        }

    );


}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

}

void Widget::on_b_clicked()
{
    qDebug() << "aaaaaaaa";
}
