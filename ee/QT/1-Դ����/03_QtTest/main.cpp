//框架
#include <QApplication>
#include <QWidget> //窗口基类
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //用户写的代码
    QWidget w;  //创建一个窗口对象
    w.setWindowTitle("are u ok？"); //设置标题

    //指定父控件的方法1
    QPushButton b;      //创建一个按钮
    b.setText("^_@");   //设置按钮上的内容
    //b.show();
    b.setParent(&w);    //指定父控件，和继承没有关系

    //指定父控件的方法2，通过构造函数传递
    QPushButton b2("￥_￥", &w); //设置内容，同时指定父控件
    b2.move(100, 100);


    w.show();


    return a.exec();
}

