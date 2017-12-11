#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "common.h"
#include <QTimer>
#include <QUdpSocket>
#define NUM 8

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

    //显示主窗口
    void showMainWiget(PlayMode mode, GridState myRole);

    //提示该谁下
    void showTip();

    void initChessInfo(); //初始化

    // 改变棋子的角色
    void changeRole();

    //胜负判断
    void judgeResult();

    //机器下子
    void machinePlay();

    //操作套接字
    void useUdpSocket();

    //处理网络上的数据包
    void dealNetworkData(QString);

    //发送连接请求包
    void sendConnectData(QString, QString ip, short port);

signals:
    void mainWidgetCloseSiganl();  //主窗口关闭信号
    void goBackSignal();    //回到选择界面信号
    void connectInfo(QString, short, QString);
    void connectOk(QString, short);

public slots:
    // 槽函数，接收棋盘窗口的信号
    // 参数为棋盘下棋的坐标
    void dealPressPoint(QPoint);

protected:
    // 绘图事件，画背景图
    void paintEvent(QPaintEvent *);
    void closeEvent(QCloseEvent *); //关闭窗口时触发


private:
    Ui::MainWidget *ui;

    PlayMode mode;  //模式，人机或网络对战
    GridState currentRole;  //当前角色
    GridState myRole;       //我的角色，用户选择的角色

    QString ip;     //网络对战，对方ip
    quint16 port;   //网络对战，对方端口

    GridState chessInfo[NUM][NUM]; //二维数组，标志棋盘棋子状态

    int timeNum;   //剩余时间
    QTimer leftTimer;       //倒计时定时器
    QTimer machineTimer;   //机器定时器

    QUdpSocket *udpSocket;  //udp套接字
};

#endif // MAINWIDGET_H
