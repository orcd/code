#include "chessboard.h"
#include <QPainter>
#include <QPen>

//==================================================================
//功能介绍：构造函数，主要是初始化一些数据
//入口参数： fileName为棋盘背景图的路径
//         num为横着或竖着的格数，棋盘网格数8*8，所以默认参数为8
//出口参数：无
//===================================================================
Chessboard::Chessboard(QWidget *parent, QString fileName, int num) : QWidget(parent)
{
    bgPath = fileName;  // 图片路径
    gridNum = num;      // 横着或竖着的格数

    // 棋子状态开始时是没有设置，chessManInfo为指针变量
    chessManInfo = NULL;

    //初始化棋盘的起点坐标
    startX = 0;
    startY = 0;

    // (px,py)为当前下子的坐标
    px = -1;
    py = -1;

    //黑白棋图片路径
    bPath = ":/new/prefix1/image/black.png";
    wPath = ":/new/prefix1/image/white.png";
}

//==================================================================
//功能介绍：绘图事件，当窗口状态改变时会自动被调用，想人为调用需要调用update()函数
//        画图事件，主要功能是画棋盘背景图、棋盘、棋子
//===================================================================
void Chessboard::paintEvent(QPaintEvent *)
{
    // 画图对象(相当于创建一个画家)
    // this调用当然这个窗口用这个画家
    QPainter painter(this);

    //确定起点和宽高
    startX = this->width()/(gridNum+2);
    startY = this->height()/(gridNum+2);
    gridW = startX;
    gridH = startY;

    // 画棋盘背景图片
    painter.drawPixmap(startX - gridW/2, startY-gridH/2,
                gridNum*gridW+gridW, gridNum*gridH+gridH,
                QPixmap(bgPath));

    // 棋盘线宽的设置，根据棋盘方格的大小作相应的改变
    int lineWidth = 0;
    if(gridW < 30)
    {
        lineWidth = 1;
    }
    else if((gridW >= 30)&&(gridW <50))
    {
        lineWidth = 2;
    }
    else if(gridW >= 50)
    {
        lineWidth = 3;
    }

    QPen myPen;
    myPen.setWidth(lineWidth);  // 通过画笔设置线宽
    myPen.setColor(Qt::black);  // 设置画笔颜色
    painter.setPen(myPen);      // 将笔交给画家

    // 画棋盘
    for(int i=0;i<=gridNum;i++)
    {
        painter.drawLine(startX,startY+i*gridH,
                            startX+gridW*gridNum,startY+i*gridH);    // 画横线
        painter.drawLine(startX+i*gridW,startY,
                            startX+gridW*i,startY+gridH*gridNum);    // 画竖线
    }

    //  通过typedef自定义一个类型(数组指针类型)
    //  因为chessManInfo本来是(void *)类型的
    //  PARRAY(chessManInfo)这样就能把(void *)强制转换为数组指针类型
    typedef int (*PARRAY)[gridNum];

    // 画棋子
    // 当棋子已经设置了状态后
    if(NULL != chessManInfo)
    {
        for(int i=0; i<gridNum; i++)
        {
            for(int j=0; j<gridNum; j++)
            {
                // 注意线宽的处理
                // 宽度和高度减2*线宽时为了在棋子的周围画一个正方形
                if(PARRAY(chessManInfo)[i][j] == Black)
                {
                    // 画黑子
                    painter.drawPixmap(startX+lineWidth+gridW*i,startY+lineWidth+gridH*j,
                                       gridW-2*lineWidth,gridH-2*lineWidth,QPixmap(bPath));
                }
                else if((PARRAY(chessManInfo)[i][j]) == White)
                {
                    // 画白子
                    painter.drawPixmap(startX+lineWidth+gridW*i,startY+lineWidth+gridH*j,
                                       gridW-2*lineWidth,gridH-2*lineWidth,QPixmap(wPath));
                }
            }
        }
    }

    // 下棋后，在棋子周围画一个绿色的正方形
    // 提醒当前下子的位置
    // (px,py)为当前下子的坐标必须在(0, 0)到(7, 7)的
    if(px >=0 && py >= 0 && px<gridNum && py<gridNum)
    {
        myPen.setColor(Qt::green);  // 设置画笔的颜色，绿色
        painter.setPen(myPen);      // 把画笔交给画家
        painter.drawRect(startX+lineWidth+gridW*px,startY+lineWidth+gridH*py,
                         gridW-2*lineWidth,gridH-2*lineWidth);    // 画矩形
    }
}

//==================================================================
//功能介绍：鼠标点击事件，当鼠标点击会自动被调用，不需要(也不能)人为调用
//         此事件主要为了确定下子的位置
//         当鼠标点击时，发射一个信号
//===================================================================
void Chessboard::mousePressEvent(QMouseEvent *e)
{
    // 获取点击点x,y的坐标
    int x = e->x();
    int y = e->y();

    // 要保证点击点在棋盘范围里面
    if((x > startX) && (x < (startX + gridW*gridNum))&&
       (y > startY)&&(y < (startY + gridH*gridNum)))
    {
        // 将坐标值转换为相对棋盘的数组下标
        // 类似于a[i][j]的i和j
        x = (x - startX)/gridW;
        y = (y - startY)/gridH;

        // 给主窗口发射一个信号，参数为点击棋盘里的坐标
        emit pressPoint(QPoint(x,y));
    }
}

//==================================================================
// 设置棋盘状态，manInfo为数组的首地址，(px,py)为当前下子的坐标
//===================================================================
void Chessboard::setChessManInfo(void *manInfo,int px,int py )
{
    // 棋盘下棋的坐标
    this->px = px;
    this->py = py;

    // 棋盘状态指针，方便接收从主窗口传过来的棋盘状态
    chessManInfo = manInfo; // 保存设置好的棋子状态

    this->update(); //更新绘图
}

