#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QPainter>
#include <QMessageBox>
#include <QTimer>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    this->setWindowTitle("黑白棋");  //设置标题
    this->setMinimumSize(600, 500); //设置最小大小

     //操作套接字
    useUdpSocket();

    //信号和槽
    connect(ui->chessWiget, &Chessboard::pressPoint, this, &MainWidget::dealPressPoint);

    //定时器处理，倒计时处理
    connect(&leftTimer, &QTimer::timeout,
        [&]()
        {
            timeNum--;
            ui->lcdNumberTime->display(timeNum);    // 时间显示到LCD上

            if(timeNum == 0)   // 时间到就改变棋子的角色
            {
                changeRole();       // 改变棋子的角色

                //胜负判断
                judgeResult();
            }
        }

    );

    //定时器处理，机器下棋
    connect(&machineTimer, &QTimer::timeout,
        [&]()
        {
           //机器下子
            machinePlay();
        }

    );
}

MainWidget::~MainWidget()
{
    delete ui;
}

// 绘图事件，画背景图
void MainWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(this->rect(), QPixmap(":/new/prefix1/image/bg1.jpg"));
}

//关闭窗口时触发
void MainWidget::closeEvent(QCloseEvent *)
{
    cout << "主窗口关闭";
    //emit this->mainWidgetCloseSiganl();

    udpSocket->writeDatagram("cmd=disconnect", strlen("cmd=disconnect"),QHostAddress(ip), port);

    emit this->goBackSignal(); //切换回选择窗口

    if(leftTimer.isActive() == true)
    {//关闭定时器
        leftTimer.stop();
    }

    if(machineTimer.isActive() == true)
    {//关闭定时器
        machineTimer.stop();
    }
}

  //显示主窗口
void MainWidget::showMainWiget(PlayMode mode, GridState myRole)
{
    //设置对战模式和角色
    this->mode = mode;
    this->myRole = myRole;

    initChessInfo(); //初始化棋盘状态

    moveToCenter(this); //中央显示
}

//提示该谁下
void MainWidget::showTip()
{
    //myRole为我选择的角色，currentRole为当前下子角色

    if(myRole == Black)
    {//如果我是黑子
        ui->labelBlack->setText("我方黑子下");
        ui->labelWhite->setText("对方白子下");
    }
    else
    {//如果我是白子
        ui->labelBlack->setText("对方黑子下");
        ui->labelWhite->setText("我方白子下");
    }

    if(currentRole == Black)
    {//到黑子下
        ui->labelBlack->show();
        ui->labelWhite->hide();
    }
    else
    {//到白子下
        ui->labelBlack->hide();
        ui->labelWhite->show();
    }
}

//初始化
void MainWidget::initChessInfo()
{
    memset(chessInfo, Empty, sizeof(chessInfo));//全部置Empty
    int gridNum = NUM;

    //将棋盘中间的4个空间分别标志位2黑子2白子
    chessInfo[gridNum/2-1][gridNum/2-1]= Black;   // a[3][3]
    chessInfo[gridNum/2-1][gridNum/2]= White;     // a[3][4]
    chessInfo[gridNum/2][gridNum/2-1]= White;     // a[4][3]
    chessInfo[gridNum/2][gridNum/2]= Black;       // a[4][4]

    ui->chessWiget->setChessManInfo(chessInfo);   // 将棋子的状态通过setChessManInfo()传递过去

    //黑白棋个数统计
    ui->lcdNumberBlack->display(2);
    ui->lcdNumberWhite->display(2);

    timeNum = 10; //剩余时间
    ui->lcdNumberTime->display(timeNum);

    if(leftTimer.isActive() == false)
    {
        leftTimer.start(1000);
    }

    this->currentRole = Black;  //默认是黑子先下
    showTip();//提示该谁下

    //主界面提示，对战模式
    if(mode == Machine)
    {
        ui->labelMode->setText("人机对战模式");
    }
    else
    {
        ui->labelMode->setText("网络对战模式");
    }

    //如果选择的是白子，说明机器为黑子，机器先下
    if(mode == Machine && myRole == White)
    {
        if(machineTimer.isActive() == false)
        {
            machineTimer.start(1000);
        }
    }

}

// 槽函数，接收棋盘窗口的信号
// 参数为棋盘下棋的坐标
void MainWidget::dealPressPoint(QPoint p)
{
    if(this->currentRole != this->myRole)
    {//如果当前角色不是我的，说明不是我下，对方要下
        return;
    }

    cout << "p = " << p;

    // 如果能吃子，num大于0
    // 吃子规则的参数：棋盘数组坐标位置、格数、棋子状态)、棋子的角色
    if(0 < judgeRule(p.x(),p.y(),NUM, (void *)chessInfo, currentRole))
    {
        //更新棋盘状态
        ui->chessWiget->setChessManInfo(chessInfo,p.x(),p.y());

        if(mode == Network)
        {//网络对战，需要发送落子位置
            //"cmd=play&x=1&y=1";
            QString buf = QString("cmd=play&x=%1&y=%2").arg(p.x()).arg(p.y());
            udpSocket->writeDatagram(buf.toUtf8(), QHostAddress(ip), port);
        }

         // 改变棋子的角色
         changeRole();

         //胜负判断
         judgeResult();
    }
}

// 改变棋子的角色
void MainWidget::changeRole()
{
    //时间重新显示
    timeNum = 10; //剩余时间
    ui->lcdNumberTime->display(timeNum);

    // 如果当前为白子，就换为黑子
    if(this->currentRole == White)
    {
        this->currentRole = Black;
    }
    else
    {
        this->currentRole = White;
    }

    //提示该谁下
    showTip();

    if(mode == Machine && this->currentRole != myRole)
    {
        //机器下子
        machineTimer.start(1000);
    }
}

//胜负判断
void MainWidget::judgeResult()
{
    int blackNum=0;
    int whiteNum=0;
    bool isOver = true;

    // 棋盘的棋子遍历一遍，累计黑白棋各自的个数
    for(int i=0;i<NUM;i++)
    {
        for(int j=0;j<NUM;j++)
        {
            if(chessInfo[i][j] == White)// 白子
            {
              whiteNum++;
            }
            else if(chessInfo[i][j] == Black) // 黑子
            {
               blackNum++;
            }

            //黑子和白子在这个位置能吃子，说明游戏还不能结束
            if(0 < judgeRule(i,j,NUM, (void *)chessInfo,Black, false) ||
               0 < judgeRule(i,j,NUM, (void *)chessInfo,White, false))
            {
                isOver = false;
            }
        }
    }

    // 分别显示到对应的LCD上
    ui->lcdNumberBlack->display(blackNum);
    ui->lcdNumberWhite->display(whiteNum);

    if(false == isOver)
    {
        return;
    }

    if(leftTimer.isActive() == true)
    {//关闭定时器
        leftTimer.stop();
    }

    if(machineTimer.isActive() == true)
    {//关闭定时器
        machineTimer.stop();
    }


    QString str;
    // 判断输赢
    if(blackNum > whiteNum)
    {
        if(myRole == Black)
        {
            str = "我方黑子赢";
        }
        else
        {
            str = "对方黑子赢";
        }
    }
    else if(blackNum < whiteNum)
    {
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
    {
        str = "双方平局";
    }

    int ret = QMessageBox::question(this, "游戏结束", QString("%1!\n是否继续？").arg(str));
    if(ret == QMessageBox::Yes)
    {//重新游戏
        cout << "yes";

        initChessInfo(); //初始化
    }
    else
    {
         cout << "No";
         emit this->goBackSignal();
    }
}

//机器下子
void MainWidget::machinePlay()
{
    this->machineTimer.stop();   // 机器的时间先停止

    if(currentRole == myRole)
    {//角色是我，说明不是机器的期权
        return;
    }

    int num = 0;
    int max = 0; //记得初始化为0
    int px;
    int py;

    // 判断棋盘上哪些位置是能够吃子的
    for(int i= 0;i<NUM;i++)
    {
        for(int j=0;j<NUM;j++)
        {
            //最后一个参数为false，只是作为判断，不改变数组内容
            num = judgeRule(i,j,NUM,(void*)chessInfo, currentRole, false);
            if(num > max)   // 挑一个吃子最多的空格，并把坐标保存起来
            {
                max = num;  // 改变max的值
                px = i;
                py = j;
            }
        }
    }

    if(max == 0)    // 到这一步max为0，说明方格里都不能吃子，这是就改变棋子的角色
    {
        changeRole(); // 改变棋子的角色
        return ;      // 中断此函数
    }

    // 吃子
    judgeRule(px,py,NUM, (void *)chessInfo,currentRole);
    ui->chessWiget->setChessManInfo((void *)chessInfo,px,py);  // 更新棋盘

    // 改变棋子的角色
    changeRole();

    //胜负判断
    judgeResult();
}

 //操作套接字
void MainWidget::useUdpSocket()
{
    cout << "套接字创建……";
    udpSocket = new QUdpSocket(this); //创建套接字
    if(udpSocket == NULL)
    {
        QMessageBox::warning(this, "警告", "创建套接字失败！！");
        return;
    }

    bool isOk = udpSocket->bind(8888);
    if(isOk == false)
    {
        QMessageBox::warning(this, "警告", "绑定端口失败！！");
        return;
    }

    //接收到信息自动触发readyRead()
    connect(udpSocket, &QUdpSocket::readyRead,
        [=]()
        {
            //读取对方发送的内容
            char buf[1024] = {0};
            QHostAddress cliAddr; //对方地址
            quint16 port;    //对方端口
            udpSocket->readDatagram(buf, sizeof(buf), &cliAddr, &port);

            //保存对方的网络信息
            this->ip = cliAddr.toString();
            this->port = port;

            //处理网络上的数据包
            dealNetworkData(buf);
        }
    );
}

//处理网络上的数据包
void MainWidget::dealNetworkData(QString buf)
{
    //连接：       "cmd=connect&role=black"
    //回复连接成功： "cmd=ok"
    //下棋：       "cmd=play&x=1&y=1"
    //对方下线：    "cmd=disconnect"
    QString tmp;
    cout << "buf = " << buf;
    tmp = buf.section("&", 0, 0);   //"cmd=ok"
    QString cmd = tmp.section("=", 1, 1);   //"ok"
    cout << "cmd = " << cmd;
    if(cmd == "connect")
    {
        //提取ip
        tmp = buf.section("&", 1, 1); //ip=127.0.0.1
        //给连接的一方，发送回复包，说连接成功
        int len = udpSocket->writeDatagram("cmd=ok", strlen("cmd=ok"),QHostAddress(ip), port);
        cout << "len = " << len;

        //给选择页面发送信号
        emit this->connectInfo(ip, port, tmp.section("=", 1, 1));
    }
    else if(cmd == "ok")
    {
        emit this->connectOk(ip, port);
    }
    else if(cmd == "play")
    {//"cmd=play&x=1&y=1"

        //提取x, y
        tmp = buf.section("&", 1, 1); //x=1
        int px = tmp.section("=", 1, 1).toInt();

        tmp = buf.section("&", 2, 2); //y=1
        int py = tmp.section("=", 1, 1).toInt();
        cout << "x = " << px << ", y = " << py;

         // 吃子
        judgeRule(px,py,NUM, (void *)chessInfo,currentRole);
        ui->chessWiget->setChessManInfo((void *)chessInfo,px,py);  // 更新棋盘

        // 改变棋子的角色
        changeRole();

        //胜负判断
        judgeResult();

    }
    else if(cmd == "disconnect")
    {
        QString str = QString("[%1:%2]已经下线！").arg(ip).arg(port);
        //QMessageBox::information(this, "断开连接", str);
        cout << "str = " << str;
    }
}

//发送连接请求包
void MainWidget::sendConnectData(QString buf, QString ip, short port)
{
    udpSocket->writeDatagram(buf.toUtf8(), QHostAddress(ip), port);
}
