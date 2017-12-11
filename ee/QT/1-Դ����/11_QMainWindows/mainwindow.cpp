#include "mainwindow.h"
#include <QMenuBar> //菜单栏
#include <QMenu>
#include <QAction>
#include <QDebug>
#include <QToolBar>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenuBar *mBar =  menuBar(); //取出窗口自带的菜单栏
    //添加菜单
   QMenu * menu =  mBar->addMenu("文件");

   //添加动作
   QAction * openAcion = menu->addAction("打开");
   connect(openAcion, &QAction::triggered, this,
   [&]()
   {
        qDebug() << "打开动作";
   }

   );


   menu->addSeparator(); //添加分割线

   menu->addAction("保存");

   //工具栏，工具栏是菜单的快捷方式
   //添加工具栏
   QToolBar *toolBar = addToolBar("aaaa");
   //工具栏添加菜单快捷键
   toolBar->addAction(openAcion);

   QPushButton *button = new QPushButton("^_^");
   toolBar->addWidget(button); //添加后，自动指定父对象


    //状态栏
    QStatusBar *sBar = statusBar(); //获取窗口自动的状态栏
    sBar->addWidget(new QPushButton("^_@"));
    sBar->addWidget(new QLabel("你过来啊"));

    //设置核心控件
    this->setCentralWidget(new QTextEdit);
}

MainWindow::~MainWindow()
{

}
