/****************************************************************************
** Meta object code from reading C++ file 'qquickage_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickage_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAgeAffector_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAgeAffector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAgeAffector_t qt_meta_stringdata_QQuickAgeAffector = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickAgeAffector"
QT_MOC_LITERAL(1, 18, 15), // "lifeLeftChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "arg"
QT_MOC_LITERAL(4, 39, 22), // "advancePositionChanged"
QT_MOC_LITERAL(5, 62, 11), // "setLifeLeft"
QT_MOC_LITERAL(6, 74, 18), // "setAdvancePosition"
QT_MOC_LITERAL(7, 93, 8), // "lifeLeft"
QT_MOC_LITERAL(8, 102, 15) // "advancePosition"

    },
    "QQuickAgeAffector\0lifeLeftChanged\0\0"
    "arg\0advancePositionChanged\0setLifeLeft\0"
    "setAdvancePosition\0lifeLeft\0advancePosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAgeAffector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickAgeAffector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickAgeAffector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lifeLeftChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->advancePositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setLifeLeft((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setAdvancePosition((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickAgeAffector::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAgeAffector::lifeLeftChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickAgeAffector::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAgeAffector::advancePositionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickAgeAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->lifeLeft(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->advancePosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickAgeAffector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLifeLeft(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setAdvancePosition(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickAgeAffector::staticMetaObject = { {
    &QQuickParticleAffector::staticMetaObject,
    qt_meta_stringdata_QQuickAgeAffector.data,
    qt_meta_data_QQuickAgeAffector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickAgeAffector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAgeAffector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAgeAffector.stringdata0))
        return static_cast<void*>(this);
    return QQuickParticleAffector::qt_metacast(_clname);
}

int QQuickAgeAffector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickParticleAffector::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QQuickAgeAffector::lifeLeftChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickAgeAffector::advancePositionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
