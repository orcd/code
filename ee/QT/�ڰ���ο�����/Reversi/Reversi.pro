#-------------------------------------------------
#
# Project created by QtCreator 2017-10-29T19:56:11
#
#-------------------------------------------------

QT       += core gui
QT += network   #网络模块
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Reversi
TEMPLATE = app


SOURCES += main.cpp\
        modewidget.cpp \
    common.cpp \
    chessboard.cpp \
    mainwidget.cpp

HEADERS  += modewidget.h \
    common.h \
    chessboard.h \
    mainwidget.h

FORMS    += modewidget.ui \
    mainwidget.ui

RESOURCES += \
    image.qrc

RC_ICONS = chess.ico #图标
