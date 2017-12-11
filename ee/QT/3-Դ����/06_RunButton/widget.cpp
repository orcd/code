#include "widget.h"
#include "ui_widget.h"
#include "runbutton.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    RunButton * p = new RunButton;
    p->setParent(this);
}

Widget::~Widget()
{
    delete ui;
}
