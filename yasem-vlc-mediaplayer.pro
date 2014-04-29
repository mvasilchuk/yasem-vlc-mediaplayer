#-------------------------------------------------
#
# Project created by QtCreator 2014-04-11T21:02:55
#
#-------------------------------------------------

CONFIG += C++11

QT      += core gui widgets

TARGET = yasem-vlc-mediaplayer
TEMPLATE = lib
CONFIG += plugin

DEFINES += VLCMEDIAPLAYER_LIBRARY

INCLUDEPATH += ../yasem-core

SOURCES += vlcmediaplayer.cpp

HEADERS += vlcmediaplayer.h\
        vlcmediaplayer_global.h \
        ../yasem-core/mediasignalsender.h \

unix {
    target.path = /usr/lib
    INSTALLS += target
}

include(../common.pri)
DESTDIR = $$DEFAULT_PLUGIN_DIR

OTHER_FILES += \
    metadata.json
