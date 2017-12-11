#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QTime>
#include <QMessageBox>
#include <QString>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    //显示第一个页面(设置页面)
    //ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentWidget(ui->pageSet);

    //初始化数据
    //失败动画
    overMovie.setFileName(":/new/prefix1/Image/over.gif");
    ui->labelOver->setMovie(&overMovie);//给标签设置动画
    ui->labelOver->setScaledContents(true);//让动画自动适应标签大小

    //胜利动画
    winMovie.setFileName(":/new/prefix1/Image/win.gif");
    ui->labelWin->setMovie(&winMovie);
    ui->labelWin->setScaledContents(true);

    //猜数字游戏界面相应设置
    //数字按钮都连接同一个槽，多个信号连接一个槽
    connect(ui->pushButton0, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton1, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton2, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton3, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton4, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton5, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton6, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton7, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton8, &QPushButton::clicked, this, &MyWidget::dealNum);
    connect(ui->pushButton9, &QPushButton::clicked, this, &MyWidget::dealNum);

    //倒计时，信号和槽
    //游戏时间
    connect(&gameTimer, &QTimer::timeout, 
    [&]()
    {
        gameTimeNum--;

        //设置进度条
        ui->progressBar->setValue(gameTimeNum); //当前值

        if(0 == gameTimeNum)//时间到
        {
            //关闭定时器
            gameTimer.stop();

            QMessageBox::information(this, "失败", "时间到了啊！！！");


            overMovie.start();//启动动画

            //切换失败动画页面
            //ui->stackedWidget->setCurrentIndex(2);
            ui->stackedWidget->setCurrentWidget(ui->pageOver);

            overTimer.start(5000); //5秒后，启动失败动画定时器

        }
    }
    );

    //失败动画定时器
    connect(&overTimer, &QTimer::timeout, 
    [&]()
    {
          //停止动画，停止定时器，回到游戏设置页面
        overMovie.stop();//停止动画
        overTimer.stop();  //停止定时器

        //切换到游戏设置页面
        ui->stackedWidget->setCurrentWidget(ui->pageSet);
    }

    );

    //胜利动画定时器
    connect(&winTimer, &QTimer::timeout, 
    [&]()
    {
          //停止动画，停止定时器，回到游戏设置页面
        winMovie.stop();//停止动画
        winTimer.stop();  //停止定时器

        //切换到游戏设置页面
        ui->stackedWidget->setCurrentWidget(ui->pageSet);
    }

    );
}

MyWidget::~MyWidget()
{
    delete ui;
}

//开始游戏
void MyWidget::on_pushButtonStart_clicked()
{
    //获取下拉框的时间 .toInt()：字符串转换为 int
    gameTimeNum = ui->comboBox->currentText().toInt();
    qDebug() << gameTimeNum << "s";

    //切换到游戏界面
    //ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget->setCurrentWidget(ui->pageGame);


    int num;
    //以从0时0分0秒到现在的秒数为种子
    qsrand( QTime(0,0,0).secsTo( QTime::currentTime() ) );
    //调用全局的qrand()函数生成随机数，对10000取余，保证位于10000的范围内
    while( ( num = qrand()%10000 ) < 999 );
    randStr = QString::number(num);
    qDebug() << "randNum = " << randStr;

    //设置进度条
    ui->progressBar->setMinimum(0);//最小值
    ui->progressBar->setMaximum(gameTimeNum);//最大值
    ui->progressBar->setValue(gameTimeNum); //当前值

    //启动定时器，时间倒计时
    gameTimer.start(1000); //以 1000 毫秒（即1s）作为时间间隔

    resultStr.clear();      //显示结果情况
    ui->textEdit->clear();  //编辑区内容清空

}

//退出游戏
void MyWidget::on_pushButtonEnd_clicked()
{
    this->close(); //关闭窗口
}

//数字键处理
void MyWidget::dealNum()
{
    //获取信号接收者
    QObject * mySender = sender();
    //转换为按钮类型
    QPushButton *p = (QPushButton *)mySender;
    if(NULL == p)
    {
         qDebug() << "NULL == p";
        return; //中断函数
    }

    //获取按钮的内容
    QString numStr = p->text();
    resultStr += numStr;

    //数字不能以0开始
    if(resultStr.size() == 1 && resultStr == "0")
    {
        resultStr.clear();
    }

    if( resultStr.size() <= 4) //保证显示结果为4位
    {
         ui->textEdit->setText( resultStr );

         if(resultStr.size() == 4) //数字到第4位时
         {
             if(resultStr > randStr)
             {
                 ui->textEdit->append("数字大了点!!!");
             }
             else if(resultStr < randStr)
             {
                 ui->textEdit->append("数字小了点!!!");
             }
             else
             {
                 ui->textEdit->append("恭喜你猜对了!!!");

                 //停止定时器
                 //关闭定时器
                 gameTimer.stop();

                 QMessageBox::information(this, "胜利", "恭喜你猜对了!!!");

                 //切换到成功动画
                 winMovie.start();
                 ui->stackedWidget->setCurrentWidget(ui->pageWin);

                 //启动胜利动画定时器
                 winTimer.start(5000); //5s
             }

             //初始化字符串结果，清空
             resultStr.clear();
         }
    }
}

//退格按钮
void MyWidget::on_pushButtonDel_clicked()
{
    if(resultStr.size() == 1)
    {
        resultStr.clear();
        ui->textEdit->clear();
    }
    else
    {
        resultStr.chop(1); //截断最后一位字符
        ui->textEdit->setText(resultStr);
    }
}

//提示按钮
void MyWidget::on_pushButtonEnter_clicked()
{
    resultStr.clear();
    QString str = "随机数为：" + randStr;
    ui->textEdit->setText( str );
}
