#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QWidget>
#include "common.h"
#include <QMouseEvent>

// 棋盘类
class Chessboard : public QWidget
{
    Q_OBJECT
public:
    // fileName为棋盘背景图的路径
    // 棋盘网格数8*8，所以默认参数为8
    explicit Chessboard(QWidget *parent = 0, QString fileName = ":/new/prefix1/image/board.jpg", int num = 8);

    // 设置棋盘状态，manInfo为数组的首地址，(px,py)为当前下子的坐标
    void setChessManInfo(void *manInfo, int px = -1, int py = -1);

protected:
    // 绘图事件，主要功能是画棋盘，棋子
    void paintEvent(QPaintEvent *);

    // 鼠标点击事件，主要是确定棋盘方格的位置
    void mousePressEvent(QMouseEvent *);

signals:
    // 鼠标点击后，给发射的信号
    // QPoint参数为当前下子的坐标
    void pressPoint(QPoint);

public slots:

private:
    int gridW, gridH;   // 棋盘一个小方格的宽度、高度
    int startX,startY;  // 棋盘的起点坐标(startX,startX)
    int gridNum;        // 横着或竖着的格数，这里棋盘为8*8，所以为8

    // (px, py)为当前下子的坐标
    int px;
    int py;

    // 棋盘状态指针，方便接收从主窗口传过来的棋盘状态
    void *chessManInfo;

    QString bgPath;  // 用来保存棋盘图片的路径
    QString bPath, wPath;   //黑白棋图片路径

};

#endif // CHESSBOARD_H
