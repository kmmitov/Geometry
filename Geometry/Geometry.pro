#-------------------------------------------------
#
# Project created by QtCreator 2015-06-09T23:05:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Geometry
TEMPLATE = app


SOURCES += \
    addlinedialog.cpp \
    addpointdialog.cpp \
    checkpointdialog.cpp \
    coordinatesystem.cpp \
    intersectiondialog.cpp \
    Line.cpp \
    linebypointsdialog.cpp \
    lineinfo.cpp \
    main.cpp \
    maindrawingwindow.cpp \
    paralleldialog.cpp \
    perpendiculardialog.cpp \
    Point.cpp \
    pointinfo.cpp \
    repository.cpp \
    triangledialog.cpp

HEADERS  += \
    addlinedialog.h \
    addpointdialog.h \
    checkpointdialog.h \
    coordinatesystem.h \
    geometryproject.h \
    intersectiondialog.h \
    Line.h \
    linebypointsdialog.h \
    lineinfo.h \
    maindrawingwindow.h \
    paralleldialog.h \
    perpendiculardialog.h \
    Point.h \
    pointinfo.h \
    repository.h \
    triangledialog.h

CONFIG += c++11
