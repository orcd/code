#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>
#include <QPushButton>

class SmallWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SmallWidget(QWidget *parent = 0);

    void testFunc(int &a);

    void showBigWidget();

signals: //信号声明标示符
    //信号就是函数声明，这个函数无需定义
    void smallSignal(int, QString);

public slots:

private:
    QPushButton b;//通知BIg的按钮
};

#endif // SMALLWIDGET_H
