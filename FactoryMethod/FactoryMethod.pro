TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    Product.h \
    RedBox.h \
    BlueBox.h \
    GreenBox.h \
    ProductFactory.h
