#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmallWidget)
{
    ui->setupUi(this);
}

SmallWidget::~SmallWidget()
{
    delete ui;
}

void SmallWidget::setInfo(QString name, int value, int max)
{
    ui->label->setText(name);
    ui->progressBar->setMaximum(max);
    ui->progressBar->setValue(value);
}
