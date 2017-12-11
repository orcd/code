#ifndef CHESSWIDGET_H
#define CHESSWIDGET_H

#include <QWidget>
#include "common.h"

class ChessWidget : public QWidget
{
    Q_OBJECT

public:
    ChessWidget(QWidget *parent = 0);
    ~ChessWidget();

    //设置棋盘状态
    void setChessInfo(int x, int y, void *chess);


protected:
    //重写绘图事件
    void paintEvent(QPaintEvent *);
    //重写鼠标按下事件
    void mousePressEvent(QMouseEvent *e);

signals:
    void pressPoint(int x, int y);


private:
    int gridW;  //棋盘水平方向一个格子的宽度
    int gridH;  //棋盘水平方向一个格子的高度
    int startX; //棋盘起点x坐标
    int startY; //棋盘起点y坐标

    int chessX, chessY; //棋盘下标

    void *chessInfo; //棋盘棋子状态


};

#endif // CHESSWIDGET_H
