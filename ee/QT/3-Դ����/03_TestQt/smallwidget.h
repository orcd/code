#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>

namespace Ui {
class SmallWidget;
}

class SmallWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SmallWidget(QWidget *parent = 0);
    ~SmallWidget();

    void setInfo(QString name, int value, int max);

private:
    Ui::SmallWidget *ui;
};

#endif // SMALLWIDGET_H
