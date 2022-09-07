TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        export.cpp \
        main.cpp

DISTFILES += \
    LICENSE \
    README.md

HEADERS += \
    export.h

unix:!macx: INCLUDEPATH += /usr/include/opencascade
unix:!macx: LIBS += \
    -lTKernel \
    -lTKBRep \
    #-lTKBO \
    #-lTKFillet \
    #-lTKG2d \
    #-lTKG3d \
    #-lTKGeomBase \
    -lTKMath \
    #-lTKOffset \
    -lTKPrim \
    -lTKSTEP \
    -lTKTopAlgo \
    #-lTKXSBase
