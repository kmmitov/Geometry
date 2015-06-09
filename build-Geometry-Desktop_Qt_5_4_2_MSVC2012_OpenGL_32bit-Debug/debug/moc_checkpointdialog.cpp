/****************************************************************************
** Meta object code from reading C++ file 'checkpointdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Geometry/checkpointdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkpointdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CheckPointDialog_t {
    QByteArrayData data[13];
    char stringdata[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CheckPointDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CheckPointDialog_t qt_meta_stringdata_CheckPointDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CheckPointDialog"
QT_MOC_LITERAL(1, 17, 19), // "check_point_on_line"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "Point*"
QT_MOC_LITERAL(4, 45, 5), // "Line*"
QT_MOC_LITERAL(5, 51, 13), // "process_input"
QT_MOC_LITERAL(6, 65, 22), // "enable_point_selection"
QT_MOC_LITERAL(7, 88, 21), // "enable_line_selection"
QT_MOC_LITERAL(8, 110, 9), // "new_point"
QT_MOC_LITERAL(9, 120, 8), // "new_line"
QT_MOC_LITERAL(10, 129, 12), // "select_point"
QT_MOC_LITERAL(11, 142, 5), // "index"
QT_MOC_LITERAL(12, 148, 11) // "select_line"

    },
    "CheckPointDialog\0check_point_on_line\0"
    "\0Point*\0Line*\0process_input\0"
    "enable_point_selection\0enable_line_selection\0"
    "new_point\0new_line\0select_point\0index\0"
    "select_line"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CheckPointDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   59,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void CheckPointDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CheckPointDialog *_t = static_cast<CheckPointDialog *>(_o);
        switch (_id) {
        case 0: _t->check_point_on_line((*reinterpret_cast< Point*(*)>(_a[1])),(*reinterpret_cast< Line*(*)>(_a[2]))); break;
        case 1: _t->process_input(); break;
        case 2: _t->enable_point_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->enable_line_selection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->new_point(); break;
        case 5: _t->new_line(); break;
        case 6: _t->select_point((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->select_line((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CheckPointDialog::*_t)(Point * , Line * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CheckPointDialog::check_point_on_line)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CheckPointDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CheckPointDialog.data,
      qt_meta_data_CheckPointDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CheckPointDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CheckPointDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CheckPointDialog.stringdata))
        return static_cast<void*>(const_cast< CheckPointDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CheckPointDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void CheckPointDialog::check_point_on_line(Point * _t1, Line * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
