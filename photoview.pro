QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    login.cpp \
    main.cpp \
    home.cpp \
    photoviewpage.cpp \
    registration.cpp \
    reset.cpp \
    viewoneimage.cpp

HEADERS += \
    home.h \
    login.h \
    photoviewpage.h \
    registration.h \
    reset.h \
    viewoneimage.h

FORMS += \
    home.ui \
    login.ui \
    photoviewpage.ui \
    registration.ui \
    reset.ui \
    viewoneimage.ui




# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
