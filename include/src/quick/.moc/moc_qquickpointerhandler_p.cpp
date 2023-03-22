/****************************************************************************
** Meta object code from reading C++ file 'qquickpointerhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../handlers/qquickpointerhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpointerhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPointerHandler_t {
    QByteArrayData data[32];
    char stringdata0[572];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerHandler_t qt_meta_stringdata_QQuickPointerHandler = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickPointerHandler"
QT_MOC_LITERAL(1, 21, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "activeChanged"
QT_MOC_LITERAL(4, 51, 13), // "targetChanged"
QT_MOC_LITERAL(5, 65, 13), // "marginChanged"
QT_MOC_LITERAL(6, 79, 11), // "grabChanged"
QT_MOC_LITERAL(7, 91, 32), // "QQuickEventPoint::GrabTransition"
QT_MOC_LITERAL(8, 124, 10), // "transition"
QT_MOC_LITERAL(9, 135, 17), // "QQuickEventPoint*"
QT_MOC_LITERAL(10, 153, 5), // "point"
QT_MOC_LITERAL(11, 159, 21), // "grabPermissionChanged"
QT_MOC_LITERAL(12, 181, 8), // "canceled"
QT_MOC_LITERAL(13, 190, 7), // "enabled"
QT_MOC_LITERAL(14, 198, 6), // "active"
QT_MOC_LITERAL(15, 205, 6), // "target"
QT_MOC_LITERAL(16, 212, 11), // "QQuickItem*"
QT_MOC_LITERAL(17, 224, 6), // "parent"
QT_MOC_LITERAL(18, 231, 15), // "grabPermissions"
QT_MOC_LITERAL(19, 247, 15), // "GrabPermissions"
QT_MOC_LITERAL(20, 263, 6), // "margin"
QT_MOC_LITERAL(21, 270, 14), // "GrabPermission"
QT_MOC_LITERAL(22, 285, 17), // "TakeOverForbidden"
QT_MOC_LITERAL(23, 303, 33), // "CanTakeOverFromHandlersOfSame..."
QT_MOC_LITERAL(24, 337, 38), // "CanTakeOverFromHandlersOfDiff..."
QT_MOC_LITERAL(25, 376, 20), // "CanTakeOverFromItems"
QT_MOC_LITERAL(26, 397, 23), // "CanTakeOverFromAnything"
QT_MOC_LITERAL(27, 421, 36), // "ApprovesTakeOverByHandlersOfS..."
QT_MOC_LITERAL(28, 458, 41), // "ApprovesTakeOverByHandlersOfD..."
QT_MOC_LITERAL(29, 500, 23), // "ApprovesTakeOverByItems"
QT_MOC_LITERAL(30, 524, 20), // "ApprovesCancellation"
QT_MOC_LITERAL(31, 545, 26) // "ApprovesTakeOverByAnything"

    },
    "QQuickPointerHandler\0enabledChanged\0"
    "\0activeChanged\0targetChanged\0marginChanged\0"
    "grabChanged\0QQuickEventPoint::GrabTransition\0"
    "transition\0QQuickEventPoint*\0point\0"
    "grabPermissionChanged\0canceled\0enabled\0"
    "active\0target\0QQuickItem*\0parent\0"
    "grabPermissions\0GrabPermissions\0margin\0"
    "GrabPermission\0TakeOverForbidden\0"
    "CanTakeOverFromHandlersOfSameType\0"
    "CanTakeOverFromHandlersOfDifferentType\0"
    "CanTakeOverFromItems\0CanTakeOverFromAnything\0"
    "ApprovesTakeOverByHandlersOfSameType\0"
    "ApprovesTakeOverByHandlersOfDifferentType\0"
    "ApprovesTakeOverByItems\0ApprovesCancellation\0"
    "ApprovesTakeOverByAnything"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   62, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    2,   53,    2, 0x06 /* Public */,
      11,    0,   58,    2, 0x06 /* Public */,
      12,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495001,
      15, 0x80000000 | 16, 0x0049510b,
      17, 0x80000000 | 16, 0x00095409,
      18, 0x80000000 | 19, 0x0049510b,
      20, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       5,
       3,

 // enums: name, alias, flags, count, data
      19,   21, 0x1,   10,   91,

 // enum data: key, value
      22, uint(QQuickPointerHandler::TakeOverForbidden),
      23, uint(QQuickPointerHandler::CanTakeOverFromHandlersOfSameType),
      24, uint(QQuickPointerHandler::CanTakeOverFromHandlersOfDifferentType),
      25, uint(QQuickPointerHandler::CanTakeOverFromItems),
      26, uint(QQuickPointerHandler::CanTakeOverFromAnything),
      27, uint(QQuickPointerHandler::ApprovesTakeOverByHandlersOfSameType),
      28, uint(QQuickPointerHandler::ApprovesTakeOverByHandlersOfDifferentType),
      29, uint(QQuickPointerHandler::ApprovesTakeOverByItems),
      30, uint(QQuickPointerHandler::ApprovesCancellation),
      31, uint(QQuickPointerHandler::ApprovesTakeOverByAnything),

       0        // eod
};

void QQuickPointerHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickPointerHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->targetChanged(); break;
        case 3: _t->marginChanged(); break;
        case 4: _t->grabChanged((*reinterpret_cast< QQuickEventPoint::GrabTransition(*)>(_a[1])),(*reinterpret_cast< QQuickEventPoint*(*)>(_a[2]))); break;
        case 5: _t->grabPermissionChanged(); break;
        case 6: _t->canceled((*reinterpret_cast< QQuickEventPoint*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickEventPoint* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickEventPoint::GrabTransition >(); break;
            }
            break;
        case 6:
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
            using _t = void (QQuickPointerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickPointerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickPointerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::targetChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickPointerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::marginChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickPointerHandler::*)(QQuickEventPoint::GrabTransition , QQuickEventPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::grabChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQuickPointerHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::grabPermissionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQuickPointerHandler::*)(QQuickEventPoint * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerHandler::canceled)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPointerHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->parentItem(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(_t->grabPermissions()); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->margin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickPointerHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 4: _t->setGrabPermissions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: _t->setMargin(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickPointerHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickPointerHandler.data,
    qt_meta_data_QQuickPointerHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickPointerHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPointerHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void QQuickPointerHandler::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPointerHandler::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPointerHandler::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPointerHandler::marginChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPointerHandler::grabChanged(QQuickEventPoint::GrabTransition _t1, QQuickEventPoint * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickPointerHandler::grabPermissionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickPointerHandler::canceled(QQuickEventPoint * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
