#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QWheelEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void mousePressEvent(QMouseEvent *); //鼠标点击事件
    void mouseMoveEvent(QMouseEvent *);//鼠标移动
    void wheelEvent(QWheelEvent *); //滚轮事件


private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
