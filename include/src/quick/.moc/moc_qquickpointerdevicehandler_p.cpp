/****************************************************************************
** Meta object code from reading C++ file 'qquickpointerdevicehandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../handlers/qquickpointerdevicehandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpointerdevicehandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPointerDeviceHandler_t {
    QByteArrayData data[19];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerDeviceHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerDeviceHandler_t qt_meta_stringdata_QQuickPointerDeviceHandler = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QQuickPointerDeviceHandler"
QT_MOC_LITERAL(1, 27, 22), // "acceptedDevicesChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 27), // "acceptedPointerTypesChanged"
QT_MOC_LITERAL(4, 79, 22), // "acceptedButtonsChanged"
QT_MOC_LITERAL(5, 102, 24), // "acceptedModifiersChanged"
QT_MOC_LITERAL(6, 127, 18), // "setAcceptedDevices"
QT_MOC_LITERAL(7, 146, 32), // "QQuickPointerDevice::DeviceTypes"
QT_MOC_LITERAL(8, 179, 15), // "acceptedDevices"
QT_MOC_LITERAL(9, 195, 23), // "setAcceptedPointerTypes"
QT_MOC_LITERAL(10, 219, 33), // "QQuickPointerDevice::PointerT..."
QT_MOC_LITERAL(11, 253, 20), // "acceptedPointerTypes"
QT_MOC_LITERAL(12, 274, 18), // "setAcceptedButtons"
QT_MOC_LITERAL(13, 293, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(14, 310, 7), // "buttons"
QT_MOC_LITERAL(15, 318, 20), // "setAcceptedModifiers"
QT_MOC_LITERAL(16, 339, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(17, 361, 17), // "acceptedModifiers"
QT_MOC_LITERAL(18, 379, 15) // "acceptedButtons"

    },
    "QQuickPointerDeviceHandler\0"
    "acceptedDevicesChanged\0\0"
    "acceptedPointerTypesChanged\0"
    "acceptedButtonsChanged\0acceptedModifiersChanged\0"
    "setAcceptedDevices\0QQuickPointerDevice::DeviceTypes\0"
    "acceptedDevices\0setAcceptedPointerTypes\0"
    "QQuickPointerDevice::PointerTypes\0"
    "acceptedPointerTypes\0setAcceptedButtons\0"
    "Qt::MouseButtons\0buttons\0setAcceptedModifiers\0"
    "Qt::KeyboardModifiers\0acceptedModifiers\0"
    "acceptedButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerDeviceHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,
      15,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

 // properties: name, type, flags
       8, 0x80000000 | 7, 0x0049510b,
      11, 0x80000000 | 10, 0x0049510b,
      18, 0x80000000 | 13, 0x0049510b,
      17, 0x80000000 | 16, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickPointerDeviceHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickPointerDeviceHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptedDevicesChanged(); break;
        case 1: _t->acceptedPointerTypesChanged(); break;
        case 2: _t->acceptedButtonsChanged(); break;
        case 3: _t->acceptedModifiersChanged(); break;
        case 4: _t->setAcceptedDevices((*reinterpret_cast< QQuickPointerDevice::DeviceTypes(*)>(_a[1]))); break;
        case 5: _t->setAcceptedPointerTypes((*reinterpret_cast< QQuickPointerDevice::PointerTypes(*)>(_a[1]))); break;
        case 6: _t->setAcceptedButtons((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        case 7: _t->setAcceptedModifiers((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickPointerDeviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerDeviceHandler::acceptedDevicesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickPointerDeviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerDeviceHandler::acceptedPointerTypesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickPointerDeviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerDeviceHandler::acceptedButtonsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickPointerDeviceHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPointerDeviceHandler::acceptedModifiersChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickPointerDeviceHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickPointerDevice::DeviceTypes*>(_v) = _t->acceptedDevices(); break;
        case 1: *reinterpret_cast< QQuickPointerDevice::PointerTypes*>(_v) = _t->acceptedPointerTypes(); break;
        case 2: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->acceptedButtons(); break;
        case 3: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = _t->acceptedModifiers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickPointerDeviceHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAcceptedDevices(*reinterpret_cast< QQuickPointerDevice::DeviceTypes*>(_v)); break;
        case 1: _t->setAcceptedPointerTypes(*reinterpret_cast< QQuickPointerDevice::PointerTypes*>(_v)); break;
        case 2: _t->setAcceptedButtons(*reinterpret_cast< Qt::MouseButtons*>(_v)); break;
        case 3: _t->setAcceptedModifiers(*reinterpret_cast< Qt::KeyboardModifiers*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickPointerDeviceHandler[] = {
        &QQuickPointerDevice::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QQuickPointerDeviceHandler::staticMetaObject = { {
    &QQuickPointerHandler::staticMetaObject,
    qt_meta_stringdata_QQuickPointerDeviceHandler.data,
    qt_meta_data_QQuickPointerDeviceHandler,
    qt_static_metacall,
    qt_meta_extradata_QQuickPointerDeviceHandler,
    nullptr
} };


const QMetaObject *QQuickPointerDeviceHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerDeviceHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerDeviceHandler.stringdata0))
        return static_cast<void*>(this);
    return QQuickPointerHandler::qt_metacast(_clname);
}

int QQuickPointerDeviceHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPointerHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QQuickPointerDeviceHandler::acceptedDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPointerDeviceHandler::acceptedPointerTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPointerDeviceHandler::acceptedButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPointerDeviceHandler::acceptedModifiersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
