/****************************************************************************
** Meta object code from reading C++ file 'qquickscalegrid_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../items/qquickscalegrid_p_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickscalegrid_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickScaleGrid_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScaleGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScaleGrid_t qt_meta_stringdata_QQuickScaleGrid = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickScaleGrid"
QT_MOC_LITERAL(1, 16, 13), // "borderChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "leftBorderChanged"
QT_MOC_LITERAL(4, 49, 16), // "topBorderChanged"
QT_MOC_LITERAL(5, 66, 18), // "rightBorderChanged"
QT_MOC_LITERAL(6, 85, 19), // "bottomBorderChanged"
QT_MOC_LITERAL(7, 105, 4), // "left"
QT_MOC_LITERAL(8, 110, 3), // "top"
QT_MOC_LITERAL(9, 114, 5), // "right"
QT_MOC_LITERAL(10, 120, 6) // "bottom"

    },
    "QQuickScaleGrid\0borderChanged\0\0"
    "leftBorderChanged\0topBorderChanged\0"
    "rightBorderChanged\0bottomBorderChanged\0"
    "left\0top\0right\0bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScaleGrid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

       0        // eod
};

void QQuickScaleGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickScaleGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->borderChanged(); break;
        case 1: _t->leftBorderChanged(); break;
        case 2: _t->topBorderChanged(); break;
        case 3: _t->rightBorderChanged(); break;
        case 4: _t->bottomBorderChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickScaleGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScaleGrid::borderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickScaleGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScaleGrid::leftBorderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickScaleGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScaleGrid::topBorderChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickScaleGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScaleGrid::rightBorderChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickScaleGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScaleGrid::bottomBorderChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickScaleGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->left(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->top(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->right(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickScaleGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLeft(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRight(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBottom(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickScaleGrid::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QQuickScaleGrid.data,
    qt_meta_data_QQuickScaleGrid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickScaleGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScaleGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScaleGrid.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickScaleGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QQuickScaleGrid::borderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickScaleGrid::leftBorderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickScaleGrid::topBorderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickScaleGrid::rightBorderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickScaleGrid::bottomBorderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
