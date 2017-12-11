#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include <QMouseEvent>

class MyButton : public QWidget
{
    Q_OBJECT
public:
    explicit MyButton(QWidget *parent = 0);
    void setIcon(QString path);


protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);


signals:
    void pressed();
    void release();

public slots:

private:
    QString path;
};

#endif // MYBUTTON_H
