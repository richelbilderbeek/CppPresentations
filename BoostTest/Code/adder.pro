CONFIG += console debug_and_release
CONFIG -= app_bundle
QT -= core gui
TEMPLATE = app

CONFIG(release, debug|release) {
  DEFINES += NDEBUG
}

SOURCES += main.cpp my_functions.cpp
HEADERS += my_functions.h
