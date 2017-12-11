#include "modewidget.h"
#include "ui_modewidget.h"
#include <QMessageBox>

ModeWidget::ModeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModeWidget)
{
    ui->setupUi(this);

    useUdpSocket();//udp操作

    //信号和槽
    //主窗口关闭
    connect(&mw, &MainWidget::closeMainWidget,
    [&]()
    {
        mw.hide();
        moveToCenter(this);
    }

    );

    //网络对战模式下，落子后，给对方发送落子坐标
    connect(&mw, &MainWidget::networkPoint,
    [&](int x, int y)
    {
        //"cmd=play&x=1&y=1"
        QString str = QString("cmd=play&x=%1&y=%2").arg(x).arg(y);

        QString ip = ui->lineEditIP->text(); //获取对方的ip
        short port = ui->lineEditPort->text().toShort(); //对方的端口

        //主动发送连接请求
        udp->writeDatagram(str.toUtf8(), QHostAddress(ip), port);

    }

    );
}

ModeWidget::~ModeWidget()
{
    delete ui;
}

//网络对战
void ModeWidget::on_pushButtonNetwork_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageNetwork);
    ui->label->setText("请设置网络信息");
}

//人机对战
void ModeWidget::on_pushButtonMachine_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMachine);
    ui->label->setText("请选择角色");
}

//返回
void ModeWidget::on_pushButtonBack_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageMode);
    ui->label->setText("请选择对战模式");
}

//关闭
void ModeWidget::on_pushButtonClose_clicked()
{
    this->close();
}

//人机对战，选择了黑子
void ModeWidget::on_pushButtonBlack_clicked()
{
    this->hide();
    mw.showMainWidget(Machine, Black);

}

//人机对战，选择了白子
void ModeWidget::on_pushButtonWhite_clicked()
{
    this->hide();
    mw.showMainWidget(Machine, White);

}

//网络对战模式
void ModeWidget::on_toolButtonSure_clicked()
{
    QString ip = ui->lineEditIP->text(); //获取对方的ip
    short port = ui->lineEditPort->text().toShort(); //对方的端口

    //"cmd=connect&role=black"
    QString str;
    if(ui->radioButtonBlack->isChecked() == true)
    {//我选择黑子
        str = "cmd=connect&role=black";
    }
    else
    {//我选择白子
        str = "cmd=connect&role=white";
    }
    cout << str;

    //主动发送连接请求
    udp->writeDatagram(str.toUtf8(), QHostAddress(ip), port);
}

void ModeWidget::useUdpSocket() //udp操作
{

    //创建套接字
    udp = new QUdpSocket(this); //指定父对象为了自动释放内存
    if(udp == NULL)
    {
        cout << "new QUdpSocket err";
        return;
    }

    //绑定
    if( false == udp->bind(8888) )
    {
        cout << "bind err";
        return;
    }

    //信号和操作，处理用户的数据
    /*  连接请求	"cmd=connect&role=black"
        回复连接成功	"cmd=ok"
        下棋	"cmd=play&x=1&y=1" */

    connect(udp, &QUdpSocket::readyRead,
    [&]()
    {
        char buf[1024] = {0};
        QHostAddress addr;
        quint16 port;
        udp->readDatagram(buf, sizeof(buf), &addr, &port); //接收数据

        //设置对方的ip和端口
        ui->lineEditIP->setText(addr.toString());
        ui->lineEditPort->setText(QString::number(port));

        cout << "buf = " << buf;
        dealBuf(buf);//处理网络上接收到的数据包
    }

    );

}

void ModeWidget::dealBuf(char *buf)//处理网络上接收到的数据包
{
    //连接请求          "cmd=connect&role=black"
    //回复连接成功      "cmd=ok"
    //下棋            "cmd=play&x=1&y=1"
    QString str = buf; //char *转换为QString

    QString tmp = str.section("&", 0, 0); //"cmd=xxx"
    QString cmd = tmp.section("=", 1, 1);
    cout << "cmd = " << cmd;

    if(cmd == "connect")
    { //对方发送的连接请求

        tmp = str.section("&", 1, 1); // "role=black"
        str = tmp.section("=", 1, 1); //"black"

        //给对方回复ok
        QString ip = ui->lineEditIP->text();
        short port = ui->lineEditPort->text().toShort();
        udp->writeDatagram("cmd=ok", strlen("cmd=ok"), QHostAddress(ip), port);

        QString s;
        GridState role;
        if(str == "black")
        {
            s = QString("[%1:%2]请求对战，对方选择角色为黑子").arg(ip).arg(port);
            ui->radioButtonWhite->setChecked(true);
            role = White;
        }
        else
        {
            s = QString("[%1:%2]请求对战，对方选择角色为白子").arg(ip).arg(port);
            ui->radioButtonBlack->setChecked(true);
            role = Black;
        }

        QMessageBox::information(this, "请求对战", s);

        this->hide();
        mw.showMainWidget(Network, role);
    }
    else if(cmd == "ok")
    {//对方回复连接成功
        QMessageBox::information(this, "请求对战", "对方接收成功");

        this->hide();

        if(ui->radioButtonBlack->isChecked() == true)
        {//我选择黑子
            mw.showMainWidget(Network, Black);
        }
        else
        {//我选择白子
             mw.showMainWidget(Network, White);
        }
    }
    else if(cmd == "play")
    {//对方落子, "cmd=play&x=1&y=1"
        tmp = str.section("&", 1, 1); //"x=1"
        int x = tmp.section("=", 1, 1).toInt();

        tmp = str.section("&", 2, 2); //"y=1";
        int y = tmp.section("=", 1, 1).toInt();

        mw.networkPlay(x, y);
    }
}











