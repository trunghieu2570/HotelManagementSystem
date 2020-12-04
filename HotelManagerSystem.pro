QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clientsqlmodel.cpp \
    createreservationdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    roomsdialog.cpp \
    roomsqlmodel.cpp \
    roomtypedialog.cpp \
    roomtypesqlmodel.cpp

HEADERS += \
    clientsqlmodel.h \
    createreservationdialog.h \
    mainwindow.h \
    roomsdialog.h \
    roomsqlmodel.h \
    roomtypedialog.h \
    roomtypesqlmodel.h

FORMS += \
    createreservationdialog.ui \
    mainwindow.ui \
    roomsdialog.ui \
    roomtypedialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
