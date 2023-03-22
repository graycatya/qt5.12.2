/****************************************************************************
** Meta object code from reading C++ file 'qtcpserverconnectionfactory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtcpserverconnectionfactory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcpserverconnectionfactory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTcpServerConnectionFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTcpServerConnectionFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTcpServerConnectionFactory_t qt_meta_stringdata_QTcpServerConnectionFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QTcpServerConnectionFactory"

    },
    "QTcpServerConnectionFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTcpServerConnectionFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QTcpServerConnectionFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QTcpServerConnectionFactory::staticMetaObject = { {
    &QQmlDebugServerConnectionFactory::staticMetaObject,
    qt_meta_stringdata_QTcpServerConnectionFactory.data,
    qt_meta_data_QTcpServerConnectionFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QTcpServerConnectionFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTcpServerConnectionFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTcpServerConnectionFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlDebugServerConnectionFactory"))
        return static_cast< QQmlDebugServerConnectionFactory*>(this);
    return QQmlDebugServerConnectionFactory::qt_metacast(_clname);
}

int QTcpServerConnectionFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugServerConnectionFactory::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x32,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'Q',  'm', 
    'l',  'D',  'e',  'b',  'u',  'g',  'S',  'e', 
    'r',  'v',  'e',  'r',  'C',  'o',  'n',  'n', 
    'e',  'c',  't',  'i',  'o',  'n',  'F',  'a', 
    'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x78,  0x1b,  'Q',  'T',  'c',  'p',  'S', 
    'e',  'r',  'v',  'e',  'r',  'C',  'o',  'n', 
    'n',  'e',  'c',  't',  'i',  'o',  'n',  'F', 
    'a',  'c',  't',  'o',  'r',  'y', 
    // "MetaData"
    0x04,  0xa1,  0x64,  'K',  'e',  'y',  's',  0x81, 
    0x74,  'Q',  'T',  'c',  'p',  'S',  'e',  'r', 
    'v',  'e',  'r',  'C',  'o',  'n',  'n',  'e', 
    'c',  't',  'i',  'o',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QTcpServerConnectionFactory, QTcpServerConnectionFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
