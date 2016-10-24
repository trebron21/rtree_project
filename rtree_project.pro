QT += core

CONFIG += c++14

TARGET = rtree_project
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    visualizer.h

# boost library include path
INCLUDEPATH += d:\wrk\InstalledPrograms\boost\boost_1_61_0\


# use glut v3.7

#INCLUDEPATH += d:\glut\ # define path to "glut.h" if you don't want to copy it into the VC++ "include" directory
#LIBS += -lopengl32
#LIBS += -lglu32
#LIBS += -lglut32
#LIBS += -lglew32

#LIBS += -Ld:\glut\glut32 # define the absolute paths to the libs if you don't want to have them in the VC++ "lib" directory
#LIBS += -Ld:\glut\glut
#LIBS += -Ld:\glut\glew32
