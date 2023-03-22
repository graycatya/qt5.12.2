/****************************************************************************
** Meta object code from reading C++ file 'qqmlprofilerclient_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qqmlprofilerclient_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlprofilerclient_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlProfilerClient_t {
    QByteArrayData data[15];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlProfilerClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlProfilerClient_t qt_meta_stringdata_QQmlProfilerClient = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQmlProfilerClient"
QT_MOC_LITERAL(1, 19, 8), // "complete"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "maximumTime"
QT_MOC_LITERAL(4, 41, 13), // "traceFinished"
QT_MOC_LITERAL(5, 55, 9), // "timestamp"
QT_MOC_LITERAL(6, 65, 10), // "QList<int>"
QT_MOC_LITERAL(7, 76, 9), // "engineIds"
QT_MOC_LITERAL(8, 86, 12), // "traceStarted"
QT_MOC_LITERAL(9, 99, 16), // "recordingChanged"
QT_MOC_LITERAL(10, 116, 3), // "arg"
QT_MOC_LITERAL(11, 120, 23), // "recordedFeaturesChanged"
QT_MOC_LITERAL(12, 144, 8), // "features"
QT_MOC_LITERAL(13, 153, 7), // "cleared"
QT_MOC_LITERAL(14, 161, 9) // "recording"

    },
    "QQmlProfilerClient\0complete\0\0maximumTime\0"
    "traceFinished\0timestamp\0QList<int>\0"
    "engineIds\0traceStarted\0recordingChanged\0"
    "arg\0recordedFeaturesChanged\0features\0"
    "cleared\0recording"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlProfilerClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       8,    2,   52,    2, 0x06 /* Public */,
       9,    1,   57,    2, 0x06 /* Public */,
      11,    1,   60,    2, 0x06 /* Public */,
      13,    0,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::ULongLong,   12,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       3,

       0        // eod
};

void QQmlProfilerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQmlProfilerClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->complete((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->traceFinished((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 2: _t->traceStarted((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 3: _t->recordingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->recordedFeaturesChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 5: _t->cleared(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQmlProfilerClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerClient::complete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQmlProfilerClient::*)(qint64 , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerClient::traceFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQmlProfilerClient::*)(qint64 , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerClient::traceStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQmlProfilerClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerClient::recordingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQmlProfilerClient::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerClient::recordedFeaturesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQmlProfilerClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerClient::cleared)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQmlProfilerClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRecording(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQmlProfilerClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRecording(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQmlProfilerClient::staticMetaObject = { {
    &QQmlDebugClient::staticMetaObject,
    qt_meta_stringdata_QQmlProfilerClient.data,
    qt_meta_data_QQmlProfilerClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQmlProfilerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlProfilerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlProfilerClient.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugClient::qt_metacast(_clname);
}

int QQmlProfilerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQmlProfilerClient::complete(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlProfilerClient::traceFinished(qint64 _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlProfilerClient::traceStarted(qint64 _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlProfilerClient::recordingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQmlProfilerClient::recordedFeaturesChanged(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQmlProfilerClient::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
