/****************************************************************************
** Meta object code from reading C++ file 'qquicksmoothedanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../util/qquicksmoothedanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicksmoothedanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSmoothedAnimation_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSmoothedAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSmoothedAnimation_t qt_meta_stringdata_QQuickSmoothedAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickSmoothedAnimation"
QT_MOC_LITERAL(1, 24, 15), // "velocityChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "reversingModeChanged"
QT_MOC_LITERAL(4, 62, 24), // "maximumEasingTimeChanged"
QT_MOC_LITERAL(5, 87, 8), // "velocity"
QT_MOC_LITERAL(6, 96, 13), // "reversingMode"
QT_MOC_LITERAL(7, 110, 13), // "ReversingMode"
QT_MOC_LITERAL(8, 124, 17), // "maximumEasingTime"
QT_MOC_LITERAL(9, 142, 5), // "Eased"
QT_MOC_LITERAL(10, 148, 9), // "Immediate"
QT_MOC_LITERAL(11, 158, 4) // "Sync"

    },
    "QQuickSmoothedAnimation\0velocityChanged\0"
    "\0reversingModeChanged\0maximumEasingTimeChanged\0"
    "velocity\0reversingMode\0ReversingMode\0"
    "maximumEasingTime\0Eased\0Immediate\0"
    "Sync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSmoothedAnimation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00495103,
       6, 0x80000000 | 7, 0x0049510b,
       8, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    3,   49,

 // enum data: key, value
       9, uint(QQuickSmoothedAnimation::Eased),
      10, uint(QQuickSmoothedAnimation::Immediate),
      11, uint(QQuickSmoothedAnimation::Sync),

       0        // eod
};

void QQuickSmoothedAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickSmoothedAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->velocityChanged(); break;
        case 1: _t->reversingModeChanged(); break;
        case 2: _t->maximumEasingTimeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickSmoothedAnimation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSmoothedAnimation::velocityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickSmoothedAnimation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSmoothedAnimation::reversingModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickSmoothedAnimation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSmoothedAnimation::maximumEasingTimeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickSmoothedAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->velocity(); break;
        case 1: *reinterpret_cast< ReversingMode*>(_v) = _t->reversingMode(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->maximumEasingTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickSmoothedAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setReversingMode(*reinterpret_cast< ReversingMode*>(_v)); break;
        case 2: _t->setMaximumEasingTime(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickSmoothedAnimation::staticMetaObject = { {
    &QQuickNumberAnimation::staticMetaObject,
    qt_meta_stringdata_QQuickSmoothedAnimation.data,
    qt_meta_data_QQuickSmoothedAnimation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickSmoothedAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSmoothedAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSmoothedAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickNumberAnimation::qt_metacast(_clname);
}

int QQuickSmoothedAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickNumberAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QQuickSmoothedAnimation::velocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickSmoothedAnimation::reversingModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickSmoothedAnimation::maximumEasingTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
