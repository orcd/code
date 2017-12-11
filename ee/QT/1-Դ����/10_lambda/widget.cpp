#include "widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    b.setText("^_@");
    b.setParent(this);

    QString str = "hello mike";
    int a;

    connect(&b, &QPushButton::clicked, this,
    [=](bool isCheck) mutable
    {
        qDebug() << "isCheck = " << isCheck;
        a = 10;
    }

    );
}

Widget::~Widget()
{

}
