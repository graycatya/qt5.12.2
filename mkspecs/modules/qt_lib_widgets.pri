QT_MODULE_BIN_BASE = /usr/local/qt5.12.2/bin
QT_MODULE_INCLUDE_BASE = /usr/local/qt5.12.2/include
QT_MODULE_LIB_BASE = /usr/local/qt5.12.2/lib
QT_MODULE_HOST_LIB_BASE = /usr/local/qt5.12.2/lib
include(/usr/local/qt5.12.2/mkspecs/modules-inst/qt_lib_widgets.pri)
QT.widgets.priority = 1
include(/usr/local/qt5.12.2/mkspecs/modules-inst/qt_lib_widgets_private.pri)
QT.widgets_private.priority = 1
