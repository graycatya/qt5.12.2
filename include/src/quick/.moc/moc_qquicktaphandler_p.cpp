/****************************************************************************
** Meta object code from reading C++ file 'qquicktaphandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../handlers/qquicktaphandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktaphandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTapHandler_t {
    QByteArrayData data[22];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTapHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTapHandler_t qt_meta_stringdata_QQuickTapHandler = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickTapHandler"
QT_MOC_LITERAL(1, 17, 14), // "pressedChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "tapCountChanged"
QT_MOC_LITERAL(4, 49, 15), // "timeHeldChanged"
QT_MOC_LITERAL(5, 65, 25), // "longPressThresholdChanged"
QT_MOC_LITERAL(6, 91, 20), // "gesturePolicyChanged"
QT_MOC_LITERAL(7, 112, 6), // "tapped"
QT_MOC_LITERAL(8, 119, 17), // "QQuickEventPoint*"
QT_MOC_LITERAL(9, 137, 10), // "eventPoint"
QT_MOC_LITERAL(10, 148, 12), // "singleTapped"
QT_MOC_LITERAL(11, 161, 12), // "doubleTapped"
QT_MOC_LITERAL(12, 174, 11), // "longPressed"
QT_MOC_LITERAL(13, 186, 7), // "pressed"
QT_MOC_LITERAL(14, 194, 8), // "tapCount"
QT_MOC_LITERAL(15, 203, 8), // "timeHeld"
QT_MOC_LITERAL(16, 212, 18), // "longPressThreshold"
QT_MOC_LITERAL(17, 231, 13), // "gesturePolicy"
QT_MOC_LITERAL(18, 245, 13), // "GesturePolicy"
QT_MOC_LITERAL(19, 259, 13), // "DragThreshold"
QT_MOC_LITERAL(20, 273, 12), // "WithinBounds"
QT_MOC_LITERAL(21, 286, 19) // "ReleaseWithinBounds"

    },
    "QQuickTapHandler\0pressedChanged\0\0"
    "tapCountChanged\0timeHeldChanged\0"
    "longPressThresholdChanged\0"
    "gesturePolicyChanged\0tapped\0"
    "QQuickEventPoint*\0eventPoint\0singleTapped\0"
    "doubleTapped\0longPressed\0pressed\0"
    "tapCount\0timeHeld\0longPressThreshold\0"
    "gesturePolicy\0GesturePolicy\0DragThreshold\0"
    "WithinBounds\0ReleaseWithinBounds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTapHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   74, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,
      10,    1,   67,    2, 0x06 /* Public */,
      11,    1,   70,    2, 0x06 /* Public */,
      12,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::QReal, 0x00495001,
      16, QMetaType::QReal, 0x00495103,
      17, 0x80000000 | 18, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    3,   99,

 // enum data: key, value
      19, uint(QQuickTapHandler::DragThreshold),
      20, uint(QQuickTapHandler::WithinBounds),
      21, uint(QQuickTapHandler::ReleaseWithinBounds),

       0        // eod
};

void QQuickTapHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickTapHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressedChanged(); break;
        case 1: _t->tapCountChanged(); break;
        case 2: _t->timeHeldChanged(); break;
        case 3: _t->longPressThresholdChanged(); break;
        case 4: _t->gesturePolicyChanged(); break;
        case 5: _t->tapped((*reinterpret_cast< QQuickEventPoint*(*)>(_a[1]))); break;
        case 6: _t->singleTapped((*reinterpret_cast< QQuickEventPoint*(*)>(_a[1]))); break;
        case 7: _t->doubleTapped((*reinterpret_cast< QQuickEventPoint*(*)>(_a[1]))); break;
        case 8: _t->longPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickEventPoint* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickEventPoint* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickEventPoint* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickTapHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::pressedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::tapCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::timeHeldChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::longPressThresholdChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::gesturePolicyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)(QQuickEventPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::tapped)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)(QQuickEventPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::singleTapped)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)(QQuickEventPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::doubleTapped)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QQuickTapHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTapHandler::longPressed)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickTapHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPressed(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->tapCount(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->timeHeld(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->longPressThreshold(); break;
        case 4: *reinterpret_cast< GesturePolicy*>(_v) = _t->gesturePolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickTapHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setLongPressThreshold(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setGesturePolicy(*reinterpret_cast< GesturePolicy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickTapHandler::staticMetaObject = { {
    &QQuickSinglePointHandler::staticMetaObject,
    qt_meta_stringdata_QQuickTapHandler.data,
    qt_meta_data_QQuickTapHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickTapHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTapHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTapHandler.stringdata0))
        return static_cast<void*>(this);
    return QQuickSinglePointHandler::qt_metacast(_clname);
}

int QQuickTapHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickSinglePointHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickTapHandler::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickTapHandler::tapCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickTapHandler::timeHeldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickTapHandler::longPressThresholdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickTapHandler::gesturePolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickTapHandler::tapped(QQuickEventPoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQuickTapHandler::singleTapped(QQuickEventPoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQuickTapHandler::doubleTapped(QQuickEventPoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QQuickTapHandler::longPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
