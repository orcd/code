#-------------------------------------------------
#
# Project created by QtCreator 2017-11-06T09:45:21
#
#-------------------------------------------------

#添加模块，core gui为默认模块，不写也会加
QT       += core gui
QT       += network

#高于4版本，加上此模块，以前的版本不需要此模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#可执行程序名
TARGET = mike
TEMPLATE = app #指定makefile的类型

#源代码
SOURCES += main.cpp\
        mainwindow.cpp

#头文件
HEADERS  += mainwindow.h

#ui文件
FORMS    += mainwindow.ui

CONFIG += c++11



