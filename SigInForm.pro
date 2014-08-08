#-------------------------------------------------
#
# Project created by QtCreator 2014-07-27T07:50:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SigInForm
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    newaccount.cpp

HEADERS  += dialog.h \
    newaccount.h

FORMS    += dialog.ui \
    newaccount.ui

RESOURCES += \
    Resources/Icons/Icon.qrc \
    Resources/Bg-Images/UI-images.qrc

OTHER_FILES +=
