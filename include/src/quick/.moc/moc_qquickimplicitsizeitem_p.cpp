/****************************************************************************
** Meta object code from reading C++ file 'qquickimplicitsizeitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../items/qquickimplicitsizeitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickimplicitsizeitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickImplicitSizeItem_t {
    QByteArrayData data[5];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickImplicitSizeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickImplicitSizeItem_t qt_meta_stringdata_QQuickImplicitSizeItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickImplicitSizeItem"
QT_MOC_LITERAL(1, 23, 20), // "implicitWidthChanged"
QT_MOC_LITERAL(2, 44, 21), // "implicitHeightChanged"
QT_MOC_LITERAL(3, 66, 13), // "implicitWidth"
QT_MOC_LITERAL(4, 80, 14) // "implicitHeight"

    },
    "QQuickImplicitSizeItem\0implicitWidthChanged\0"
    "implicitHeightChanged\0implicitWidth\0"
    "implicitHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickImplicitSizeItem[] = {

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
       3, QMetaType::QReal, 0x00495001,
       4, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
    1879048193,
    1879048194,

       0        // eod
};

void QQuickImplicitSizeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickImplicitSizeItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->implicitWidth(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->implicitHeight(); break;
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

QT_INIT_METAOBJECT const QMetaObject QQuickImplicitSizeItem::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_QQuickImplicitSizeItem.data,
    qt_meta_data_QQuickImplicitSizeItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickImplicitSizeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickImplicitSizeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickImplicitSizeItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickImplicitSizeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_QQuickImplicitSizeItem(QQuickImplicitSizeItem *t) {
    t->implicitWidthChanged();
    t->implicitHeightChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
