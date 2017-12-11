#include "mybutton.h"
#include <QDebug>

MyButton::MyButton()
{

}

MyButton::MyButton(const QString & text, QWidget * parent)
{
    this->setText(text);
    this->setParent(parent);
}

MyButton::~MyButton()
{
    qDebug() << "MyButton的析构";
}

