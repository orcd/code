#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>


class MyButton : public QPushButton//Qt连接按钮
{
public:
    MyButton();
    MyButton(const QString & text, QWidget * parent = 0);
    ~MyButton();
};

#endif // MYBUTTON_H
