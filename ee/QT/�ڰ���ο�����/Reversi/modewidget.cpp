#include "modewidget.h"
#include "ui_modewidget.h"
#include <QPainter>
#include "common.h"
#include <QMessageBox>

ModeWidget::ModeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModeWidget)
{
    ui->setupUi(this);

    //去窗口表框
    setWindowFlags(Qt::FramelessWindowHint);

    //信号和槽, 主窗口关闭，选择窗口也跟着关闭
    //connect(&mw, &MainWidget::mainWidgetCloseSiganl,this, &ModeWidget::close);

    //主窗口切换回，选择窗口
    connect(&mw, &MainWidget::goBackSignal,
        [&]()
        {
            ui->stackedWidget->setCurrentWidget(ui->pageChoose);
            moveToCenter(this);
            mw.hide();
        }

    );

    //网络对战，被动连接，有连接信息
    connect(&mw, &MainWidget::connectInfo,
        [=](QString ip, short port, QString role)
        {
            //设置网络信息
            ui->lineEditIP->setText(ip);
            ui->lineEditPort->setText(QString::number(port));

            QString str;
            GridState tmp;

            if(role == "black")
            {
                tmp = White;
                str = QString("和[%1:%2]连接成功\n对方为黑子，我方为白子").arg(ip).arg(port);
            }
            else
            {
                 tmp = Black;
                 str = QString("和[%1:%2]连接成功\n对方为白子，我方为黑子").arg(ip).arg(port);
            }

            QMessageBox::information(this, "连接成功", str);
            mw.showMainWiget(Network, tmp);
            this->hide();
        }
    );

    //网络对战，主动连接，对方连接成功
    connect(&mw, &MainWidget::connectOk,
        [=](QString ip, short port)
        {
            QString str = QString("和[%1:%2]连接成功，可以下棋了！").arg(ip).arg(port);
            QMessageBox::information(this, "连接成功", str);

            if(ui->radioBlack->isChecked() == true)
            {
                mw.showMainWiget(Network, Black);
            }
            else
            {
                mw.showMainWiget(Network, White);
            }

            this->hide();
        }
    );
}

ModeWidget::~ModeWidget()
{
    delete ui;
}

//绘图事件，画背景图
void ModeWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(this->rect(), QPixmap(":/new/prefix1/image/bg2.jpg"));
}

//鼠标点击，获取点击坐标，处理移动
void ModeWidget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::RightButton)
    {
        //如果是右键
        //close();
    }
    else if(e->button() == Qt::LeftButton)
    {
        //求坐标差值
        //当前点击坐标-窗口左上角坐标
        p = e->globalPos() - this->frameGeometry().topLeft();
    }
}

//鼠标移动，移动窗口
void ModeWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {
       move(e->globalPos() - p);
    }
}

//关闭按钮
void ModeWidget::on_closeButton_clicked()
{
    cout << "关闭按钮, 关闭所有";
    mw.close();
    this->close();
}

//返回按钮
void ModeWidget::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageChoose); //切换到选择页面
}

//人机对战按钮
void ModeWidget::on_buttonMachine_clicked()
{
    cout << "人机对战按钮";
    ui->stackedWidget->setCurrentWidget(ui->pageMachine); //切换到人机操作页面

}

//网络对战按钮
void ModeWidget::on_buttonNetwork_clicked()
{
    cout << "网络对战按钮";
    ui->stackedWidget->setCurrentWidget(ui->pageNetwork); //切换到人机操作页面
}

//人机对战中，选择黑子角色按钮
void ModeWidget::on_buttonBlack_clicked()
{
    this->hide(); //本窗口隐藏
    mw.showMainWiget(Machine, Black);   //显示主界面窗口
}

//人机对战中，选择白子角色按钮
void ModeWidget::on_buttonWhite_clicked()
{
    this->hide(); //本窗口隐藏
    mw.showMainWiget(Machine, White);   //显示主界面窗口
}

//网络对战中，确定按钮
void ModeWidget::on_sureButton_clicked()
{
    cout << "网络对战中，确定按钮";
    //连接： "cmd=connect&role=black"

    QString ip = ui->lineEditIP->text();
    short port = ui->lineEditPort->text().toShort();

    QString buf;
    if(ui->radioBlack->isChecked() == true)
    {
        buf = QString("cmd=connect&role=black");
    }
    else
    {
        buf = QString("cmd=connect&role=white");
    }
    cout << "on_sureButton_clicked buf = " << buf;
    //发送请求包
    mw.sendConnectData(buf, ip, port);
}
