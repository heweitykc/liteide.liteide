# -------------------------------------------------
# Project created by QtCreator 2010-12-27T22:25:39
# -------------------------------------------------
include (../../liteide.pri)
TARGET = syntaxeditor
TEMPLATE = lib
DESTDIR = $$IDE_PLGUINS_PATH
DEFINES += SYNTAXEDITOR_LIBRARY
SOURCES += syntaxeditorplugin.cpp \
    syntaxeditor.cpp \
    golanghighlighter.cpp
HEADERS += syntaxeditorplugin.h \
    syntaxeditor_global.h \
    syntaxeditor.h \
    golanghighlighter.h

INSTALLS += target
