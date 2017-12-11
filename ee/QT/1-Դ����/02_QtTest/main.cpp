//框架
#include <QApplication>
#include <QWidget> //窗口基类

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //用户写的代码
    QWidget w;
    w.setWindowTitle("are u ok？");
    w.show();

    return a.exec();
}
