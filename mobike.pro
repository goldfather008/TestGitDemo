#-------------------------------------------------
#
# Project created by QtCreator 2017-03-04T15:01:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mobike
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    accountui.cpp \
    bikeui.cpp \
    stationui.cpp \
    json/json_reader.cpp \
    json/json_value.cpp \
    json/json_valueiterator.inl \
    json/json_writer.cpp

HEADERS  += widget.h \
    accountui.h \
    bikeui.h \
    stationui.h \
    typedefine.h \
    json/allocator.h \
    json/assertions.h \
    json/autolink.h \
    json/config.h \
    json/features.h \
    json/forwards.h \
    json/json.h \
    json/json_tool.h \
    json/reader.h \
    json/value.h \
    json/version.h \
    json/writer.h

FORMS    += widget.ui \
    accountui.ui \
    bikeui.ui \
    stationui.ui
