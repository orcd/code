#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);
    ~MyWidget();

public slots: //Qt 4必须
    void myClose();

private:
    QPushButton *p;
};

#endif // MYWIDGET_H
