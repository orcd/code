#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "customwidget.h"

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MyWidget *ui;

    CustomWidget cw;
};

#endif // MYWIDGET_H
