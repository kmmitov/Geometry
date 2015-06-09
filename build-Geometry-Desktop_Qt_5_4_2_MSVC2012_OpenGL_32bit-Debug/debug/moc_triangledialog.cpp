/****************************************************************************
** Meta object code from reading C++ file 'triangledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/triangledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'triangledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TriangleDialog_t {
    QByteArrayData data[13];
    char stringdata[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TriangleDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TriangleDialog_t qt_meta_stringdata_TriangleDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TriangleDialog"
QT_MOC_LITERAL(1, 15, 11), // "send_height"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "Point*"
QT_MOC_LITERAL(4, 35, 11), // "send_median"
QT_MOC_LITERAL(5, 47, 12), // "send_bipolar"
QT_MOC_LITERAL(6, 60, 13), // "process_input"
QT_MOC_LITERAL(7, 74, 24), // "enable_point_1_selection"
QT_MOC_LITERAL(8, 99, 24), // "enable_point_2_selection"
QT_MOC_LITERAL(9, 124, 24), // "enable_point_3_selection"
QT_MOC_LITERAL(10, 149, 9), // "new_point"
QT_MOC_LITERAL(11, 159, 12), // "select_point"
QT_MOC_LITERAL(12, 172, 5) // "index"

    },
    "TriangleDialog\0send_height\0\0Point*\0"
    "send_median\0send_bipolar\0process_input\0"
    "enable_point_1_selection\0"
    "enable_point_2_selection\0"
    "enable_point_3_selection\0new_point\0"
    "select_point\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TriangleDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06 /* Public */,
       4,    3,   66,    2, 0x06 /* Public */,
       5,    3,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   80,    2, 0x0a /* Public */,
       7,    1,   81,    2, 0x0a /* Public */,
       8,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void TriangleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TriangleDialog *_t = static_cast<TriangleDialog *>(_o);
        switch (_id) {
        case 0: _t->send_height((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])),(*reinterpret_cast< Point*(*)>(_a[3]))); break;
        case 1: _t->send_median((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])),(*reinterpret_cast< Point*(*)>(_a[3]))); break;
        case 2: _t->send_bipolar((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2])),(*reinterpret_cast< Point*(*)>(_a[3]))); break;
        case 3: _t->process_input(); break;
        case 4: _t->enable_point_1_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->enable_point_2_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->enable_point_3_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->new_point(); break;
        case 8: _t->select_point((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TriangleDialog::*_t)(Point * , Point * , Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TriangleDialog::send_height)) {
                *result = 0;
            }
        }
        {
            typedef void (TriangleDialog::*_t)(Point * , Point * , Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TriangleDialog::send_median)) {
                *result = 1;
            }
        }
        {
            typedef void (TriangleDialog::*_t)(Point * , Point * , Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TriangleDialog::send_bipolar)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TriangleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TriangleDialog.data,
      qt_meta_data_TriangleDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TriangleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TriangleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TriangleDialog.stringdata))
        return static_cast<void*>(const_cast< TriangleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int TriangleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void TriangleDialog::send_height(Point * _t1, Point * _t2, Point * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TriangleDialog::send_median(Point * _t1, Point * _t2, Point * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TriangleDialog::send_bipolar(Point * _t1, Point * _t2, Point * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
