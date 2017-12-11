#include "mybutton.h"
#include <QPainter>
#include <QDebug>

MyButton::MyButton(QWidget *parent) : QWidget(parent)
{
    path = ":/new/prefix1/image/face.png";
}

void MyButton::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(this->rect(), QPixmap(path));
}

void MyButton::setIcon(QString path)
{
    this->path = path;
    this->update();
}

void MyButton::mousePressEvent(QMouseEvent *)
{
    emit this->pressed();
    this->setGeometry(x()-5, y()-5, width()-10, height()-10);

    qDebug() << "emit this->pressed()";
}

void MyButton::mouseReleaseEvent(QMouseEvent *)
{
    emit this->release();
    this->setGeometry(x()+5, y()+5, width()+10, height()+10);
    qDebug() << "emit this->release()";
}

