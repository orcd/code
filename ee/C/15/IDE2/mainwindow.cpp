#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#define cout qDebug() //没有分号
#include <QFileDialog>
#include <string.h>
#include <stdlib.h>

//全局变量或类型
enum MyCode
{
    utf_8,
    gbk
}flag; //同时定义全局变量

QString path;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //默认以utf_8
    flag = utf_8;

    path = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

//utf-8按钮
void MainWindow::on_actionUtf_8_triggered()
{
    flag = utf_8;
    ui->label->setText("当前以utf-8显示");

    //调用函数
    read_file();
}

//gbk按钮
void MainWindow::on_actionGbk_triggered()
{
    flag = gbk;
    ui->label->setText("当前以gbk显示");

     //调用函数
    read_file();
}

//打开文件
void MainWindow::on_actionOpen_triggered()
{
    //1、选择文件路径, 返回的路径是QString, 需要头文件#include <QFileDialog>
    path = QFileDialog::getOpenFileName();
    if(path == "")
    {
        cout << "选择路径不能为空";
        return;
    }

    //调用函数
    read_file();
}

void MainWindow::read_file()
{
    cout << "path = " << path;

    //将QString转换为char *, 不包括编码转换
    const char *file = path.toStdString().data();
    cout << "file = " << file;

    //2、打开这个文件fopen
    FILE *fp = fopen(file, "rb");
    if(NULL == fp)
    {
        cout << "fopen err";
        return;
    }

    //3、读文件内容fread
    char buf[1024];
    int ret;
    QString str = "";
    while(1)
    {
       memset(buf, 0, sizeof(buf));
       //ret = fread(buf, sizeof(buf), 1,  fp); //少内容
       ret = fread(buf, 1,  sizeof(buf),  fp); //多内容
       if(ret == 0)
       {
            break;
       }

       if(utf_8 == flag) //选择的是utf-8
       {
            str = str+buf;
       }
       else
       {

            //如果读取的内容是gbk编码，转换为utf-8
            //如果读取的内容是utf-8编码，就会乱码
            str = str + QString::fromLocal8Bit( (const char *)buf );
       }
    }

    //4、把读取的内容给编辑区setText
    ui->textEdit->setText(str);

    //5、关闭文件fclose
    fclose(fp);
}

void MainWindow::write_file()
{
    //类型转换, QString ----> char *
    const char * file = path.toStdString().data();

    //2、打开文件fopen
    FILE *fp = fopen(file, "wb");
    if(NULL == fp)
    {
        cout << "打开文件失败";
        return;
    }

    //3、获取编辑区的内容
    QString str = ui->textEdit->toPlainText();

    //4、把编辑区的内容写入文件
    const char *buf = str.toStdString().data();//QString 转char *
    int len = str.toStdString().size();//内容的长度
    fwrite(buf, 1, len, fp);

    //5、关闭文件
    fclose(fp);
}

//另存为
void MainWindow::on_actionSave_as_triggered()
{
    //1、选择保存的路径
    path = QFileDialog::getSaveFileName();
    cout << "path = " << path;

    if(path == "")
    {
        cout << "保存路径不能为空";
        return;
    }

    write_file(); //写文件

}

//关闭窗口
void MainWindow::on_actionClose_triggered()
{
    close();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

//编译代码
void MainWindow::on_actionComplie_triggered()
{
/*
    //gcc xxx.c -o xxx
    //如果编译的源代码没有问题，返回值为0
    int ret = system("gcc C:\\Users\\MikeJiang\\Desktop\\code\\build-IDE2-Desktop_Qt_5_5_0_MinGW_32bit-Debug\\test.c -o C:\\Users\\MikeJiang\\Desktop\\code\\build-IDE2-Desktop_Qt_5_5_0_MinGW_32bit-Debug\\test");

    cout << "ret = " << ret;

    if(ret != 0)
    {
        system("cmd /k gcc C:\\Users\\MikeJiang\\Desktop\\code\\build-IDE2-Desktop_Qt_5_5_0_MinGW_32bit-Debug\\test.c -o C:\\Users\\MikeJiang\\Desktop\\code\\build-IDE2-Desktop_Qt_5_5_0_MinGW_32bit-Debug\\test");
        return;
    }

    system("cmd /k C:\\Users\\MikeJiang\\Desktop\\code\\build-IDE2-Desktop_Qt_5_5_0_MinGW_32bit-Debug\\test");
    */
    if(path == "")
    {
        cout << "路径为空";
        return;
    }

    //gcc hello.c -o hello
    QString target = path;
    cout << "path = " << path;
    cout << "target1 = " <<target;
    target.replace(".c", "");//把target中的.c替换为空字符
    cout << "target2 = " <<target;

    QString cmd = "gcc " + path + " -o " + target;
    cout << "cmd = " << cmd;

    int ret;
    ret = system(    cmd.toStdString().data()    );
    if(ret != 0)
    {
        cmd = "cmd /k gcc " + path + " -o " + target;
        system(    cmd.toStdString().data()    );
        return;
    }

    cmd = "cmd /k " + target;
    system(    cmd.toStdString().data()    ); //执行程序

}

//新建
void MainWindow::on_actionNew_triggered()
{
    //ui->textEdit->setText("");
    ui->textEdit->clear();
    path = "";
    path.clear();
}

//保存
void MainWindow::on_actionSave_triggered()
{
    if(path == "")
    {
        //弹出一个选择文件的对话框
        //1、选择保存的路径
        path = QFileDialog::getSaveFileName();
        cout << "path = " << path;

        if(path == "")
        {
            cout << "保存路径不能为空";
            return;
        }

    }

    //说明path有效的
    write_file();

}
