#include "smallwidget.h"
#include <QDebug>

SmallWidget::SmallWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("我是小弟");//改子窗口的标题

    b.setText("显示父窗口");
    b.setParent(this);

    //信号和槽连接
    connect(&b, &QPushButton::pressed, this, &SmallWidget::showBigWidget);

}

void SmallWidget::testFunc(int &a)//本身数据
{
    qDebug() << "testFunc";
    a = 250;
}

void SmallWidget::showBigWidget()
{
    qDebug() << "主窗口显示";

    emit smallSignal(123, "你过来啊");
}

