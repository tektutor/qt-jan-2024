CONFIG += warn_on qmltestcase

TEMPLATE = app

DISTFILES += \
    Edit.qml \
    tst_edittest.qml

HEADERS += setup.h

SOURCES += \
    main.cpp \
    setup.cpp
