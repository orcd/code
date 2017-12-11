#include "bigwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BigWidget w;
    w.show();

    return a.exec();
}
