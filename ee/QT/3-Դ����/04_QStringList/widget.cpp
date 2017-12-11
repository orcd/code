#include "widget.h"
#include "ui_widget.h"
#include <QStringList>
#include <QDebug>
#define cout qDebug() //没有分号

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QStringList list;
    list << "mike";
    list << "hello";
    list.append("abc");
    cout << "list = " << list; //"mike", "hello", "abc"

    for(int i = 0; i < list.size(); ++i)
    {
        QString tmp = list.at(i);
        cout << "tmp = " << tmp;
    }

    QString str = "mike,hello,abc,qt";
    QStringList list2 = str.split(",");
    cout << "list2 = " << list2;

    cout << list2.contains("123"); //是否包含某个成员

    list2.removeOne("mike");    //移除"mike"
    cout << "list2 = " << list2;




}

Widget::~Widget()
{
    delete ui;
}
