/****************************************************************************
** Meta object code from reading C++ file 'qqmldebugmessageclient_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qqmldebugmessageclient_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmldebugmessageclient_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlDebugMessageClient_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlDebugMessageClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlDebugMessageClient_t qt_meta_stringdata_QQmlDebugMessageClient = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQmlDebugMessageClient"
QT_MOC_LITERAL(1, 23, 7), // "message"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "QtMsgType"
QT_MOC_LITERAL(4, 42, 20) // "QQmlDebugContextInfo"

    },
    "QQmlDebugMessageClient\0message\0\0"
    "QtMsgType\0QQmlDebugContextInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlDebugMessageClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 4,    2,    2,    2,

       0        // eod
};

void QQmlDebugMessageClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQmlDebugMessageClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QQmlDebugContextInfo(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQmlDebugMessageClient::*)(QtMsgType , const QString & , const QQmlDebugContextInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugMessageClient::message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QQmlDebugMessageClient::staticMetaObject = { {
    &QQmlDebugClient::staticMetaObject,
    qt_meta_stringdata_QQmlDebugMessageClient.data,
    qt_meta_data_QQmlDebugMessageClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQmlDebugMessageClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlDebugMessageClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlDebugMessageClient.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugClient::qt_metacast(_clname);
}

int QQmlDebugMessageClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QQmlDebugMessageClient::message(QtMsgType _t1, const QString & _t2, const QQmlDebugContextInfo & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
