#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QResizeEvent>

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
    void keyPressEvent(QKeyEvent *); //键盘按下
    void resizeEvent(QResizeEvent *); //大小改变事件
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);


private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
