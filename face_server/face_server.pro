QT       += core gui network  sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32{
LIBS += D:\opencv452\lib\libopencv_*.a
LIBS += D:\door\opcv\seet2_install\lib\libSeeta*
INCLUDEPATH += D:\opencv452\install\include
INCLUDEPATH += D:\opencv452\install\include\opencvcv2
INCLUDEPATH += D:\door\opcv\seet2_install\include
INCLUDEPATH += D:\door\opcv\seet2_install\include\seeta

}
SOURCES += \
    main.cpp \
    mainwindow.cpp \
    qfaceobject.cpp \
    registerwin.cpp \
    selectwin.cpp

HEADERS += \
    mainwindow.h \
    qfaceobject.h \
    registerwin.h \
    selectwin.h

FORMS += \
    mainwindow.ui \
    registerwin.ui \
    selectwin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
