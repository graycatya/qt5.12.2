/****************************************************************************
** Meta object code from reading C++ file 'qquickshape_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickshape_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickshape_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickShapeGradient_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShapeGradient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShapeGradient_t qt_meta_stringdata_QQuickShapeGradient = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickShapeGradient"
QT_MOC_LITERAL(1, 20, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 36, 5), // "stops"
QT_MOC_LITERAL(3, 42, 13), // "spreadChanged"
QT_MOC_LITERAL(4, 56, 0), // ""
QT_MOC_LITERAL(5, 57, 6), // "spread"
QT_MOC_LITERAL(6, 64, 10), // "SpreadMode"
QT_MOC_LITERAL(7, 75, 9), // "PadSpread"
QT_MOC_LITERAL(8, 85, 12), // "RepeatSpread"
QT_MOC_LITERAL(9, 98, 13) // "ReflectSpread"

    },
    "QQuickShapeGradient\0DefaultProperty\0"
    "stops\0spreadChanged\0\0spread\0SpreadMode\0"
    "PadSpread\0RepeatSpread\0ReflectSpread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShapeGradient[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       1,   16, // methods
       1,   22, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   21,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    3,   31,

 // enum data: key, value
       7, uint(QQuickShapeGradient::PadSpread),
       8, uint(QQuickShapeGradient::RepeatSpread),
       9, uint(QQuickShapeGradient::ReflectSpread),

       0        // eod
};

void QQuickShapeGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickShapeGradient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spreadChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickShapeGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeGradient::spreadChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickShapeGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SpreadMode*>(_v) = _t->spread(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickShapeGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpread(*reinterpret_cast< SpreadMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickShapeGradient::staticMetaObject = { {
    &QQuickGradient::staticMetaObject,
    qt_meta_stringdata_QQuickShapeGradient.data,
    qt_meta_data_QQuickShapeGradient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickShapeGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShapeGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShapeGradient.stringdata0))
        return static_cast<void*>(this);
    return QQuickGradient::qt_metacast(_clname);
}

int QQuickShapeGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickGradient::qt_metacall(_c, _id, _a);
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
void QQuickShapeGradient::spreadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickShapeLinearGradient_t {
    QByteArrayData data[12];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShapeLinearGradient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShapeLinearGradient_t qt_meta_stringdata_QQuickShapeLinearGradient = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickShapeLinearGradient"
QT_MOC_LITERAL(1, 26, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 42, 5), // "stops"
QT_MOC_LITERAL(3, 48, 9), // "x1Changed"
QT_MOC_LITERAL(4, 58, 0), // ""
QT_MOC_LITERAL(5, 59, 9), // "y1Changed"
QT_MOC_LITERAL(6, 69, 9), // "x2Changed"
QT_MOC_LITERAL(7, 79, 9), // "y2Changed"
QT_MOC_LITERAL(8, 89, 2), // "x1"
QT_MOC_LITERAL(9, 92, 2), // "y1"
QT_MOC_LITERAL(10, 95, 2), // "x2"
QT_MOC_LITERAL(11, 98, 2) // "y2"

    },
    "QQuickShapeLinearGradient\0DefaultProperty\0"
    "stops\0x1Changed\0\0y1Changed\0x2Changed\0"
    "y2Changed\0x1\0y1\0x2\0y2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShapeLinearGradient[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       4,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x06 /* Public */,
       5,    0,   37,    4, 0x06 /* Public */,
       6,    0,   38,    4, 0x06 /* Public */,
       7,    0,   39,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickShapeLinearGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickShapeLinearGradient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->x1Changed(); break;
        case 1: _t->y1Changed(); break;
        case 2: _t->x2Changed(); break;
        case 3: _t->y2Changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickShapeLinearGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeLinearGradient::x1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickShapeLinearGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeLinearGradient::y1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickShapeLinearGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeLinearGradient::x2Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickShapeLinearGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeLinearGradient::y2Changed)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickShapeLinearGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x1(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y1(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->x2(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->y2(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickShapeLinearGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX1(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY1(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setX2(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setY2(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickShapeLinearGradient::staticMetaObject = { {
    &QQuickShapeGradient::staticMetaObject,
    qt_meta_stringdata_QQuickShapeLinearGradient.data,
    qt_meta_data_QQuickShapeLinearGradient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickShapeLinearGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShapeLinearGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShapeLinearGradient.stringdata0))
        return static_cast<void*>(this);
    return QQuickShapeGradient::qt_metacast(_clname);
}

int QQuickShapeLinearGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickShapeGradient::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickShapeLinearGradient::x1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShapeLinearGradient::y1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShapeLinearGradient::x2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickShapeLinearGradient::y2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QQuickShapeRadialGradient_t {
    QByteArrayData data[16];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShapeRadialGradient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShapeRadialGradient_t qt_meta_stringdata_QQuickShapeRadialGradient = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickShapeRadialGradient"
QT_MOC_LITERAL(1, 26, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 42, 5), // "stops"
QT_MOC_LITERAL(3, 48, 14), // "centerXChanged"
QT_MOC_LITERAL(4, 63, 0), // ""
QT_MOC_LITERAL(5, 64, 14), // "centerYChanged"
QT_MOC_LITERAL(6, 79, 13), // "focalXChanged"
QT_MOC_LITERAL(7, 93, 13), // "focalYChanged"
QT_MOC_LITERAL(8, 107, 19), // "centerRadiusChanged"
QT_MOC_LITERAL(9, 127, 18), // "focalRadiusChanged"
QT_MOC_LITERAL(10, 146, 7), // "centerX"
QT_MOC_LITERAL(11, 154, 7), // "centerY"
QT_MOC_LITERAL(12, 162, 12), // "centerRadius"
QT_MOC_LITERAL(13, 175, 6), // "focalX"
QT_MOC_LITERAL(14, 182, 6), // "focalY"
QT_MOC_LITERAL(15, 189, 11) // "focalRadius"

    },
    "QQuickShapeRadialGradient\0DefaultProperty\0"
    "stops\0centerXChanged\0\0centerYChanged\0"
    "focalXChanged\0focalYChanged\0"
    "centerRadiusChanged\0focalRadiusChanged\0"
    "centerX\0centerY\0centerRadius\0focalX\0"
    "focalY\0focalRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShapeRadialGradient[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       6,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   46,    4, 0x06 /* Public */,
       5,    0,   47,    4, 0x06 /* Public */,
       6,    0,   48,    4, 0x06 /* Public */,
       7,    0,   49,    4, 0x06 /* Public */,
       8,    0,   50,    4, 0x06 /* Public */,
       9,    0,   51,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       4,
       2,
       3,
       5,

       0        // eod
};

void QQuickShapeRadialGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickShapeRadialGradient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerXChanged(); break;
        case 1: _t->centerYChanged(); break;
        case 2: _t->focalXChanged(); break;
        case 3: _t->focalYChanged(); break;
        case 4: _t->centerRadiusChanged(); break;
        case 5: _t->focalRadiusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickShapeRadialGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeRadialGradient::centerXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickShapeRadialGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeRadialGradient::centerYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickShapeRadialGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeRadialGradient::focalXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickShapeRadialGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeRadialGradient::focalYChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickShapeRadialGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeRadialGradient::centerRadiusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickShapeRadialGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeRadialGradient::focalRadiusChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickShapeRadialGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->centerX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->centerY(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->centerRadius(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->focalX(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->focalY(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->focalRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickShapeRadialGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCenterX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setCenterY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setCenterRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setFocalX(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setFocalY(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setFocalRadius(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickShapeRadialGradient::staticMetaObject = { {
    &QQuickShapeGradient::staticMetaObject,
    qt_meta_stringdata_QQuickShapeRadialGradient.data,
    qt_meta_data_QQuickShapeRadialGradient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickShapeRadialGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShapeRadialGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShapeRadialGradient.stringdata0))
        return static_cast<void*>(this);
    return QQuickShapeGradient::qt_metacast(_clname);
}

int QQuickShapeRadialGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickShapeGradient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickShapeRadialGradient::centerXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShapeRadialGradient::centerYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShapeRadialGradient::focalXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickShapeRadialGradient::focalYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickShapeRadialGradient::centerRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickShapeRadialGradient::focalRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_QQuickShapeConicalGradient_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShapeConicalGradient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShapeConicalGradient_t qt_meta_stringdata_QQuickShapeConicalGradient = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QQuickShapeConicalGradient"
QT_MOC_LITERAL(1, 27, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 43, 5), // "stops"
QT_MOC_LITERAL(3, 49, 14), // "centerXChanged"
QT_MOC_LITERAL(4, 64, 0), // ""
QT_MOC_LITERAL(5, 65, 14), // "centerYChanged"
QT_MOC_LITERAL(6, 80, 12), // "angleChanged"
QT_MOC_LITERAL(7, 93, 7), // "centerX"
QT_MOC_LITERAL(8, 101, 7), // "centerY"
QT_MOC_LITERAL(9, 109, 5) // "angle"

    },
    "QQuickShapeConicalGradient\0DefaultProperty\0"
    "stops\0centerXChanged\0\0centerYChanged\0"
    "angleChanged\0centerX\0centerY\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShapeConicalGradient[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,
       6,    0,   33,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickShapeConicalGradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickShapeConicalGradient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerXChanged(); break;
        case 1: _t->centerYChanged(); break;
        case 2: _t->angleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickShapeConicalGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeConicalGradient::centerXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickShapeConicalGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeConicalGradient::centerYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickShapeConicalGradient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapeConicalGradient::angleChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickShapeConicalGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->centerX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->centerY(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickShapeConicalGradient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCenterX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setCenterY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setAngle(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickShapeConicalGradient::staticMetaObject = { {
    &QQuickShapeGradient::staticMetaObject,
    qt_meta_stringdata_QQuickShapeConicalGradient.data,
    qt_meta_data_QQuickShapeConicalGradient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickShapeConicalGradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShapeConicalGradient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShapeConicalGradient.stringdata0))
        return static_cast<void*>(this);
    return QQuickShapeGradient::qt_metacast(_clname);
}

int QQuickShapeConicalGradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickShapeGradient::qt_metacall(_c, _id, _a);
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
void QQuickShapeConicalGradient::centerXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShapeConicalGradient::centerYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShapeConicalGradient::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QQuickShapePath_t {
    QByteArrayData data[41];
    char stringdata0[532];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShapePath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShapePath_t qt_meta_stringdata_QQuickShapePath = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickShapePath"
QT_MOC_LITERAL(1, 16, 16), // "shapePathChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "strokeColorChanged"
QT_MOC_LITERAL(4, 53, 18), // "strokeWidthChanged"
QT_MOC_LITERAL(5, 72, 16), // "fillColorChanged"
QT_MOC_LITERAL(6, 89, 15), // "fillRuleChanged"
QT_MOC_LITERAL(7, 105, 16), // "joinStyleChanged"
QT_MOC_LITERAL(8, 122, 17), // "miterLimitChanged"
QT_MOC_LITERAL(9, 140, 15), // "capStyleChanged"
QT_MOC_LITERAL(10, 156, 18), // "strokeStyleChanged"
QT_MOC_LITERAL(11, 175, 17), // "dashOffsetChanged"
QT_MOC_LITERAL(12, 193, 18), // "dashPatternChanged"
QT_MOC_LITERAL(13, 212, 22), // "_q_fillGradientChanged"
QT_MOC_LITERAL(14, 235, 11), // "strokeColor"
QT_MOC_LITERAL(15, 247, 11), // "strokeWidth"
QT_MOC_LITERAL(16, 259, 9), // "fillColor"
QT_MOC_LITERAL(17, 269, 8), // "fillRule"
QT_MOC_LITERAL(18, 278, 8), // "FillRule"
QT_MOC_LITERAL(19, 287, 9), // "joinStyle"
QT_MOC_LITERAL(20, 297, 9), // "JoinStyle"
QT_MOC_LITERAL(21, 307, 10), // "miterLimit"
QT_MOC_LITERAL(22, 318, 8), // "capStyle"
QT_MOC_LITERAL(23, 327, 8), // "CapStyle"
QT_MOC_LITERAL(24, 336, 11), // "strokeStyle"
QT_MOC_LITERAL(25, 348, 11), // "StrokeStyle"
QT_MOC_LITERAL(26, 360, 10), // "dashOffset"
QT_MOC_LITERAL(27, 371, 11), // "dashPattern"
QT_MOC_LITERAL(28, 383, 14), // "QVector<qreal>"
QT_MOC_LITERAL(29, 398, 12), // "fillGradient"
QT_MOC_LITERAL(30, 411, 20), // "QQuickShapeGradient*"
QT_MOC_LITERAL(31, 432, 11), // "OddEvenFill"
QT_MOC_LITERAL(32, 444, 11), // "WindingFill"
QT_MOC_LITERAL(33, 456, 9), // "MiterJoin"
QT_MOC_LITERAL(34, 466, 9), // "BevelJoin"
QT_MOC_LITERAL(35, 476, 9), // "RoundJoin"
QT_MOC_LITERAL(36, 486, 7), // "FlatCap"
QT_MOC_LITERAL(37, 494, 9), // "SquareCap"
QT_MOC_LITERAL(38, 504, 8), // "RoundCap"
QT_MOC_LITERAL(39, 513, 9), // "SolidLine"
QT_MOC_LITERAL(40, 523, 8) // "DashLine"

    },
    "QQuickShapePath\0shapePathChanged\0\0"
    "strokeColorChanged\0strokeWidthChanged\0"
    "fillColorChanged\0fillRuleChanged\0"
    "joinStyleChanged\0miterLimitChanged\0"
    "capStyleChanged\0strokeStyleChanged\0"
    "dashOffsetChanged\0dashPatternChanged\0"
    "_q_fillGradientChanged\0strokeColor\0"
    "strokeWidth\0fillColor\0fillRule\0FillRule\0"
    "joinStyle\0JoinStyle\0miterLimit\0capStyle\0"
    "CapStyle\0strokeStyle\0StrokeStyle\0"
    "dashOffset\0dashPattern\0QVector<qreal>\0"
    "fillGradient\0QQuickShapeGradient*\0"
    "OddEvenFill\0WindingFill\0MiterJoin\0"
    "BevelJoin\0RoundJoin\0FlatCap\0SquareCap\0"
    "RoundCap\0SolidLine\0DashLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShapePath[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      11,   86, // properties
       4,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    0,   81,    2, 0x06 /* Public */,
      10,    0,   82,    2, 0x06 /* Public */,
      11,    0,   83,    2, 0x06 /* Public */,
      12,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QColor, 0x00495103,
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::QColor, 0x00495103,
      17, 0x80000000 | 18, 0x0049510b,
      19, 0x80000000 | 20, 0x0049510b,
      21, QMetaType::Int, 0x00495103,
      22, 0x80000000 | 23, 0x0049510b,
      24, 0x80000000 | 25, 0x0049510b,
      26, QMetaType::QReal, 0x00495103,
      27, 0x80000000 | 28, 0x0049510b,
      29, 0x80000000 | 30, 0x0009510f,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
       0,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    2,  150,
      20,   20, 0x0,    3,  154,
      23,   23, 0x0,    3,  160,
      25,   25, 0x0,    2,  166,

 // enum data: key, value
      31, uint(QQuickShapePath::OddEvenFill),
      32, uint(QQuickShapePath::WindingFill),
      33, uint(QQuickShapePath::MiterJoin),
      34, uint(QQuickShapePath::BevelJoin),
      35, uint(QQuickShapePath::RoundJoin),
      36, uint(QQuickShapePath::FlatCap),
      37, uint(QQuickShapePath::SquareCap),
      38, uint(QQuickShapePath::RoundCap),
      39, uint(QQuickShapePath::SolidLine),
      40, uint(QQuickShapePath::DashLine),

       0        // eod
};

void QQuickShapePath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickShapePath *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shapePathChanged(); break;
        case 1: _t->strokeColorChanged(); break;
        case 2: _t->strokeWidthChanged(); break;
        case 3: _t->fillColorChanged(); break;
        case 4: _t->fillRuleChanged(); break;
        case 5: _t->joinStyleChanged(); break;
        case 6: _t->miterLimitChanged(); break;
        case 7: _t->capStyleChanged(); break;
        case 8: _t->strokeStyleChanged(); break;
        case 9: _t->dashOffsetChanged(); break;
        case 10: _t->dashPatternChanged(); break;
        case 11: _t->d_func()->_q_fillGradientChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::shapePathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::strokeColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::strokeWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::fillColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::fillRuleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::joinStyleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::miterLimitChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::capStyleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::strokeStyleChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::dashOffsetChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QQuickShapePath::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShapePath::dashPatternChanged)) {
                *result = 10;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickShapeGradient* >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qreal> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickShapePath *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->strokeColor(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->strokeWidth(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->fillColor(); break;
        case 3: *reinterpret_cast< FillRule*>(_v) = _t->fillRule(); break;
        case 4: *reinterpret_cast< JoinStyle*>(_v) = _t->joinStyle(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->miterLimit(); break;
        case 6: *reinterpret_cast< CapStyle*>(_v) = _t->capStyle(); break;
        case 7: *reinterpret_cast< StrokeStyle*>(_v) = _t->strokeStyle(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->dashOffset(); break;
        case 9: *reinterpret_cast< QVector<qreal>*>(_v) = _t->dashPattern(); break;
        case 10: *reinterpret_cast< QQuickShapeGradient**>(_v) = _t->fillGradient(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickShapePath *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStrokeColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setStrokeWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setFillRule(*reinterpret_cast< FillRule*>(_v)); break;
        case 4: _t->setJoinStyle(*reinterpret_cast< JoinStyle*>(_v)); break;
        case 5: _t->setMiterLimit(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setCapStyle(*reinterpret_cast< CapStyle*>(_v)); break;
        case 7: _t->setStrokeStyle(*reinterpret_cast< StrokeStyle*>(_v)); break;
        case 8: _t->setDashOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setDashPattern(*reinterpret_cast< QVector<qreal>*>(_v)); break;
        case 10: _t->setFillGradient(*reinterpret_cast< QQuickShapeGradient**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickShapePath *_t = static_cast<QQuickShapePath *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 10: _t->resetFillGradient(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickShapePath::staticMetaObject = { {
    &QQuickPath::staticMetaObject,
    qt_meta_stringdata_QQuickShapePath.data,
    qt_meta_data_QQuickShapePath,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickShapePath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShapePath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShapePath.stringdata0))
        return static_cast<void*>(this);
    return QQuickPath::qt_metacast(_clname);
}

int QQuickShapePath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPath::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickShapePath::shapePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShapePath::strokeColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShapePath::strokeWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickShapePath::fillColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickShapePath::fillRuleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickShapePath::joinStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickShapePath::miterLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickShapePath::capStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickShapePath::strokeStyleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickShapePath::dashOffsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QQuickShapePath::dashPatternChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_QQuickShape_t {
    QByteArrayData data[28];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShape_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShape_t qt_meta_stringdata_QQuickShape = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QQuickShape"
QT_MOC_LITERAL(1, 12, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 28, 4), // "data"
QT_MOC_LITERAL(3, 33, 15), // "rendererChanged"
QT_MOC_LITERAL(4, 49, 0), // ""
QT_MOC_LITERAL(5, 50, 19), // "asynchronousChanged"
QT_MOC_LITERAL(6, 70, 30), // "vendorExtensionsEnabledChanged"
QT_MOC_LITERAL(7, 101, 13), // "statusChanged"
QT_MOC_LITERAL(8, 115, 19), // "containsModeChanged"
QT_MOC_LITERAL(9, 135, 19), // "_q_shapePathChanged"
QT_MOC_LITERAL(10, 155, 12), // "rendererType"
QT_MOC_LITERAL(11, 168, 12), // "RendererType"
QT_MOC_LITERAL(12, 181, 12), // "asynchronous"
QT_MOC_LITERAL(13, 194, 23), // "vendorExtensionsEnabled"
QT_MOC_LITERAL(14, 218, 6), // "status"
QT_MOC_LITERAL(15, 225, 6), // "Status"
QT_MOC_LITERAL(16, 232, 12), // "containsMode"
QT_MOC_LITERAL(17, 245, 12), // "ContainsMode"
QT_MOC_LITERAL(18, 258, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(19, 284, 15), // "UnknownRenderer"
QT_MOC_LITERAL(20, 300, 16), // "GeometryRenderer"
QT_MOC_LITERAL(21, 317, 12), // "NvprRenderer"
QT_MOC_LITERAL(22, 330, 16), // "SoftwareRenderer"
QT_MOC_LITERAL(23, 347, 4), // "Null"
QT_MOC_LITERAL(24, 352, 5), // "Ready"
QT_MOC_LITERAL(25, 358, 10), // "Processing"
QT_MOC_LITERAL(26, 369, 20), // "BoundingRectContains"
QT_MOC_LITERAL(27, 390, 12) // "FillContains"

    },
    "QQuickShape\0DefaultProperty\0data\0"
    "rendererChanged\0\0asynchronousChanged\0"
    "vendorExtensionsEnabledChanged\0"
    "statusChanged\0containsModeChanged\0"
    "_q_shapePathChanged\0rendererType\0"
    "RendererType\0asynchronous\0"
    "vendorExtensionsEnabled\0status\0Status\0"
    "containsMode\0ContainsMode\0"
    "QQmlListProperty<QObject>\0UnknownRenderer\0"
    "GeometryRenderer\0NvprRenderer\0"
    "SoftwareRenderer\0Null\0Ready\0Processing\0"
    "BoundingRectContains\0FillContains"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShape[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       6,   58, // properties
       3,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   52,    4, 0x06 /* Public */,
       5,    0,   53,    4, 0x06 /* Public */,
       6,    0,   54,    4, 0x06 /* Public */,
       7,    0,   55,    4, 0x06 /* Public */,
       8,    0,   56,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   57,    4, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       0,
       0,
      11,

 // slots: revision
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00495009,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, 0x80000000 | 15, 0x00495009,
      16, 0x80000000 | 17, 0x00c9510b,
       2, 0x80000000 | 18, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,

 // properties: revision
       0,
       0,
       0,
       0,
      11,
       0,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    4,  103,
      15,   15, 0x0,    3,  111,
      17,   17, 0x0,    2,  117,

 // enum data: key, value
      19, uint(QQuickShape::UnknownRenderer),
      20, uint(QQuickShape::GeometryRenderer),
      21, uint(QQuickShape::NvprRenderer),
      22, uint(QQuickShape::SoftwareRenderer),
      23, uint(QQuickShape::Null),
      24, uint(QQuickShape::Ready),
      25, uint(QQuickShape::Processing),
      26, uint(QQuickShape::BoundingRectContains),
      27, uint(QQuickShape::FillContains),

       0        // eod
};

void QQuickShape::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickShape *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rendererChanged(); break;
        case 1: _t->asynchronousChanged(); break;
        case 2: _t->vendorExtensionsEnabledChanged(); break;
        case 3: _t->statusChanged(); break;
        case 4: _t->containsModeChanged(); break;
        case 5: _t->d_func()->_q_shapePathChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickShape::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShape::rendererChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickShape::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShape::asynchronousChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickShape::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShape::vendorExtensionsEnabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickShape::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShape::statusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickShape::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShape::containsModeChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickShape *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< RendererType*>(_v) = _t->rendererType(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->asynchronous(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->vendorExtensionsEnabled(); break;
        case 3: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast< ContainsMode*>(_v) = _t->containsMode(); break;
        case 5: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickShape *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAsynchronous(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setVendorExtensionsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setContainsMode(*reinterpret_cast< ContainsMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickShape::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_QQuickShape.data,
    qt_meta_data_QQuickShape,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickShape::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShape::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShape.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickShape::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickShape::rendererChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickShape::asynchronousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickShape::vendorExtensionsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickShape::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickShape::containsModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
