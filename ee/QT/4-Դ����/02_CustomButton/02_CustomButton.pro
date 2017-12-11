#-------------------------------------------------
#
# Project created by QtCreator 2017-11-10T10:27:49
#
#-------------------------------------------------

QT       += core gui
CONFIG +=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 02_CustomButton
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mybutton.cpp

HEADERS  += widget.h \
    mybutton.h

FORMS    += widget.ui

RESOURCES += \
    image.qrc
