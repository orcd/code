#include "customwidget.h"
#include "ui_customwidget.h"

CustomWidget::CustomWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomWidget)
{
    ui->setupUi(this);

    ui->progressBar->setMinimum(0);
}

CustomWidget::~CustomWidget()
{
    delete ui;
}

//设置控件的属性
void CustomWidget::setInfo(QString name, int value, int max)
{
    ui->label->setText(name);   //标签设置内容
    ui->progressBar->setMaximum(max); //进度条设置最大值
    ui->progressBar->setValue(value); //进度条设置当前值
}
