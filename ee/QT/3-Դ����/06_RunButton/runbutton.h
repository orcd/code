#ifndef RUNBUTTON_H
#define RUNBUTTON_H
#include <QPushButton>
#include <QMouseEvent>
#include <QWidget>

class RunButton : public QPushButton
{
public:
     RunButton();

protected:
   //void mouseMoveEvent(QMouseEvent *e);
   void enterEvent(QEvent *);
};

#endif // RUNBUTTON_H
