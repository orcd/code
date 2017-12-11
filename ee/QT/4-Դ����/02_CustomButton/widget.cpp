#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->button->setIcon(":/new/prefix1/image/Luffy.png");

    connect(ui->button, &MyButton::pressed,
    [&]()
    {
        qDebug() << "按钮被按下";
    }

    );

    connect(ui->button, &MyButton::release,
    [&]()
    {
        qDebug() << "按钮被抬起";
    }

    );
}

Widget::~Widget()
{
    delete ui;
}
