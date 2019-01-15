TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Person.cpp \
    PersonBuilder.cpp

HEADERS += \
    Person.h \
    PersonBuilder.h

DISTFILES += \
    README.md
