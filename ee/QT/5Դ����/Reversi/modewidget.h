#ifndef MODEWIDGET_H
#define MODEWIDGET_H

#include <QWidget>
#include "mainwidget.h"
#include <QUdpSocket>

namespace Ui {
class ModeWidget;
}

class ModeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ModeWidget(QWidget *parent = 0);
    ~ModeWidget();

    void useUdpSocket(); //udp操作
    void dealBuf(char *buf); //处理网络上接收到的数据包

private slots:
    void on_pushButtonNetwork_clicked();

    void on_pushButtonMachine_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonBlack_clicked();

    void on_pushButtonWhite_clicked();

    void on_toolButtonSure_clicked();

private:
    Ui::ModeWidget *ui;

    MainWidget mw;

    QUdpSocket *udp; //udp指针
};

#endif // MODEWIDGET_H
