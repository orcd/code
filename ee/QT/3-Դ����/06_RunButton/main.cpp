#include "widget.h"
#include "runbutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

//    RunButton b;
//    b.show();

    return a.exec();
}
