/****************************************************************************
** Meta object code from reading C++ file 'qquickparticlegroup_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickparticlegroup_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickparticlegroup_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickParticleGroup_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickParticleGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickParticleGroup_t qt_meta_stringdata_QQuickParticleGroup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickParticleGroup"
QT_MOC_LITERAL(1, 20, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 36, 16), // "particleChildren"
QT_MOC_LITERAL(3, 53, 19), // "maximumAliveChanged"
QT_MOC_LITERAL(4, 73, 0), // ""
QT_MOC_LITERAL(5, 74, 3), // "arg"
QT_MOC_LITERAL(6, 78, 13), // "systemChanged"
QT_MOC_LITERAL(7, 92, 21), // "QQuickParticleSystem*"
QT_MOC_LITERAL(8, 114, 15), // "setMaximumAlive"
QT_MOC_LITERAL(9, 130, 9), // "setSystem"
QT_MOC_LITERAL(10, 140, 13), // "delayRedirect"
QT_MOC_LITERAL(11, 154, 3), // "obj"
QT_MOC_LITERAL(12, 158, 6), // "system"
QT_MOC_LITERAL(13, 165, 25) // "QQmlListProperty<QObject>"

    },
    "QQuickParticleGroup\0DefaultProperty\0"
    "particleChildren\0maximumAliveChanged\0"
    "\0arg\0systemChanged\0QQuickParticleSystem*\0"
    "setMaximumAlive\0setSystem\0delayRedirect\0"
    "obj\0system\0QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickParticleGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   41,    4, 0x06 /* Public */,
       6,    1,   44,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   47,    4, 0x0a /* Public */,
       9,    1,   50,    4, 0x0a /* Public */,
      10,    1,   53,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, QMetaType::QObjectStar,   11,

 // properties: name, type, flags
      12, 0x80000000 | 7, 0x0049510b,
       2, 0x80000000 | 13, 0x00094009,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void QQuickParticleGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickParticleGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maximumAliveChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->systemChanged((*reinterpret_cast< QQuickParticleSystem*(*)>(_a[1]))); break;
        case 2: _t->setMaximumAlive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setSystem((*reinterpret_cast< QQuickParticleSystem*(*)>(_a[1]))); break;
        case 4: _t->delayRedirect((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickParticleSystem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickParticleSystem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickParticleGroup::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParticleGroup::maximumAliveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickParticleGroup::*)(QQuickParticleSystem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParticleGroup::systemChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickParticleSystem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickParticleGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickParticleSystem**>(_v) = _t->system(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->particleChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickParticleGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSystem(*reinterpret_cast< QQuickParticleSystem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QQuickParticleGroup::staticMetaObject = { {
    &QQuickStochasticState::staticMetaObject,
    qt_meta_stringdata_QQuickParticleGroup.data,
    qt_meta_data_QQuickParticleGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickParticleGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickParticleGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickParticleGroup.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QQuickStochasticState::qt_metacast(_clname);
}

int QQuickParticleGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickStochasticState::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void QQuickParticleGroup::maximumAliveChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickParticleGroup::systemChanged(QQuickParticleSystem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
