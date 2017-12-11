#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->pushButtonSend->setEnabled(false);

    udpSocket = new QUdpSocket(this); //指定父对象目录，为了自动回收空间


    connect(udpSocket, &QUdpSocket::readyRead,
    [&]()
    {
        char buf[1024] = {0};
        QHostAddress addr;
        quint16 port;
        //读取数据，addr为网络地址，port为端口
        udpSocket->readDatagram(buf, sizeof(buf), &addr, &port);
        QString str = QString("[%1:%2]%3").arg( addr.toString() ).arg(port).arg(buf);
        ui->textEdit->setText(str); //给编辑区设置内容
        //ui->textEdit->append(str);

        //设置对方的网络信息
        ui->lineEditIP->setText(addr.toString());
        ui->lineEditOtherPort->setText(QString::number(port));
    }

    );

}

Widget::~Widget()
{
    delete ui;
}


//绑定按钮
void Widget::on_pushButtonBind_clicked()
{
    QString str = ui->lineEditMyPort->text();
    bool isOk = udpSocket->bind( str.toShort() ); //绑定端口
    if(false == isOk)
    {
        QMessageBox::warning(this, "警告", "绑定端口失败");

        return;
    }

    ui->pushButtonBind->setEnabled(false);
    ui->pushButtonSend->setEnabled(true);
}

//发送按钮
void Widget::on_pushButtonSend_clicked()
{
    QString ip = ui->lineEditIP->text();   //获取对方ip
    short port = ui->lineEditOtherPort->text().toShort(); //获取对方端口
    QString str = ui->textEdit->toPlainText(); //获取发送内容

    //发送信息
    udpSocket->writeDatagram(str.toUtf8(), QHostAddress(ip), port);
}

void Widget::on_pushButton_2_clicked()
{
    udpSocket->close();
    this->close();
}
