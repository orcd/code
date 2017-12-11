#include "modewidget.h"
#include <QApplication>
#include "mainwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModeWidget w;
    w.show();

//    MainWidget mw;
//    mw.show();

    return a.exec();
}
