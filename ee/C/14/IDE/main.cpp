#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //创建一个窗口，实例化对象，自动调用构造函数
    w.show();

    return a.exec(); //让程序一直运行，等待用户的操作(关闭窗口，移动窗口，按按钮)
}
