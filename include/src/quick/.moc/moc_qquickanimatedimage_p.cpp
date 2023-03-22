/****************************************************************************
** Meta object code from reading C++ file 'qquickanimatedimage_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../items/qquickanimatedimage_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickanimatedimage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAnimatedImage_t {
    QByteArrayData data[18];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnimatedImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnimatedImage_t qt_meta_stringdata_QQuickAnimatedImage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickAnimatedImage"
QT_MOC_LITERAL(1, 20, 14), // "playingChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "pausedChanged"
QT_MOC_LITERAL(4, 50, 12), // "frameChanged"
QT_MOC_LITERAL(5, 63, 17), // "frameCountChanged"
QT_MOC_LITERAL(6, 81, 12), // "speedChanged"
QT_MOC_LITERAL(7, 94, 11), // "movieUpdate"
QT_MOC_LITERAL(8, 106, 20), // "movieRequestFinished"
QT_MOC_LITERAL(9, 127, 20), // "playingStatusChanged"
QT_MOC_LITERAL(10, 148, 14), // "onCacheChanged"
QT_MOC_LITERAL(11, 163, 17), // "sourceSizeChanged"
QT_MOC_LITERAL(12, 181, 7), // "playing"
QT_MOC_LITERAL(13, 189, 6), // "paused"
QT_MOC_LITERAL(14, 196, 12), // "currentFrame"
QT_MOC_LITERAL(15, 209, 10), // "frameCount"
QT_MOC_LITERAL(16, 220, 5), // "speed"
QT_MOC_LITERAL(17, 226, 10) // "sourceSize"

    },
    "QQuickAnimatedImage\0playingChanged\0\0"
    "pausedChanged\0frameChanged\0frameCountChanged\0"
    "speedChanged\0movieUpdate\0movieRequestFinished\0"
    "playingStatusChanged\0onCacheChanged\0"
    "sourceSizeChanged\0playing\0paused\0"
    "currentFrame\0frameCount\0speed\0sourceSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnimatedImage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   68,    2, 0x06 /* Public */,
       3,    0,   69,    2, 0x06 /* Public */,
       4,    0,   70,    2, 0x06 /* Public */,
       5,    0,   71,    2, 0x06 /* Public */,
       6,    0,   72,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   73,    2, 0x08 /* Private */,
       8,    0,   74,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    0,   76,    2, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       0,
       0,
      11,

 // slots: revision
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::QReal, 0x00c95103,
      17, QMetaType::QSize, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
    1879048203,

 // properties: revision
       0,
       0,
       0,
       0,
      11,
       0,

       0        // eod
};

void QQuickAnimatedImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQuickAnimatedImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playingChanged(); break;
        case 1: _t->pausedChanged(); break;
        case 2: _t->frameChanged(); break;
        case 3: _t->frameCountChanged(); break;
        case 4: _t->speedChanged(); break;
        case 5: _t->movieUpdate(); break;
        case 6: _t->movieRequestFinished(); break;
        case 7: _t->playingStatusChanged(); break;
        case 8: _t->onCacheChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQuickAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::playingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQuickAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::pausedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQuickAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::frameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQuickAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::frameCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQuickAnimatedImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::speedChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QQuickAnimatedImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPaused(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentFrame(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->frameCount(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->speed(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = _t->sourceSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QQuickAnimatedImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaying(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCurrentFrame(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setSpeed(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QQuickAnimatedImage::staticMetaObject = { {
    &QQuickImage::staticMetaObject,
    qt_meta_stringdata_QQuickAnimatedImage.data,
    qt_meta_data_QQuickAnimatedImage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQuickAnimatedImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnimatedImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnimatedImage.stringdata0))
        return static_cast<void*>(this);
    return QQuickImage::qt_metacast(_clname);
}

int QQuickAnimatedImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickImage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void QQuickAnimatedImage::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickAnimatedImage::pausedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickAnimatedImage::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickAnimatedImage::frameCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickAnimatedImage::speedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
// If you get a compile error in this function it can be because either
//     a) You are using a NOTIFY signal that does not exist. Fix it.
//     b) You are using a NOTIFY signal that does exist (in a parent class) but has a non-empty parameter list. This is a moc limitation.
Q_DECL_UNUSED static void checkNotifySignalValidity_QQuickAnimatedImage(QQuickAnimatedImage *t) {
    t->sourceSizeChanged();
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
