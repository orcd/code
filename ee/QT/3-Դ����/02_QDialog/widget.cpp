#include "widget.h"
#include "ui_widget.h"
#include <QDialog>
#include <QDebug>
#include <QFileDialog> //文件操作对话框
#include <QMessageBox> //消息对话框

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

//模态
void Widget::on_pushButton_clicked()
{
    QDialog dlg;
    dlg.exec(); //以模态方式运行对话框

    qDebug() << "aaaaaaaaaaa";
}

//非模态
void Widget::on_pushButton_2_clicked()
{
    QDialog *pDlg = new QDialog;
    pDlg->setAttribute(Qt::WA_DeleteOnClose); //关闭窗口时，自动释放
    pDlg->show();//以普通方式（非模态）运行对话框

    qDebug() << "bbbbbbbbb";
}

//选择一个文件
void Widget::on_pushButton_3_clicked()
{
    QString path = QFileDialog::getOpenFileName(this);
    qDebug() << "path = " << path;

}
//选择多个文件
void Widget::on_pushButton_4_clicked()
{
    QStringList list = QFileDialog::getOpenFileNames(this);
    qDebug() << "list = " << list;
}

//提示信息
void Widget::on_pushButton_5_clicked()
{
    QMessageBox::information(this, "提示", "你过来啊");
}

//问题
void Widget::on_pushButton_6_clicked()
{
    int ret = QMessageBox::question(this, "问题", "你确定退出吗", QMessageBox::Ok | QMessageBox::Abort);
    if(ret == QMessageBox::Ok)
    {
        qDebug() << "QMessageBox::Ok";
    }
    else if(ret == QMessageBox::Abort)
    {
        qDebug() << "QMessageBox::Abort";
    }
    else
    {
        qDebug() << "others";
    }
}













