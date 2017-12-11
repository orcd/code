//框架
#include <QApplication>
#include <QWidget> //窗口基类
#include "mybutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget w;


    MyButton *p = new MyButton("^_^", &w);//直接在语句中实现控件
//    p->setText("^_@");
//    p->setParent(&w);

    w.show();

    a.exec();

    return 0;
}



