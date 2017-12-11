#ifndef MODEWIDGET_H
#define MODEWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QPoint>
#include <QMouseEvent>
#include "mainwidget.h"

namespace Ui {
class ModeWidget;
}

//模式选择窗口：人机对战、网络对战
class ModeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ModeWidget(QWidget *parent = 0);
    ~ModeWidget();

protected:
    void paintEvent(QPaintEvent *);         //绘图事件，画背景图
    void mousePressEvent(QMouseEvent *e);   //鼠标点击，获取点击坐标，处理移动
    void mouseMoveEvent(QMouseEvent *e);    //鼠标移动，移动窗口


private slots:
    void on_closeButton_clicked();
    void on_buttonMachine_clicked();
    void on_buttonNetwork_clicked();
    void on_backButton_clicked();
    void on_buttonBlack_clicked();
    void on_buttonWhite_clicked();

    void on_sureButton_clicked();

private:
    Ui::ModeWidget *ui;
    QPoint p;

    MainWidget mw; //主界面
};

#endif // MODEWIDGET_H
