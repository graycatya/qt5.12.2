QT_MODULE_BIN_BASE = /usr/local/qt5.12.2/bin
QT_MODULE_INCLUDE_BASE = /usr/local/qt5.12.2/include
QT_MODULE_LIB_BASE = /usr/local/qt5.12.2/lib
QT_MODULE_HOST_LIB_BASE = /usr/local/qt5.12.2/lib
include(/usr/local/qt5.12.2/mkspecs/modules-inst/qt_lib_testlib.pri)
QT.testlib.priority = 1
include(/usr/local/qt5.12.2/mkspecs/modules-inst/qt_lib_testlib_private.pri)
QT.testlib_private.priority = 1