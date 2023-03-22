/****************************************************************************
** Meta object code from reading C++ file 'qqmlpreviewservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qqmlpreviewservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlpreviewservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlPreviewServiceImpl_t {
    QByteArrayData data[16];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlPreviewServiceImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlPreviewServiceImpl_t qt_meta_stringdata_QQmlPreviewServiceImpl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQmlPreviewServiceImpl"
QT_MOC_LITERAL(1, 23, 5), // "error"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "file"
QT_MOC_LITERAL(4, 35, 8), // "contents"
QT_MOC_LITERAL(5, 44, 9), // "directory"
QT_MOC_LITERAL(6, 54, 7), // "entries"
QT_MOC_LITERAL(7, 62, 4), // "load"
QT_MOC_LITERAL(8, 67, 3), // "url"
QT_MOC_LITERAL(9, 71, 5), // "rerun"
QT_MOC_LITERAL(10, 77, 10), // "clearCache"
QT_MOC_LITERAL(11, 88, 4), // "zoom"
QT_MOC_LITERAL(12, 93, 6), // "factor"
QT_MOC_LITERAL(13, 100, 8), // "language"
QT_MOC_LITERAL(14, 109, 7), // "context"
QT_MOC_LITERAL(15, 117, 6) // "locale"

    },
    "QQmlPreviewServiceImpl\0error\0\0file\0"
    "contents\0directory\0entries\0load\0url\0"
    "rerun\0clearCache\0zoom\0factor\0language\0"
    "context\0locale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlPreviewServiceImpl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    2,   57,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       7,    1,   67,    2, 0x06 /* Public */,
       9,    0,   70,    2, 0x06 /* Public */,
      10,    0,   71,    2, 0x06 /* Public */,
      11,    1,   72,    2, 0x06 /* Public */,
      13,    2,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QLocale,   14,   15,

       0        // eod
};

void QQmlPreviewServiceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQmlPreviewServiceImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->file((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 2: _t->directory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 3: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->rerun(); break;
        case 5: _t->clearCache(); break;
        case 6: _t->zoom((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->language((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QLocale(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQmlPreviewServiceImpl::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::file)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::directory)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::load)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::rerun)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::clearCache)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::zoom)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QQmlPreviewServiceImpl::*)(const QUrl & , const QLocale & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlPreviewServiceImpl::language)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QQmlPreviewServiceImpl::staticMetaObject = { {
    &QQmlDebugService::staticMetaObject,
    qt_meta_stringdata_QQmlPreviewServiceImpl.data,
    qt_meta_data_QQmlPreviewServiceImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQmlPreviewServiceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlPreviewServiceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlPreviewServiceImpl.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugService::qt_metacast(_clname);
}

int QQmlPreviewServiceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugService::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QQmlPreviewServiceImpl::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlPreviewServiceImpl::file(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlPreviewServiceImpl::directory(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlPreviewServiceImpl::load(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQmlPreviewServiceImpl::rerun()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQmlPreviewServiceImpl::clearCache()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQmlPreviewServiceImpl::zoom(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QQmlPreviewServiceImpl::language(const QUrl & _t1, const QLocale & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
