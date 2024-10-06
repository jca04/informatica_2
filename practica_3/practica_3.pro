TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        encrypt.cpp \
        main.cpp \
        utils.cpp

HEADERS += \
    decrypt.h \
    encrypt.h \
    utils.h

DISTFILES += \
    sudo.txt
