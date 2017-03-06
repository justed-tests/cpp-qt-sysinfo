#-------------------------------------------------
#
# Project created by QtCreator 2017-03-03T16:47:53
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sysinfo
TEMPLATE = app


SOURCES += main.cpp\
           mainwindow.cpp \
           cpuwidget.cpp \
           memorywidget.cpp \
           sysinfowidget.cpp \
           sysinfo.cpp

HEADERS  += mainwindow.h \
            cpuwidget.h \
            memorywidget.h \
            sysinfowidget.h \
            sysinfo.h

windows {
  HEADERS += sysinfowindowsimpl.h
  SOURCES += sysinfowindowsimpl.cpp
}

linux {
  HEADERS += sysinfolinuximpl.h
  SOURCES += sysinfolinuximpl.cpp
}

FORMS    += mainwindow.ui

