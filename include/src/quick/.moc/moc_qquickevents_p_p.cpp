/****************************************************************************
** Meta object code from reading C++ file 'qquickevents_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../items/qquickevents_p_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickevents_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickKeyEvent_t {
    QByteArrayData data[11];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickKeyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickKeyEvent_t qt_meta_stringdata_QQuickKeyEvent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickKeyEvent"
QT_MOC_LITERAL(1, 15, 7), // "matches"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 25), // "QKeySequence::StandardKey"
QT_MOC_LITERAL(4, 50, 3), // "key"
QT_MOC_LITERAL(5, 54, 4), // "text"
QT_MOC_LITERAL(6, 59, 9), // "modifiers"
QT_MOC_LITERAL(7, 69, 12), // "isAutoRepeat"
QT_MOC_LITERAL(8, 82, 5), // "count"
QT_MOC_LITERAL(9, 88, 14), // "nativeScanCode"
QT_MOC_LITERAL(10, 103, 8) // "accepted"

    },
    "QQuickKeyEvent\0matches\0\0"
    "QKeySequence::StandardKey\0key\0text\0"
    "modifiers\0isAutoRepeat\0count\0"
    "nativeScanCode\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickKeyEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   20,    2, 0x82 /* Public | MethodRevisioned */,

 // methods: revision
       2,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Int, 0x00095401,
       9, QMetaType::UInt, 0x00095401,
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QQuickKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickKeyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->matches((*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickKeyEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAutoRepeat(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->nativeScanCode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickKeyEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickKeyEvent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickKeyEvent.data,
    qt_meta_data_QQuickKeyEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickKeyEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickMouseEvent_t {
    QByteArrayData data[11];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMouseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMouseEvent_t qt_meta_stringdata_QQuickMouseEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickMouseEvent"
QT_MOC_LITERAL(1, 17, 1), // "x"
QT_MOC_LITERAL(2, 19, 1), // "y"
QT_MOC_LITERAL(3, 21, 6), // "button"
QT_MOC_LITERAL(4, 28, 7), // "buttons"
QT_MOC_LITERAL(5, 36, 9), // "modifiers"
QT_MOC_LITERAL(6, 46, 6), // "source"
QT_MOC_LITERAL(7, 53, 7), // "wasHeld"
QT_MOC_LITERAL(8, 61, 7), // "isClick"
QT_MOC_LITERAL(9, 69, 8), // "accepted"
QT_MOC_LITERAL(10, 78, 5) // "flags"

    },
    "QQuickMouseEvent\0x\0y\0button\0buttons\0"
    "modifiers\0source\0wasHeld\0isClick\0"
    "accepted\0flags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMouseEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095401,
       2, QMetaType::QReal, 0x00095401,
       3, QMetaType::Int, 0x00095401,
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00895401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Int, 0x00895401,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       7,
       0,
       0,
       0,
      11,

       0        // eod
};

void QQuickMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->button(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->source(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->wasHeld(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isClick(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->flags(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickMouseEvent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickMouseEvent.data,
    qt_meta_data_QQuickMouseEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMouseEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickWheelEvent_t {
    QByteArrayData data[9];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWheelEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWheelEvent_t qt_meta_stringdata_QQuickWheelEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickWheelEvent"
QT_MOC_LITERAL(1, 17, 1), // "x"
QT_MOC_LITERAL(2, 19, 1), // "y"
QT_MOC_LITERAL(3, 21, 10), // "angleDelta"
QT_MOC_LITERAL(4, 32, 10), // "pixelDelta"
QT_MOC_LITERAL(5, 43, 7), // "buttons"
QT_MOC_LITERAL(6, 51, 9), // "modifiers"
QT_MOC_LITERAL(7, 61, 8), // "inverted"
QT_MOC_LITERAL(8, 70, 8) // "accepted"

    },
    "QQuickWheelEvent\0x\0y\0angleDelta\0"
    "pixelDelta\0buttons\0modifiers\0inverted\0"
    "accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWheelEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095401,
       2, QMetaType::QReal, 0x00095401,
       3, QMetaType::QPoint, 0x00095401,
       4, QMetaType::QPoint, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QQuickWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QPoint*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< QPoint*>(_v) = _t->pixelDelta(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickWheelEvent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickWheelEvent.data,
    qt_meta_data_QQuickWheelEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWheelEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickCloseEvent_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCloseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCloseEvent_t qt_meta_stringdata_QQuickCloseEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickCloseEvent"
QT_MOC_LITERAL(1, 17, 8) // "accepted"

    },
    "QQuickCloseEvent\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCloseEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QQuickCloseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickCloseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickCloseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickCloseEvent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickCloseEvent.data,
    qt_meta_data_QQuickCloseEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickCloseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCloseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCloseEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickCloseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickEventPoint_t {
    QByteArrayData data[27];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickEventPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickEventPoint_t qt_meta_stringdata_QQuickEventPoint = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickEventPoint"
QT_MOC_LITERAL(1, 17, 5), // "event"
QT_MOC_LITERAL(2, 23, 19), // "QQuickPointerEvent*"
QT_MOC_LITERAL(3, 43, 8), // "position"
QT_MOC_LITERAL(4, 52, 13), // "scenePosition"
QT_MOC_LITERAL(5, 66, 18), // "scenePressPosition"
QT_MOC_LITERAL(6, 85, 17), // "sceneGrabPosition"
QT_MOC_LITERAL(7, 103, 5), // "state"
QT_MOC_LITERAL(8, 109, 5), // "State"
QT_MOC_LITERAL(9, 115, 7), // "pointId"
QT_MOC_LITERAL(10, 123, 8), // "timeHeld"
QT_MOC_LITERAL(11, 132, 8), // "velocity"
QT_MOC_LITERAL(12, 141, 8), // "accepted"
QT_MOC_LITERAL(13, 150, 16), // "exclusiveGrabber"
QT_MOC_LITERAL(14, 167, 6), // "States"
QT_MOC_LITERAL(15, 174, 7), // "Pressed"
QT_MOC_LITERAL(16, 182, 7), // "Updated"
QT_MOC_LITERAL(17, 190, 10), // "Stationary"
QT_MOC_LITERAL(18, 201, 8), // "Released"
QT_MOC_LITERAL(19, 210, 14), // "GrabTransition"
QT_MOC_LITERAL(20, 225, 11), // "GrabPassive"
QT_MOC_LITERAL(21, 237, 13), // "UngrabPassive"
QT_MOC_LITERAL(22, 251, 17), // "CancelGrabPassive"
QT_MOC_LITERAL(23, 269, 19), // "OverrideGrabPassive"
QT_MOC_LITERAL(24, 289, 13), // "GrabExclusive"
QT_MOC_LITERAL(25, 303, 15), // "UngrabExclusive"
QT_MOC_LITERAL(26, 319, 19) // "CancelGrabExclusive"

    },
    "QQuickEventPoint\0event\0QQuickPointerEvent*\0"
    "position\0scenePosition\0scenePressPosition\0"
    "sceneGrabPosition\0state\0State\0pointId\0"
    "timeHeld\0velocity\0accepted\0exclusiveGrabber\0"
    "States\0Pressed\0Updated\0Stationary\0"
    "Released\0GrabTransition\0GrabPassive\0"
    "UngrabPassive\0CancelGrabPassive\0"
    "OverrideGrabPassive\0GrabExclusive\0"
    "UngrabExclusive\0CancelGrabExclusive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickEventPoint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       2,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, QMetaType::QPointF, 0x00095401,
       4, QMetaType::QPointF, 0x00095401,
       5, QMetaType::QPointF, 0x00095401,
       6, QMetaType::QPointF, 0x00095401,
       7, 0x80000000 | 8, 0x00095409,
       9, QMetaType::Int, 0x00095401,
      10, QMetaType::QReal, 0x00095401,
      11, QMetaType::QVector2D, 0x00095401,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::QObjectStar, 0x00095103,

 // enums: name, alias, flags, count, data
      14,    8, 0x1,    4,   57,
      19,   19, 0x0,    7,   65,

 // enum data: key, value
      15, uint(QQuickEventPoint::Pressed),
      16, uint(QQuickEventPoint::Updated),
      17, uint(QQuickEventPoint::Stationary),
      18, uint(QQuickEventPoint::Released),
      20, uint(QQuickEventPoint::GrabPassive),
      21, uint(QQuickEventPoint::UngrabPassive),
      22, uint(QQuickEventPoint::CancelGrabPassive),
      23, uint(QQuickEventPoint::OverrideGrabPassive),
      24, uint(QQuickEventPoint::GrabExclusive),
      25, uint(QQuickEventPoint::UngrabExclusive),
      26, uint(QQuickEventPoint::CancelGrabExclusive),

       0        // eod
};

void QQuickEventPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickPointerEvent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickEventPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickPointerEvent**>(_v) = _t->pointerEvent(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->scenePosition(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->scenePressPosition(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->sceneGrabPosition(); break;
        case 5: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->pointId(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->timeHeld(); break;
        case 8: *reinterpret_cast< QVector2D*>(_v) = _t->velocity(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        case 10: *reinterpret_cast< QObject**>(_v) = _t->exclusiveGrabber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickEventPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 9: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setExclusiveGrabber(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject QQuickEventPoint::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickEventPoint.data,
    qt_meta_data_QQuickEventPoint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickEventPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickEventPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickEventPoint.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickEventPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickEventTouchPoint_t {
    QByteArrayData data[6];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickEventTouchPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickEventTouchPoint_t qt_meta_stringdata_QQuickEventTouchPoint = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickEventTouchPoint"
QT_MOC_LITERAL(1, 22, 8), // "rotation"
QT_MOC_LITERAL(2, 31, 8), // "pressure"
QT_MOC_LITERAL(3, 40, 16), // "ellipseDiameters"
QT_MOC_LITERAL(4, 57, 8), // "uniqueId"
QT_MOC_LITERAL(5, 66, 23) // "QPointingDeviceUniqueId"

    },
    "QQuickEventTouchPoint\0rotation\0pressure\0"
    "ellipseDiameters\0uniqueId\0"
    "QPointingDeviceUniqueId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickEventTouchPoint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, QMetaType::QSizeF, 0x00095001,
       4, 0x80000000 | 5, 0x00095009,

       0        // eod
};

void QQuickEventTouchPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickEventTouchPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->pressure(); break;
        case 2: *reinterpret_cast< QSizeF*>(_v) = _t->ellipseDiameters(); break;
        case 3: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickEventTouchPoint::staticMetaObject = { {
    &QQuickEventPoint::staticMetaObject,
    qt_meta_stringdata_QQuickEventTouchPoint.data,
    qt_meta_data_QQuickEventTouchPoint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickEventTouchPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickEventTouchPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickEventTouchPoint.stringdata0))
        return static_cast<void*>(this);
    return QQuickEventPoint::qt_metacast(_clname);
}

int QQuickEventTouchPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickEventPoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickPointerEvent_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerEvent_t qt_meta_stringdata_QQuickPointerEvent = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickPointerEvent"
QT_MOC_LITERAL(1, 19, 6), // "device"
QT_MOC_LITERAL(2, 26, 20), // "QQuickPointerDevice*"
QT_MOC_LITERAL(3, 47, 9), // "modifiers"
QT_MOC_LITERAL(4, 57, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(5, 79, 6), // "button"
QT_MOC_LITERAL(6, 86, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(7, 103, 7) // "buttons"

    },
    "QQuickPointerEvent\0device\0"
    "QQuickPointerDevice*\0modifiers\0"
    "Qt::KeyboardModifiers\0button\0"
    "Qt::MouseButtons\0buttons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 6, 0x00095409,
       7, 0x80000000 | 6, 0x00095409,

       0        // eod
};

void QQuickPointerEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickPointerDevice* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPointerEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickPointerDevice**>(_v) = _t->device(); break;
        case 1: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = _t->modifiers(); break;
        case 2: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->button(); break;
        case 3: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->buttons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerEvent::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickPointerEvent.data,
    qt_meta_data_QQuickPointerEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPointerEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickSinglePointEvent_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSinglePointEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSinglePointEvent_t qt_meta_stringdata_QQuickSinglePointEvent = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QQuickSinglePointEvent"

    },
    "QQuickSinglePointEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSinglePointEvent[] = {

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

void QQuickSinglePointEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickSinglePointEvent::staticMetaObject = { {
    &QQuickPointerEvent::staticMetaObject,
    qt_meta_stringdata_QQuickSinglePointEvent.data,
    qt_meta_data_QQuickSinglePointEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickSinglePointEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSinglePointEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSinglePointEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickPointerEvent::qt_metacast(_clname);
}

int QQuickSinglePointEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPointerEvent::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPointerMouseEvent_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerMouseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerMouseEvent_t qt_meta_stringdata_QQuickPointerMouseEvent = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QQuickPointerMouseEvent"

    },
    "QQuickPointerMouseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerMouseEvent[] = {

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

void QQuickPointerMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerMouseEvent::staticMetaObject = { {
    &QQuickSinglePointEvent::staticMetaObject,
    qt_meta_stringdata_QQuickPointerMouseEvent.data,
    qt_meta_data_QQuickPointerMouseEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerMouseEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickSinglePointEvent::qt_metacast(_clname);
}

int QQuickPointerMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickSinglePointEvent::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPointerTouchEvent_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerTouchEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerTouchEvent_t qt_meta_stringdata_QQuickPointerTouchEvent = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QQuickPointerTouchEvent"

    },
    "QQuickPointerTouchEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerTouchEvent[] = {

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

void QQuickPointerTouchEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerTouchEvent::staticMetaObject = { {
    &QQuickPointerEvent::staticMetaObject,
    qt_meta_stringdata_QQuickPointerTouchEvent.data,
    qt_meta_data_QQuickPointerTouchEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerTouchEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerTouchEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerTouchEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickPointerEvent::qt_metacast(_clname);
}

int QQuickPointerTouchEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPointerEvent::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPointerNativeGestureEvent_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerNativeGestureEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerNativeGestureEvent_t qt_meta_stringdata_QQuickPointerNativeGestureEvent = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QQuickPointerNativeGestureEvent"
QT_MOC_LITERAL(1, 32, 4), // "type"
QT_MOC_LITERAL(2, 37, 21), // "Qt::NativeGestureType"
QT_MOC_LITERAL(3, 59, 5) // "value"

    },
    "QQuickPointerNativeGestureEvent\0type\0"
    "Qt::NativeGestureType\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerNativeGestureEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, QMetaType::QReal, 0x00095401,

       0        // eod
};

void QQuickPointerNativeGestureEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPointerNativeGestureEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::NativeGestureType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerNativeGestureEvent::staticMetaObject = { {
    &QQuickSinglePointEvent::staticMetaObject,
    qt_meta_stringdata_QQuickPointerNativeGestureEvent.data,
    qt_meta_data_QQuickPointerNativeGestureEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerNativeGestureEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerNativeGestureEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerNativeGestureEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickSinglePointEvent::qt_metacast(_clname);
}

int QQuickPointerNativeGestureEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickSinglePointEvent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickPointerScrollEvent_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerScrollEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerScrollEvent_t qt_meta_stringdata_QQuickPointerScrollEvent = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickPointerScrollEvent"
QT_MOC_LITERAL(1, 25, 10), // "angleDelta"
QT_MOC_LITERAL(2, 36, 10), // "pixelDelta"
QT_MOC_LITERAL(3, 47, 13), // "hasAngleDelta"
QT_MOC_LITERAL(4, 61, 13), // "hasPixelDelta"
QT_MOC_LITERAL(5, 75, 8) // "inverted"

    },
    "QQuickPointerScrollEvent\0angleDelta\0"
    "pixelDelta\0hasAngleDelta\0hasPixelDelta\0"
    "inverted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerScrollEvent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVector2D, 0x00095401,
       2, QMetaType::QVector2D, 0x00095401,
       3, QMetaType::Bool, 0x00095401,
       4, QMetaType::Bool, 0x00095401,
       5, QMetaType::Bool, 0x00095401,

       0        // eod
};

void QQuickPointerScrollEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPointerScrollEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector2D*>(_v) = _t->angleDelta(); break;
        case 1: *reinterpret_cast< QVector2D*>(_v) = _t->pixelDelta(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasAngleDelta(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->hasPixelDelta(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isInverted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerScrollEvent::staticMetaObject = { {
    &QQuickSinglePointEvent::staticMetaObject,
    qt_meta_stringdata_QQuickPointerScrollEvent.data,
    qt_meta_data_QQuickPointerScrollEvent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerScrollEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerScrollEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerScrollEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickSinglePointEvent::qt_metacast(_clname);
}

int QQuickPointerScrollEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickSinglePointEvent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickPointerDevice_t {
    QByteArrayData data[39];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerDevice_t qt_meta_stringdata_QQuickPointerDevice = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickPointerDevice"
QT_MOC_LITERAL(1, 20, 4), // "type"
QT_MOC_LITERAL(2, 25, 10), // "DeviceType"
QT_MOC_LITERAL(3, 36, 11), // "pointerType"
QT_MOC_LITERAL(4, 48, 11), // "PointerType"
QT_MOC_LITERAL(5, 60, 12), // "capabilities"
QT_MOC_LITERAL(6, 73, 12), // "Capabilities"
QT_MOC_LITERAL(7, 86, 18), // "maximumTouchPoints"
QT_MOC_LITERAL(8, 105, 11), // "buttonCount"
QT_MOC_LITERAL(9, 117, 4), // "name"
QT_MOC_LITERAL(10, 122, 8), // "uniqueId"
QT_MOC_LITERAL(11, 131, 23), // "QPointingDeviceUniqueId"
QT_MOC_LITERAL(12, 155, 11), // "DeviceTypes"
QT_MOC_LITERAL(13, 167, 13), // "UnknownDevice"
QT_MOC_LITERAL(14, 181, 5), // "Mouse"
QT_MOC_LITERAL(15, 187, 11), // "TouchScreen"
QT_MOC_LITERAL(16, 199, 8), // "TouchPad"
QT_MOC_LITERAL(17, 208, 4), // "Puck"
QT_MOC_LITERAL(18, 213, 6), // "Stylus"
QT_MOC_LITERAL(19, 220, 8), // "Airbrush"
QT_MOC_LITERAL(20, 229, 10), // "AllDevices"
QT_MOC_LITERAL(21, 240, 12), // "PointerTypes"
QT_MOC_LITERAL(22, 253, 14), // "GenericPointer"
QT_MOC_LITERAL(23, 268, 6), // "Finger"
QT_MOC_LITERAL(24, 275, 3), // "Pen"
QT_MOC_LITERAL(25, 279, 6), // "Eraser"
QT_MOC_LITERAL(26, 286, 6), // "Cursor"
QT_MOC_LITERAL(27, 293, 15), // "AllPointerTypes"
QT_MOC_LITERAL(28, 309, 14), // "CapabilityFlag"
QT_MOC_LITERAL(29, 324, 8), // "Position"
QT_MOC_LITERAL(30, 333, 4), // "Area"
QT_MOC_LITERAL(31, 338, 8), // "Pressure"
QT_MOC_LITERAL(32, 347, 8), // "Velocity"
QT_MOC_LITERAL(33, 356, 14), // "MouseEmulation"
QT_MOC_LITERAL(34, 371, 6), // "Scroll"
QT_MOC_LITERAL(35, 378, 5), // "Hover"
QT_MOC_LITERAL(36, 384, 8), // "Rotation"
QT_MOC_LITERAL(37, 393, 5), // "XTilt"
QT_MOC_LITERAL(38, 399, 5) // "YTilt"

    },
    "QQuickPointerDevice\0type\0DeviceType\0"
    "pointerType\0PointerType\0capabilities\0"
    "Capabilities\0maximumTouchPoints\0"
    "buttonCount\0name\0uniqueId\0"
    "QPointingDeviceUniqueId\0DeviceTypes\0"
    "UnknownDevice\0Mouse\0TouchScreen\0"
    "TouchPad\0Puck\0Stylus\0Airbrush\0AllDevices\0"
    "PointerTypes\0GenericPointer\0Finger\0"
    "Pen\0Eraser\0Cursor\0AllPointerTypes\0"
    "CapabilityFlag\0Position\0Area\0Pressure\0"
    "Velocity\0MouseEmulation\0Scroll\0Hover\0"
    "Rotation\0XTilt\0YTilt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       3,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::Int, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, 0x80000000 | 11, 0x00095409,

 // enums: name, alias, flags, count, data
      12,    2, 0x1,    8,   50,
      21,    4, 0x1,    6,   66,
       6,   28, 0x1,   10,   78,

 // enum data: key, value
      13, uint(QQuickPointerDevice::UnknownDevice),
      14, uint(QQuickPointerDevice::Mouse),
      15, uint(QQuickPointerDevice::TouchScreen),
      16, uint(QQuickPointerDevice::TouchPad),
      17, uint(QQuickPointerDevice::Puck),
      18, uint(QQuickPointerDevice::Stylus),
      19, uint(QQuickPointerDevice::Airbrush),
      20, uint(QQuickPointerDevice::AllDevices),
      22, uint(QQuickPointerDevice::GenericPointer),
      23, uint(QQuickPointerDevice::Finger),
      24, uint(QQuickPointerDevice::Pen),
      25, uint(QQuickPointerDevice::Eraser),
      26, uint(QQuickPointerDevice::Cursor),
      27, uint(QQuickPointerDevice::AllPointerTypes),
      29, uint(QQuickPointerDevice::Position),
      30, uint(QQuickPointerDevice::Area),
      31, uint(QQuickPointerDevice::Pressure),
      32, uint(QQuickPointerDevice::Velocity),
      33, uint(QQuickPointerDevice::MouseEmulation),
      34, uint(QQuickPointerDevice::Scroll),
      35, uint(QQuickPointerDevice::Hover),
      36, uint(QQuickPointerDevice::Rotation),
      37, uint(QQuickPointerDevice::XTilt),
      38, uint(QQuickPointerDevice::YTilt),

       0        // eod
};

void QQuickPointerDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPointerDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DeviceType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< PointerType*>(_v) = _t->pointerType(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->capabilities()); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maximumTouchPoints(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttonCount(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 6: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerDevice::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickPointerDevice.data,
    qt_meta_data_QQuickPointerDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPointerDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
