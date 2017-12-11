#include "mywidget.h"
#include <QPushButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    p = new QPushButton("^_^", this);

    button.setText("@_@");
    button.setParent(this);
    button.move(100, 100);

}

MyWidget::~MyWidget()
{
    //delete p; //这个是多余的，因为指定了父对象，自动回收
}
