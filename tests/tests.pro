include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra
QMAKE_CFLAGS += -Wall -Wextra

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     tst_test1.h \
    ../app/myfunc.h \
    fibonachi_test.h \
    ../app/square.h\
    square_test.h

SOURCES +=     \
    ../app/myfunc.c \
    main.c \
    square.c

INCLUDEPATH += ../app
