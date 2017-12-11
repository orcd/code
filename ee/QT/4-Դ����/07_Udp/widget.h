#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButtonBind_clicked();

    void on_pushButtonSend_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;

    QUdpSocket *udpSocket; //套接字指针，#include <QUdpSocket>

};

#endif // WIDGET_H
