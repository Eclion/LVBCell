#-------------------------------------------------
#
# Project created by QtCreator 2014-12-04T10:29:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LVB
TEMPLATE = app

INCLUDEPATH += /usr/local/include/vtk-5.10 \

LIBS += -L/usr/local/lib/vtk-5.10 \
        -lQVTK \

SOURCES += main.cpp\
        widget.cpp \
    cell.cpp \
    environment.cpp \
    celltype.cpp \
    gene.cpp

HEADERS  += widget.h \
    cell.h \
    environment.h \
    celltype.h \
    gene.h \
    globals.h

FORMS    += widget.ui

OTHER_FILES += \
    todoList.txt
