/****************************************************************************
** Meta object code from reading C++ file 'linebypointsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/linebypointsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linebypointsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LineByPointsDialog_t {
    QByteArrayData data[11];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineByPointsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineByPointsDialog_t qt_meta_stringdata_LineByPointsDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LineByPointsDialog"
QT_MOC_LITERAL(1, 19, 9), // "send_info"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "Point*"
QT_MOC_LITERAL(4, 37, 13), // "process_input"
QT_MOC_LITERAL(5, 51, 24), // "enable_point_1_selection"
QT_MOC_LITERAL(6, 76, 24), // "enable_point_2_selection"
QT_MOC_LITERAL(7, 101, 11), // "new_point_1"
QT_MOC_LITERAL(8, 113, 11), // "new_point_2"
QT_MOC_LITERAL(9, 125, 12), // "select_point"
QT_MOC_LITERAL(10, 138, 5) // "index"

    },
    "LineByPointsDialog\0send_info\0\0Point*\0"
    "process_input\0enable_point_1_selection\0"
    "enable_point_2_selection\0new_point_1\0"
    "new_point_2\0select_point\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineByPointsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   54,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void LineByPointsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LineByPointsDialog *_t = static_cast<LineByPointsDialog *>(_o);
        switch (_id) {
        case 0: _t->send_info((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Point*(*)>(_a[2]))); break;
        case 1: _t->process_input(); break;
        case 2: _t->enable_point_1_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->enable_point_2_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->new_point_1(); break;
        case 5: _t->new_point_2(); break;
        case 6: _t->select_point((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LineByPointsDialog::*_t)(Point * , Point * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LineByPointsDialog::send_info)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LineByPointsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LineByPointsDialog.data,
      qt_meta_data_LineByPointsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LineByPointsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineByPointsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LineByPointsDialog.stringdata))
        return static_cast<void*>(const_cast< LineByPointsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LineByPointsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LineByPointsDialog::send_info(Point * _t1, Point * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
