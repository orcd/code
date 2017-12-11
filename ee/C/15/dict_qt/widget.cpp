#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#define cout qDebug() //没有分号

//C++包含C的头文件
extern "C"
{
    #include "dict.h"
}

//全局变量
Dict * p; //指针变量
int n;    //单词个数

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //构造函数初始化
    n = init_dict( &p , "./dict.txt"); //地址传递
    if(n == 0)
    {
        cout << "init err";
        return;
    }
}

Widget::~Widget()
{
    delete ui;

    if(p != NULL)
    {
        clean_dict( p, n); //释放堆区的内存
        p = NULL;
    }
}

//按下按钮的处理函数
void Widget::on_pushButton_clicked()
{
    //获取编辑区的内容
    QString str = ui->lineEdit->text();

    if(str == "")
    {
        ui->label->setText("输入内容不能为空！！！");
        return;
    }

    //将QString 转换为char*
    const char *key = str.toStdString().data();
    char content[4096];
    int ret = search_dict(p, n, (char *)key, content); //查询，成功为0，失败为-1
    if(0 == ret)
    {
        //printf("%s ------》  %s\n", key, content);
        ui->label->setText(content);
    }
    else
    {
        //printf("没有此词汇\n");
        ui->label->setText("没有此词汇！！！！");
    }

}
