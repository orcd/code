#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <cstring>
#include <QMessageBox>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    //信号和槽
    connect(ui->chessboard, &ChessWidget::pressPoint,
    [&](int x, int y) //点击棋盘时，响应
    {
        if(currentRole != myRole)
        {   //如果落子的不是我的角色，说明对方的棋权
            return;
        }

        cout << "x = " << x << ", y = " << y;
        if( judgeRule(x, y, 8, chess, currentRole) > 0) //能吃子才更新棋盘
        {
            if(mode == Network)
            { //如果是网络对战模式，需要给对方发送下标
                //"cmd=play&x=1&y=1"
                emit networkPoint(x, y);
            }


            ui->chessboard->setChessInfo(x, y, chess);
            this->changeRole(); //改变角色
        }

    }

    );

    //倒计时处理
    connect(&leftTimer, &QTimer::timeout,
    [&]()
    {
        num--;
        ui->lcdNumberTime->display(num);
        if(0 == num)
        {
            //改变角色
            changeRole();
        }
    }
    );

    //机器下子定时器
    connect(&machineTimer, &QTimer::timeout,
    [&]()
    {
        machinePlay(); //机器落子
    }

    );
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::initChess()
{
    memset(chess, Empty, sizeof(chess));
    chess[3][3] = Black;
    chess[4][4] = Black;
    chess[4][3] = White;
    chess[3][4] = White;

    ui->chessboard->setChessInfo(-1, -1, chess);

    currentRole = Black; //默认黑子先下
    ui->labelWhite->hide();

    //黑白子个数显示
    ui->lcdNumberBlack->display(2);
    ui->lcdNumberWhite->display(2);

    //时间为15s
    num = 15;
    ui->lcdNumberTime->display(num);

    if(leftTimer.isActive() == false)
    {
        leftTimer.start(1000);
    }

    //如果用户选择了白子，应该启动机器的定时器
    if(mode == Machine && myRole == White)
    {
        machineTimer.start(1000);
    }

}

void MainWidget::changeRole()//改变落子角色
{
    num = 15;
    ui->lcdNumberTime->display(num);


    if(currentRole == Black)
    {//白子下
        currentRole = White;
        ui->labelBlack->hide();
        ui->labelWhite->show();

    }
    else
    {//黑子
        currentRole = Black;
        ui->labelBlack->show();
        ui->labelWhite->hide();
    }

    judgeResult();//判断结果

    //currentRole, 当前落子的角色
    //myRole，我选择的角色
    if(mode == Machine && currentRole != myRole)
    {
        machineTimer.start(1000); //启动机器下子的定时器
    }

}

void MainWidget::showMainWidget(PlayMode mode, GridState role) //显示主窗口
{
    this->mode = mode; //模式
    myRole = role;

    if(mode == Machine)
    {
        ui->labelMode->setText("人机对战模式");
    }
    else
    {
        ui->labelMode->setText("网络对战模式");
    }

    if(role == Black)
    {//我选择了黑子
        ui->labelBlack->setText("我方黑子下");
        ui->labelWhite->setText("对方白子下");
    }
    else
    {//我选择了白子
        ui->labelBlack->setText("对方黑子下");
        ui->labelWhite->setText("我方白子下");
    }

    initChess(); //初始化

    moveToCenter(this); //当前窗口居中显示
}

void MainWidget::closeEvent(QCloseEvent *) //窗口关闭时间
{
    cout << "主窗口关闭";
    emit this->closeMainWidget();

    //关闭定时器
    if(leftTimer.isActive() == true)
    {
        leftTimer.stop();
    }

    if(machineTimer.isActive() == true)
    {
        machineTimer.stop();
    }
}

void MainWidget::judgeResult()//判断结果
{
    int wNum = 0;
    int bNum = 0;
    bool isOver = true;

    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            if(chess[i][j] == Black)
            {//黑子
                ++bNum;
            }
            else if(chess[i][j] == White)
            {
                ++wNum;
            }

            //判断黑白子在i, j位置，能否吃子，没有改变chess的标志位
            if( 0 < judgeRule(i, j, 8, chess, Black, false)
                || 0 < judgeRule(i, j, 8, chess, White, false))
            {
                isOver = false;
            }

        }
    }

    //黑白棋个数显示
    ui->lcdNumberBlack->display(bNum);
    ui->lcdNumberWhite->display(wNum);

    if(isOver == false)
    {
        return;
    }


    //关闭定时器
    if(leftTimer.isActive() == true)
    {
        leftTimer.stop();
    }

    if(machineTimer.isActive() == true)
    {
        machineTimer.stop();
    }

    QString str;
    if(bNum > wNum)
    { //黑子赢
        if(myRole == Black)
        {
            str = "我方黑子赢";
        }
        else
        {
            str = "对方黑子赢";
        }

    }
    else if(bNum < wNum)
    {//白子赢
        if(myRole == White)
        {
            str = "我方白子赢";
        }
        else
        {
            str = "对方白子赢";
        }
    }
    else
    {//平局
        str = "平局";
    }

    QMessageBox::information(this, "结束", str);

}

void MainWidget::machinePlay()//机器落子
{
    machineTimer.stop(); //停止机器时间

    //找到能吃子的位置
    int max = 0;
    int px = -1, py = -1;
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            int num = judgeRule(i, j, 8, chess, currentRole, false);
            if(num > 0)
            {
                //先找4个角落
                if(
                    (i == 0 && j == 0) ||
                    (i == 7 && j == 0) ||
                    (i == 0 && j == 7) ||
                    (i == 7 && j == 7)  )
                {
                    px = i;
                    py = j;
                    goto End;
                }

                if(max < num)
                {//吃子个数最多的
                    px = i;
                    py = j;
                    max = num; //这里没有break
                }
            }
        }
    }

End:
    if(px == -1)
    {//说明机器没有落子的地方
        this->changeRole();//改变角色
        return;
    }

    //机器吃子
    judgeRule(px, py, 8, chess, currentRole);
    ui->chessboard->setChessInfo(px, py, chess); //更新棋盘

    //改变角色
    changeRole();

}

void MainWidget::networkPlay(int x, int y) //网络对战下子
{
    judgeRule(x, y, 8, chess, currentRole);
    ui->chessboard->setChessInfo(x, y, chess); //更新棋盘

    //改变角色
    changeRole();
}











