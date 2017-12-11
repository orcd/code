#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "common.h"
#include <QTimer>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

    void showMainWidget(PlayMode mode, GridState role); //显示主窗口

    void initChess(); //初始化
    void changeRole(); //改变落子角色
    void judgeResult(); //判断结果
    void machinePlay(); //机器落子
    void networkPlay(int x, int y); //网络对战下子

signals:
    void closeMainWidget();
    void networkPoint(int x, int y);

protected:
    void closeEvent(QCloseEvent *); //窗口关闭时间

private:
    Ui::MainWidget *ui;

    GridState chess[8][8]; //数组，标记棋盘棋子状态
    GridState currentRole; //当前落子角色
    PlayMode mode;     //对战模式
    GridState myRole;   //我的角色
    int num;            //倒计时数字
    QTimer leftTimer;   //定时器
    QTimer machineTimer;   //定时器
};

#endif // MAINWIDGET_H
