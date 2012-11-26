#-------------------------------------------------
#
# Project created by QtCreator 2012-10-24T03:27:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fuel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../signals_slots/person.cpp \
    ../signals_slots/car.cpp

HEADERS  += mainwindow.h \
    ../signals_slots/car.h \
    ../signals_slots/person.h

FORMS    += mainwindow.ui
