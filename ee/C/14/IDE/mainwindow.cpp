#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug> //Qt打印函数
#define cout qDebug() //没有分号
#include <stdlib.h>

int * p;
//构造函数，初始化
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cout << "构造函数";

    p = (int *)malloc(sizeof(int));
    *p = 111;
    cout << "*p = " << *p;

    //标签的使用
    ui->label->setText("hello mike"); //给标签设置内容
    //Qt获取的内容是QString, QString是Qt字符串类型
    QString str = ui->label->text(); //获取标签内容，赋值给str
    cout << "str = " << str;

    ui->mike->setText("are u 困吗?困！！！！");

    //编辑区的使用
    ui->textEdit->setText("are u 困吗?困！！！！"); //设置内容
    QString str2 = ui->textEdit->toPlainText(); //获取内容
    //str2.toStdString().data()将QString转换为char *后再打印
    cout << "str2 = " << str2.toStdString().data();

}


//析构函数，清理工作，窗口关闭时，自动调用
MainWindow::~MainWindow()
{
    delete ui;
    cout << "析构函数";
    if(p != NULL)
    {
        free(p);
        p = NULL;
        cout << "已经释放";
    }
}

//打开的处理函数
void MainWindow::on_actionOpen_triggered()
{
    cout << "按下打开动作";

    QString str2 = ui->textEdit->toPlainText(); //获取内容
    //str2.toStdString().data()将QString转换为char *后再打印
    cout << "str2 = " << str2.toStdString().data();
}
