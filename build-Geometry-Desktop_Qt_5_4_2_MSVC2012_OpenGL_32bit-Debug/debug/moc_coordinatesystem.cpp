/****************************************************************************
** Meta object code from reading C++ file 'coordinatesystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/coordinatesystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coordinatesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CoordinateSystem_t {
    QByteArrayData data[13];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoordinateSystem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoordinateSystem_t qt_meta_stringdata_CoordinateSystem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CoordinateSystem"
QT_MOC_LITERAL(1, 17, 4), // "zoom"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "step"
QT_MOC_LITERAL(4, 28, 10), // "scaleByInt"
QT_MOC_LITERAL(5, 39, 6), // "factor"
QT_MOC_LITERAL(6, 46, 9), // "drawPoint"
QT_MOC_LITERAL(7, 56, 6), // "Point*"
QT_MOC_LITERAL(8, 63, 8), // "drawLine"
QT_MOC_LITERAL(9, 72, 5), // "Line*"
QT_MOC_LITERAL(10, 78, 4), // "line"
QT_MOC_LITERAL(11, 83, 6), // "redraw"
QT_MOC_LITERAL(12, 90, 11) // "clear_scene"

    },
    "CoordinateSystem\0zoom\0\0step\0scaleByInt\0"
    "factor\0drawPoint\0Point*\0drawLine\0Line*\0"
    "line\0redraw\0clear_scene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoordinateSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    2,   53,    2, 0x0a /* Public */,
       8,    2,   58,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   11,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    QMetaType::Void,

       0        // eod
};

void CoordinateSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoordinateSystem *_t = static_cast<CoordinateSystem *>(_o);
        switch (_id) {
        case 0: _t->zoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->scaleByInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->drawPoint((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 3: _t->drawLine((*reinterpret_cast< Line*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->drawLine((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2]))); break;
        case 5: _t->clear_scene(); break;
        default: ;
        }
    }
}

const QMetaObject CoordinateSystem::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_CoordinateSystem.data,
      qt_meta_data_CoordinateSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CoordinateSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoordinateSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CoordinateSystem.stringdata))
        return static_cast<void*>(const_cast< CoordinateSystem*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int CoordinateSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
