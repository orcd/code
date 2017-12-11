#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //声明
    void writeFile(); //写文件
    void readFile();  //读文件

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
