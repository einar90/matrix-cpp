include(../defaults.pri)

CONFIG   += console
CONFIG   -= app_bundle
CONFIG   -= qt

TEMPLATE = lib

TARGET = myapp

SOURCES += myclass.cpp \
    mymatrix.cpp
HEADERS += myclass.h \
    mymatrix.h
