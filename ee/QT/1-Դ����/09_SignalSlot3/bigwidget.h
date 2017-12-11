#ifndef BIGWIDGET_H
#define BIGWIDGET_H

#include <QWidget>
#include "smallwidget.h"//包含子敞口的头文件
#include <QPushButton>按钮


//主窗口操作子窗口，直接调用子窗口的成员函数，因为子窗口是主窗口的对象成员
//子窗口交互主窗口，子窗口发信号，主窗口connect，自己处理
class BigWidget : public QWidget
{
    Q_OBJECT

public:
    BigWidget(QWidget *parent = 0);
    ~BigWidget();

    //槽函数
    void showSmallWidget();
    void getSmallWidgetData();
    void dealSmallSiganl(int, QString);

private:
    SmallWidget sw;//子窗口类名创建为指针成员；

    QPushButton b;//
    QPushButton b1;
};

#endif // BIGWIDGET_H
