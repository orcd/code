#include "modewidget.h"
#include <QApplication>
#include "common.h"
#include "chessboard.h"
#include "mainwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModeWidget w;
    //w.show();
    moveToCenter(&w); //在屏幕中间显示

//    Chessboard cw;
//    cw.show();

//    MainWidget mw;
//    mw.show();

    return a.exec();
}
