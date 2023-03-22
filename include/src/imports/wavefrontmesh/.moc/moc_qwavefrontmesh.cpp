/****************************************************************************
** Meta object code from reading C++ file 'qwavefrontmesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwavefrontmesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwavefrontmesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWavefrontMesh_t {
    QByteArrayData data[23];
    char stringdata0[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWavefrontMesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWavefrontMesh_t qt_meta_stringdata_QWavefrontMesh = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QWavefrontMesh"
QT_MOC_LITERAL(1, 15, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "lastErrorChanged"
QT_MOC_LITERAL(4, 47, 23), // "projectionPlaneVChanged"
QT_MOC_LITERAL(5, 71, 23), // "projectionPlaneWChanged"
QT_MOC_LITERAL(6, 95, 8), // "readData"
QT_MOC_LITERAL(7, 104, 6), // "source"
QT_MOC_LITERAL(8, 111, 9), // "lastError"
QT_MOC_LITERAL(9, 121, 5), // "Error"
QT_MOC_LITERAL(10, 127, 16), // "projectionPlaneV"
QT_MOC_LITERAL(11, 144, 16), // "projectionPlaneW"
QT_MOC_LITERAL(12, 161, 7), // "NoError"
QT_MOC_LITERAL(13, 169, 18), // "InvalidSourceError"
QT_MOC_LITERAL(14, 188, 25), // "UnsupportedFaceShapeError"
QT_MOC_LITERAL(15, 214, 25), // "UnsupportedIndexSizeError"
QT_MOC_LITERAL(16, 240, 17), // "FileNotFoundError"
QT_MOC_LITERAL(17, 258, 17), // "NoAttributesError"
QT_MOC_LITERAL(18, 276, 29), // "MissingPositionAttributeError"
QT_MOC_LITERAL(19, 306, 38), // "MissingTextureCoordinateAttri..."
QT_MOC_LITERAL(20, 345, 50), // "MissingPositionAndTextureCoor..."
QT_MOC_LITERAL(21, 396, 22), // "TooManyAttributesError"
QT_MOC_LITERAL(22, 419, 27) // "InvalidPlaneDefinitionError"

    },
    "QWavefrontMesh\0sourceChanged\0\0"
    "lastErrorChanged\0projectionPlaneVChanged\0"
    "projectionPlaneWChanged\0readData\0"
    "source\0lastError\0Error\0projectionPlaneV\0"
    "projectionPlaneW\0NoError\0InvalidSourceError\0"
    "UnsupportedFaceShapeError\0"
    "UnsupportedIndexSizeError\0FileNotFoundError\0"
    "NoAttributesError\0MissingPositionAttributeError\0"
    "MissingTextureCoordinateAttributeError\0"
    "MissingPositionAndTextureCoordinateAttributesError\0"
    "TooManyAttributesError\0"
    "InvalidPlaneDefinitionError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWavefrontMesh[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QUrl, 0x00495103,
       8, 0x80000000 | 9, 0x00495009,
      10, QMetaType::QVector3D, 0x00495103,
      11, QMetaType::QVector3D, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,   11,   65,

 // enum data: key, value
      12, uint(QWavefrontMesh::NoError),
      13, uint(QWavefrontMesh::InvalidSourceError),
      14, uint(QWavefrontMesh::UnsupportedFaceShapeError),
      15, uint(QWavefrontMesh::UnsupportedIndexSizeError),
      16, uint(QWavefrontMesh::FileNotFoundError),
      17, uint(QWavefrontMesh::NoAttributesError),
      18, uint(QWavefrontMesh::MissingPositionAttributeError),
      19, uint(QWavefrontMesh::MissingTextureCoordinateAttributeError),
      20, uint(QWavefrontMesh::MissingPositionAndTextureCoordinateAttributesError),
      21, uint(QWavefrontMesh::TooManyAttributesError),
      22, uint(QWavefrontMesh::InvalidPlaneDefinitionError),

       0        // eod
};

void QWavefrontMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWavefrontMesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->lastErrorChanged(); break;
        case 2: _t->projectionPlaneVChanged(); break;
        case 3: _t->projectionPlaneWChanged(); break;
        case 4: _t->readData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QWavefrontMesh::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWavefrontMesh::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QWavefrontMesh::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWavefrontMesh::lastErrorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QWavefrontMesh::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWavefrontMesh::projectionPlaneVChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QWavefrontMesh::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWavefrontMesh::projectionPlaneWChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QWavefrontMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< Error*>(_v) = _t->lastError(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->projectionPlaneV(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->projectionPlaneW(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QWavefrontMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setProjectionPlaneV(*reinterpret_cast< QVector3D*>(_v)); break;
        case 3: _t->setProjectionPlaneW(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QWavefrontMesh::staticMetaObject = { {
    &QQuickShaderEffectMesh::staticMetaObject,
    qt_meta_stringdata_QWavefrontMesh.data,
    qt_meta_data_QWavefrontMesh,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWavefrontMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWavefrontMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWavefrontMesh.stringdata0))
        return static_cast<void*>(this);
    return QQuickShaderEffectMesh::qt_metacast(_clname);
}

int QWavefrontMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickShaderEffectMesh::qt_metacall(_c, _id, _a);
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
void QWavefrontMesh::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWavefrontMesh::lastErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QWavefrontMesh::projectionPlaneVChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QWavefrontMesh::projectionPlaneWChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
