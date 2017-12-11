#include "widget.h"
#include <QApplication>
#include "mybutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

//    MyButton b;
//    b.show();

    return a.exec();
}
