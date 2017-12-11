#-------------------------------------------------
#
# Project created by QtCreator 2017-11-10T16:35:19
#
#-------------------------------------------------

QT       += core gui
CONFIG += c++11
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Reversi
TEMPLATE = app


SOURCES += main.cpp\
        modewidget.cpp \
    mainwidget.cpp \
    chesswidget.cpp \
    common.cpp

HEADERS  += modewidget.h \
    mainwidget.h \
    chesswidget.h \
    common.h

FORMS    += modewidget.ui \
    mainwidget.ui

RESOURCES += \
    image.qrc
