/****************************************************************************
** Meta object code from reading C++ file 'qsgengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scenegraph/util/qsgengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsgengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSGEngine_t {
    QByteArrayData data[7];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSGEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSGEngine_t qt_meta_stringdata_QSGEngine = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QSGEngine"
QT_MOC_LITERAL(1, 10, 20), // "CreateTextureOptions"
QT_MOC_LITERAL(2, 31, 19), // "CreateTextureOption"
QT_MOC_LITERAL(3, 51, 22), // "TextureHasAlphaChannel"
QT_MOC_LITERAL(4, 74, 20), // "TextureOwnsGLTexture"
QT_MOC_LITERAL(5, 95, 18), // "TextureCanUseAtlas"
QT_MOC_LITERAL(6, 114, 15) // "TextureIsOpaque"

    },
    "QSGEngine\0CreateTextureOptions\0"
    "CreateTextureOption\0TextureHasAlphaChannel\0"
    "TextureOwnsGLTexture\0TextureCanUseAtlas\0"
    "TextureIsOpaque"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSGEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    2, 0x1,    4,   19,

 // enum data: key, value
       3, uint(QSGEngine::TextureHasAlphaChannel),
       4, uint(QSGEngine::TextureOwnsGLTexture),
       5, uint(QSGEngine::TextureCanUseAtlas),
       6, uint(QSGEngine::TextureIsOpaque),

       0        // eod
};

void QSGEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QSGEngine::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QSGEngine.data,
    qt_meta_data_QSGEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSGEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSGEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSGEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSGEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
