QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    book.cpp \
    comic.cpp \
    main.cpp \
    mainwindow.cpp \
    multimedia.cpp \
    reader_window.cpp \
    readerlist.cpp \
    resourse.cpp \
    resourse_window.cpp

HEADERS += \
    book.h \
    comic.h \
    mainwindow.h \
    multimedia.h \
    reader_window.h \
    readerlist.h \
    resourse.h \
    resourse_window.h

FORMS += \
    mainwindow.ui \
    reader_window.ui \
    resourse_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
