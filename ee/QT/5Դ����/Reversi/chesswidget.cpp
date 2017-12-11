#include "chesswidget.h"
#include <QPainter>
#include <QPen>
#include <QMouseEvent>
#include <QDebug>

ChessWidget::ChessWidget(QWidget *parent)
    : QWidget(parent)
{
    chessX = -1;
    chessY = -1;

    chessInfo = NULL;
}

ChessWidget::~ChessWidget()
{

}

void ChessWidget::paintEvent(QPaintEvent *)
{
    gridW = width()/10;  //窗口宽度分10份
    gridH = height()/10; //窗口高度分10份

    //棋盘起点坐标
    startX = gridW;
    startY = gridH;

    QPainter p(this); //创建画家，指定窗口为绘图设备

    //背景图
    //p.drawPixmap(rect(), QPixmap(":/new/prefix1/image/bg1.jpg"));

    int lineWidth = 2;

    //设置画笔
    QPen pen;
    pen.setWidth(lineWidth); //线宽
    p.setPen(pen);  //将画笔交给画家


    //取中间8份画棋盘
    for(int i = 0; i <= 8; i++)
    {
        //横线
        p.drawLine(startX, startY+i*gridH, startX+8*gridW, startY+i*gridH);

        //竖线
        p.drawLine(startX+i*gridW, startY, startX+i*gridW, startY+8*gridH);
    }

    //定义一个数组指针类型
    typedef GridState (*PARRAY)[8];
    PARRAY a; //数组指针变量
    a = (PARRAY)chessInfo;

    if(a == NULL)
    {
        return;
    }

    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            if(a[i][j] == Black)
            {
                // 宽度和高度减2*线宽时为了在棋子的周围画一个正方形
                p.drawPixmap(startX+lineWidth+i*gridW, startY+lineWidth+j*gridH,
                     gridW-2*lineWidth, gridH-2*lineWidth,
                     QPixmap(":/new/prefix1/image/black.png")
                     );
            }
            else if(a[i][j] == White)
            {
                // 宽度和高度减2*线宽时为了在棋子的周围画一个正方形
                p.drawPixmap(startX+lineWidth+i*gridW, startY+lineWidth+j*gridH,
                     gridW-2*lineWidth, gridH-2*lineWidth,
                     QPixmap(":/new/prefix1/image/white.png")
                     );

            }
        }
    }

    // 下棋后，在棋子周围画一个绿色的正方形
    // 提醒当前下子的位置
    if(chessX != -1 && chessY != -1)
    {
        pen.setColor(Qt::green);  // 设置画笔的颜色，绿色
        p.setPen(pen);      // 把画笔交给画家
        p.drawRect(startX+lineWidth+chessX*gridW,startY+lineWidth+chessY*gridH,
                         gridW-2*lineWidth,gridH-2*lineWidth);    // 画矩形
    }



}

void ChessWidget::mousePressEvent(QMouseEvent *e)
{
    //获取点击的坐标
    int x = e->x();
    int y = e->y();

    // 要保证点击点在棋盘范围里面
    if(x >= startX && x <= startX+8*gridW
       && y >= startY && y <= startX+8*gridH)
    {
        // 棋盘的位置转换转换为坐标下标值
        // 类似于a[i][j]的i和j
//        chessX = (x - startX)/gridW;
//        chessY = (y - startY)/gridH;
//        qDebug() << chessX << chessY;

//        //更新窗口，间接调用paintEvent()
//        update();

        emit pressPoint((x - startX)/gridW, (y - startY)/gridH);
    }
}

//设置棋盘状态
void ChessWidget::setChessInfo(int x, int y, void *chess)
{
    chessX = x;
    chessY = y;

    chessInfo = chess;

    update(); //刷图
}
