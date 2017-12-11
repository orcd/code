#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>

namespace Ui {
class CustomWidget;
}

class CustomWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CustomWidget(QWidget *parent = 0);
    ~CustomWidget();

    //设置控件的属性
    void setInfo(QString name, int value, int max);

private:
    Ui::CustomWidget *ui;
};

#endif // CUSTOMWIDGET_H
