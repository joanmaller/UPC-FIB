TEMPLATE    = app
QT         += opengl

INCLUDEPATH +=  /usr/local/glm
INCLUDEPATH +=  ../../Model

FORMS += MyForm.ui

HEADERS += MyForm.h MyGLWidget.h

SOURCES += main.cpp MyForm.cpp \
        MyGLWidget.cpp ../../Model/model.cpp
