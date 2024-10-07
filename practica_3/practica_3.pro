TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        decrypt.cpp \
        encrypt.cpp \
        main.cpp \
        users.cpp \
        utils.cpp

HEADERS += \
    decrypt.h \
    encrypt.h \
    users.h \
    utils.h

DISTFILES += \
    build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/prueba \
    sudo.txt
