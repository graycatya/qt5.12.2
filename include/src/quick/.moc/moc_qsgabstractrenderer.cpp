/****************************************************************************
** Meta object code from reading C++ file 'qsgabstractrenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scenegraph/coreapi/qsgabstractrenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsgabstractrenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSGAbstractRenderer_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSGAbstractRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSGAbstractRenderer_t qt_meta_stringdata_QSGAbstractRenderer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QSGAbstractRenderer"
QT_MOC_LITERAL(1, 20, 17), // "sceneGraphChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "ClearMode"
QT_MOC_LITERAL(4, 49, 12), // "ClearModeBit"
QT_MOC_LITERAL(5, 62, 16), // "ClearColorBuffer"
QT_MOC_LITERAL(6, 79, 16), // "ClearDepthBuffer"
QT_MOC_LITERAL(7, 96, 18) // "ClearStencilBuffer"

    },
    "QSGAbstractRenderer\0sceneGraphChanged\0"
    "\0ClearMode\0ClearModeBit\0ClearColorBuffer\0"
    "ClearDepthBuffer\0ClearStencilBuffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSGAbstractRenderer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       3,    4, 0x1,    3,   25,

 // enum data: key, value
       5, uint(QSGAbstractRenderer::ClearColorBuffer),
       6, uint(QSGAbstractRenderer::ClearDepthBuffer),
       7, uint(QSGAbstractRenderer::ClearStencilBuffer),

       0        // eod
};

void QSGAbstractRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSGAbstractRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sceneGraphChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSGAbstractRenderer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSGAbstractRenderer::sceneGraphChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QSGAbstractRenderer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QSGAbstractRenderer.data,
    qt_meta_data_QSGAbstractRenderer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSGAbstractRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSGAbstractRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSGAbstractRenderer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSGAbstractRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QSGAbstractRenderer::sceneGraphChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
