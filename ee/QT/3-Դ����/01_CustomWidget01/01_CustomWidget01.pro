#-------------------------------------------------
#
# Project created by QtCreator 2017-11-09T09:35:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 01_CustomWidget01
TEMPLATE = app


SOURCES += main.cpp\
        mywidget.cpp \
    customwidget.cpp

HEADERS  += mywidget.h \
    customwidget.h

FORMS    += mywidget.ui \
    customwidget.ui
