#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMovie>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //文本操作
    ui->labelText->setText("你过来啊");
    QString str = ui->labelText->text();
    qDebug() << "str = " << str.toUtf8().data();

    //图片操作
    ui->labelImage->setPixmap(QPixmap("../Image/face.png")); //设置
    ui->labelImage->setScaledContents(true); //图片自动填充

    //链接
    ui->labelUrl->setText("<a href=\"https://www.baidu.com\">百度一下</a>");
    ui->labelUrl->setOpenExternalLinks(true);//点击自动跳到链接网址

    //gif动画
    QMovie *movie = new QMovie;
    movie->setFileName("../Image/boy.gif"); //设置路径
    ui->labelGif->setMovie(movie); //标签设置动画
    ui->labelGif->setScaledContents(true); //自动填充

    movie->start(); //启动动画
    //movie->stop(); //停止动画
}

Widget::~Widget()
{
    delete ui;
}
