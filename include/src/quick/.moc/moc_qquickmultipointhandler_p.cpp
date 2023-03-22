/****************************************************************************
** Meta object code from reading C++ file 'qquickmultipointhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../handlers/qquickmultipointhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmultipointhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMultiPointHandler_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMultiPointHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMultiPointHandler_t qt_meta_stringdata_QQuickMultiPointHandler = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickMultiPointHandler"
QT_MOC_LITERAL(1, 24, 24), // "minimumPointCountChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 24), // "maximumPointCountChanged"
QT_MOC_LITERAL(4, 75, 13), // "marginChanged"
QT_MOC_LITERAL(5, 89, 15), // "centroidChanged"
QT_MOC_LITERAL(6, 105, 17), // "minimumPointCount"
QT_MOC_LITERAL(7, 123, 17), // "maximumPointCount"
QT_MOC_LITERAL(8, 141, 8), // "centroid"
QT_MOC_LITERAL(9, 150, 18) // "QQuickHandlerPoint"

    },
    "QQuickMultiPointHandler\0"
    "minimumPointCountChanged\0\0"
    "maximumPointCountChanged\0marginChanged\0"
    "centroidChanged\0minimumPointCount\0"
    "maximumPointCount\0centroid\0"
    "QQuickHandlerPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMultiPointHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       8, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       3,

       0        // eod
};

void QQuickMultiPointHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickMultiPointHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minimumPointCountChanged(); break;
        case 1: _t->maximumPointCountChanged(); break;
        case 2: _t->marginChanged(); break;
        case 3: _t->centroidChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickMultiPointHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMultiPointHandler::minimumPointCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickMultiPointHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMultiPointHandler::maximumPointCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickMultiPointHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMultiPointHandler::marginChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickMultiPointHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMultiPointHandler::centroidChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickMultiPointHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minimumPointCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximumPointCount(); break;
        case 2: *reinterpret_cast< QQuickHandlerPoint*>(_v) = _t->centroid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickMultiPointHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimumPointCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximumPointCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickMultiPointHandler::staticMetaObject = { {
    &QQuickPointerDeviceHandler::staticMetaObject,
    qt_meta_stringdata_QQuickMultiPointHandler.data,
    qt_meta_data_QQuickMultiPointHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickMultiPointHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMultiPointHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMultiPointHandler.stringdata0))
        return static_cast<void*>(this);
    return QQuickPointerDeviceHandler::qt_metacast(_clname);
}

int QQuickMultiPointHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPointerDeviceHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickMultiPointHandler::minimumPointCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickMultiPointHandler::maximumPointCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickMultiPointHandler::marginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickMultiPointHandler::centroidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
