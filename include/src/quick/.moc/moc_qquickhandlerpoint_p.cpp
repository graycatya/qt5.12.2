/****************************************************************************
** Meta object code from reading C++ file 'qquickhandlerpoint_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../handlers/qquickhandlerpoint_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickhandlerpoint_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickHandlerPoint_t {
    QByteArrayData data[17];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickHandlerPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickHandlerPoint_t qt_meta_stringdata_QQuickHandlerPoint = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickHandlerPoint"
QT_MOC_LITERAL(1, 19, 2), // "id"
QT_MOC_LITERAL(2, 22, 8), // "uniqueId"
QT_MOC_LITERAL(3, 31, 23), // "QPointingDeviceUniqueId"
QT_MOC_LITERAL(4, 55, 8), // "position"
QT_MOC_LITERAL(5, 64, 13), // "scenePosition"
QT_MOC_LITERAL(6, 78, 13), // "pressPosition"
QT_MOC_LITERAL(7, 92, 18), // "scenePressPosition"
QT_MOC_LITERAL(8, 111, 17), // "sceneGrabPosition"
QT_MOC_LITERAL(9, 129, 14), // "pressedButtons"
QT_MOC_LITERAL(10, 144, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(11, 161, 9), // "modifiers"
QT_MOC_LITERAL(12, 171, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(13, 193, 8), // "velocity"
QT_MOC_LITERAL(14, 202, 8), // "rotation"
QT_MOC_LITERAL(15, 211, 8), // "pressure"
QT_MOC_LITERAL(16, 220, 16) // "ellipseDiameters"

    },
    "QQuickHandlerPoint\0id\0uniqueId\0"
    "QPointingDeviceUniqueId\0position\0"
    "scenePosition\0pressPosition\0"
    "scenePressPosition\0sceneGrabPosition\0"
    "pressedButtons\0Qt::MouseButtons\0"
    "modifiers\0Qt::KeyboardModifiers\0"
    "velocity\0rotation\0pressure\0ellipseDiameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickHandlerPoint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095001,
       2, 0x80000000 | 3, 0x00095009,
       4, QMetaType::QPointF, 0x00095001,
       5, QMetaType::QPointF, 0x00095001,
       6, QMetaType::QPointF, 0x00095001,
       7, QMetaType::QPointF, 0x00095001,
       8, QMetaType::QPointF, 0x00095001,
       9, 0x80000000 | 10, 0x00095009,
      11, 0x80000000 | 12, 0x00095009,
      13, QMetaType::QVector2D, 0x00095001,
      14, QMetaType::QReal, 0x00095001,
      15, QMetaType::QReal, 0x00095001,
      16, QMetaType::QSizeF, 0x00095001,

       0        // eod
};

void QQuickHandlerPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QQuickHandlerPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->scenePosition(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->pressPosition(); break;
        case 5: *reinterpret_cast< QPointF*>(_v) = _t->scenePressPosition(); break;
        case 6: *reinterpret_cast< QPointF*>(_v) = _t->sceneGrabPosition(); break;
        case 7: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->pressedButtons(); break;
        case 8: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = _t->modifiers(); break;
        case 9: *reinterpret_cast< QVector2D*>(_v) = _t->velocity(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->pressure(); break;
        case 12: *reinterpret_cast< QSizeF*>(_v) = _t->ellipseDiameters(); break;
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

QT_INIT_METAOBJECT const QMetaObject QQuickHandlerPoint::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QQuickHandlerPoint.data,
    qt_meta_data_QQuickHandlerPoint,
    qt_static_metacall,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
